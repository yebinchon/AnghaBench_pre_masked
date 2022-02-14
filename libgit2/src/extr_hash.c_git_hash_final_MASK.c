
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_oid ;
struct TYPE_3__ {int algo; int sha1; } ;
typedef TYPE_1__ git_hash_ctx ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(git_oid *VAR_0, git_hash_ctx *VAR_1)
{
 switch (VAR_1->algo) {
  case 128:
   return FUNC_1(VAR_0, &VAR_1->sha1);
  default:
   FUNC_0(0);
   return -1;
 }
}
