
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_7__ {scalar_t__ seconds; } ;
struct TYPE_6__ {scalar_t__ seconds; } ;
struct TYPE_8__ {char* path; int mode; TYPE_2__ mtime; TYPE_1__ ctime; scalar_t__ gid; scalar_t__ uid; scalar_t__ ino; scalar_t__ dev; scalar_t__ file_size; int id; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (TYPE_3__ const*) ;
 size_t FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_3__* FUNC_5 (int *,size_t) ;
 int FUNC_6 (int **,char*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (char*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int **,int *) ;
 int FUNC_11 (int **,char*,int ,int *) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 size_t FUNC_14 (char*) ;

int FUNC_15(git_repository *VAR_1, int VAR_2, char** VAR_3)
{
 git_index *VAR_4;
 size_t VAR_5, VAR_6;
 char *VAR_7 = ".";
 size_t VAR_8;
 char VAR_9[VAR_0+1];
 VAR_9[VAR_0] = '\0';

 if (VAR_2 > 2)
  FUNC_1("usage: showindex [<repo-dir>]", ((void*)0));
 if (VAR_2 > 1)
  VAR_7 = VAR_3[1];

 VAR_8 = FUNC_14(VAR_7);
 if (VAR_8 > 5 && FUNC_13(VAR_7 + VAR_8 - 5, "index") == 0) {
  FUNC_0(FUNC_6(&VAR_4, VAR_7), "could not open index", VAR_7);
 } else {
  FUNC_0(FUNC_11(&VAR_1, VAR_7, 0, ((void*)0)), "could not open repository", VAR_7);
  FUNC_0(FUNC_10(&VAR_4, VAR_1), "could not open repository index", ((void*)0));
  FUNC_9(VAR_1);
 }

 FUNC_7(VAR_4, 0);

 VAR_6 = FUNC_3(VAR_4);
 if (!VAR_6)
  FUNC_12("Empty index\n");

 for (VAR_5 = 0; VAR_5 < VAR_6; ++VAR_5) {
  const git_index_entry *VAR_10 = FUNC_5(VAR_4, VAR_5);

  FUNC_8(VAR_9, &VAR_10->id);

  FUNC_12("File Path: %s\n", VAR_10->path);
  FUNC_12("    Stage: %d\n", FUNC_2(VAR_10));
  FUNC_12(" Blob SHA: %s\n", VAR_9);
  FUNC_12("File Mode: %07o\n", VAR_10->mode);
  FUNC_12("File Size: %d bytes\n", (int)VAR_10->file_size);
  FUNC_12("Dev/Inode: %d/%d\n", (int)VAR_10->dev, (int)VAR_10->ino);
  FUNC_12("  UID/GID: %d/%d\n", (int)VAR_10->uid, (int)VAR_10->gid);
  FUNC_12("    ctime: %d\n", (int)VAR_10->ctime.seconds);
  FUNC_12("    mtime: %d\n", (int)VAR_10->mtime.seconds);
  FUNC_12("\n");
 }

 FUNC_4(VAR_4);

 return 0;
}
