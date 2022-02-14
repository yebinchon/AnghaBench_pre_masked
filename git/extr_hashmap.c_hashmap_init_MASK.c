
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct hashmap {int do_count_items; void const* cmpfn_data; scalar_t__ cmpfn; } ;
typedef scalar_t__ hashmap_cmp_fn ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct hashmap*,unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct hashmap*,int ,int) ;

void FUNC_2(struct hashmap *VAR_4, hashmap_cmp_fn VAR_5,
  const void *VAR_6, size_t VAR_7)
{
 unsigned int VAR_8 = VAR_0;

 FUNC_1(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->cmpfn = VAR_5 ? VAR_5 : VAR_3;
 VAR_4->cmpfn_data = VAR_6;


 VAR_7 = (unsigned int) ((uint64_t) VAR_7 * 100
   / VAR_1);
 while (VAR_7 > VAR_8)
  VAR_8 <<= VAR_2;
 FUNC_0(VAR_4, VAR_8);





 VAR_4->do_count_items = 1;
}
