
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int algo; int sha1; } ;
typedef TYPE_1__ git_hash_ctx ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(git_hash_ctx *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = FUNC_0(&VAR_1->sha1)) < 0)
  return VAR_2;

 VAR_1->algo = VAR_0;

 return 0;
}
