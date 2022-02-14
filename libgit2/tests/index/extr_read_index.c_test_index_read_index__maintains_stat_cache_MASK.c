
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int git_tree ;
typedef int git_oid ;
struct TYPE_8__ {size_t seconds; } ;
struct TYPE_7__ {size_t seconds; } ;
struct TYPE_9__ {char* path; int file_size; int mode; TYPE_2__ mtime; TYPE_1__ ctime; int id; } ;
typedef TYPE_3__ git_index_entry ;
typedef int git_index ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 size_t FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_3__* FUNC_6 (int *,size_t) ;
 int FUNC_7 (int **) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,int ,int *) ;
 int FUNC_14 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_15 (char*,char*) ;

void FUNC_16(void)
{
 git_index *VAR_2;
 git_oid VAR_3;
 git_index_entry VAR_4;
 const git_index_entry *VAR_5;
 git_tree *VAR_6;
 size_t VAR_7;

 FUNC_1(4, FUNC_4(VAR_0));


 FUNC_2(FUNC_10(&VAR_3, VAR_0));


 FUNC_13(&VAR_6, VAR_1, &VAR_3);
 FUNC_2(FUNC_7(&VAR_2));
 FUNC_2(FUNC_9(VAR_2, VAR_6));
 FUNC_12(VAR_6);


 FUNC_14(&VAR_4, 0, sizeof(git_index_entry));
 VAR_4.path = "Hello";
 FUNC_11(&VAR_4.id, "0123456789012345678901234567890123456789");
 VAR_4.file_size = 1234;
 VAR_4.mode = 0100644;
 FUNC_2(FUNC_3(VAR_2, &VAR_4));
 FUNC_1(5, FUNC_4(VAR_2));

 FUNC_2(FUNC_8(VAR_0, VAR_2));
 FUNC_5(VAR_2);

 FUNC_1(5, FUNC_4(VAR_0));

 for (VAR_7 = 0; VAR_7 < FUNC_4(VAR_0); VAR_7++) {
  VAR_5 = FUNC_6(VAR_0, VAR_7);

  if (FUNC_15(VAR_5->path, "Hello") == 0) {
   FUNC_1(0, VAR_5->ctime.seconds);
   FUNC_1(0, VAR_5->mtime.seconds);
  } else {
   FUNC_0(0 != VAR_5->ctime.seconds);
   FUNC_0(0 != VAR_5->mtime.seconds);
  }
 }
}
