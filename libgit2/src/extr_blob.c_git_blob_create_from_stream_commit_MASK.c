
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_writestream ;
typedef int git_oid ;
struct TYPE_4__ {int path_lock; } ;
struct TYPE_3__ {int hintpath; TYPE_2__ fbuf; int repo; } ;
typedef TYPE_1__ blob_writestream ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(git_oid *VAR_0, git_writestream *VAR_1)
{
 int VAR_2;
 blob_writestream *VAR_3 = (blob_writestream *) VAR_1;






 if ((VAR_2 = FUNC_2(&VAR_3->fbuf)) < 0)
  goto cleanup;

 VAR_2 = FUNC_1(VAR_0, ((void*)0), VAR_3->repo, VAR_3->fbuf.path_lock,
         VAR_3->hintpath, 0, !!VAR_3->hintpath);

cleanup:
 FUNC_0(VAR_1);
 return VAR_2;

}
