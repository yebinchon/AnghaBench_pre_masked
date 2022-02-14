
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_zone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct blk_zone* FUNC_0 (size_t,int,int ) ;
 size_t FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static struct blk_zone *FUNC_2(unsigned int *VAR_2)
{
 struct blk_zone *VAR_3;
 size_t VAR_4 = FUNC_1(*VAR_2, VAR_0);






 VAR_3 = FUNC_0(VAR_4, sizeof(struct blk_zone), VAR_1);
 if (!VAR_3) {
  *VAR_2 = 0;
  return ((void*)0);
 }

 *VAR_2 = VAR_4;

 return VAR_3;
}
