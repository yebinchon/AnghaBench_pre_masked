
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct copy_from_grant {size_t grant_idx; scalar_t__ bvec_offset; scalar_t__ bvec_data; struct blk_shadow* s; } ;
struct blk_shadow {TYPE_1__** grants_used; } ;
struct TYPE_2__ {int page; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, void *VAR_3)
{
 struct copy_from_grant *VAR_4 = VAR_3;
 char *VAR_5;

 const struct blk_shadow *VAR_6 = VAR_4->s;

 VAR_5 = FUNC_0(VAR_6->grants_used[VAR_4->grant_idx]->page);

 FUNC_2(VAR_4->bvec_data + VAR_4->bvec_offset,
        VAR_5 + VAR_1, VAR_2);

 VAR_4->bvec_offset += VAR_2;
 VAR_4->grant_idx++;

 FUNC_1(VAR_5);
}
