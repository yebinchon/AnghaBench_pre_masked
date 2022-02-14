
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int git_writestream ;
typedef int git_repository ;
struct TYPE_13__ {int ptr; } ;
typedef TYPE_2__ git_buf ;
struct TYPE_12__ {int (* free ) (int *) ;int close; int write; } ;
struct TYPE_14__ {int fbuf; TYPE_1__ parent; int * repo; struct TYPE_14__* hintpath; } ;
typedef TYPE_3__ blob_writestream ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 TYPE_3__* FUNC_3 (int,int) ;
 TYPE_3__* FUNC_4 (char const*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ,char*) ;
 int FUNC_8 (int *,int ,int ,int,int) ;
 int FUNC_9 (TYPE_2__*,int *,int ) ;

int FUNC_10(git_writestream **VAR_5, git_repository *VAR_6, const char *VAR_7)
{
 int VAR_8;
 git_buf VAR_9 = VAR_0;
 blob_writestream *VAR_10;

 FUNC_1(VAR_5 && VAR_6);

 VAR_10 = FUNC_3(1, sizeof(blob_writestream));
 FUNC_0(VAR_10);

 if (VAR_7) {
  VAR_10->hintpath = FUNC_4(VAR_7);
  FUNC_0(VAR_10->hintpath);
 }

 VAR_10->repo = VAR_6;
 VAR_10->parent.write = VAR_4;
 VAR_10->parent.close = VAR_3;
 VAR_10->parent.free = FUNC_2;

 if ((VAR_8 = FUNC_9(&VAR_9, VAR_6, VAR_2)) < 0
  || (VAR_8 = FUNC_7(&VAR_9, VAR_9.ptr, "streamed")) < 0)
  goto cleanup;

 if ((VAR_8 = FUNC_8(&VAR_10->fbuf, FUNC_5(&VAR_9), VAR_1,
            0666, 2 * 1024 * 1024)) < 0)
  goto cleanup;

 *VAR_5 = (git_writestream *) VAR_10;

cleanup:
 if (VAR_8 < 0)
  FUNC_2((git_writestream *) VAR_10);

 FUNC_6(&VAR_9);
 return VAR_8;
}
