
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
typedef TYPE_1__ git_oid ;
struct TYPE_7__ {int c; } ;
typedef TYPE_2__ git_hash_sha1_ctx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(git_oid *VAR_1, git_hash_sha1_ctx *VAR_2)
{
 FUNC_1(VAR_2);
 if (FUNC_0(VAR_1->id, &VAR_2->c)) {
  FUNC_2(VAR_0, "SHA1 collision attack detected");
  return -1;
 }

 return 0;
}
