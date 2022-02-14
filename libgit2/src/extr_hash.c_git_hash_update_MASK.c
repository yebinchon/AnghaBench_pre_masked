
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algo; int sha1; } ;
typedef TYPE_1__ git_hash_ctx ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,void const*,size_t) ;

int FUNC_2(git_hash_ctx *VAR_0, const void *VAR_1, size_t VAR_2)
{
 switch (VAR_0->algo) {
  case 128:
   return FUNC_1(&VAR_0->sha1, VAR_1, VAR_2);
  default:
   FUNC_0(0);
   return -1;
 }
}
