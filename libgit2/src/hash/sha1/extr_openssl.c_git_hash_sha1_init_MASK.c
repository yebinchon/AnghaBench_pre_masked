
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int c; } ;
typedef TYPE_1__ git_hash_sha1_ctx ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(git_hash_sha1_ctx *VAR_1)
{
 FUNC_1(VAR_1);

 if (FUNC_0(&VAR_1->c) != 1) {
  FUNC_2(VAR_0, "hash_openssl: failed to initialize hash context");
  return -1;
 }

 return 0;
}
