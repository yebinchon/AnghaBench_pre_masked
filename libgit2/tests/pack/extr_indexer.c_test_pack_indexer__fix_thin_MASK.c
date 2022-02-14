
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
typedef int ssize_t ;
typedef int git_repository ;
typedef int git_oid ;
typedef int git_odb ;
struct TYPE_4__ {int local_objects; int indexed_objects; int received_objects; int total_objects; int member_0; } ;
typedef TYPE_1__ git_indexer_progress ;
typedef int git_indexer ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned char*,int,TYPE_1__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int **,char*,int ,int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ,int ,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int **,char*,int) ;
 int FUNC_14 (int **,int *) ;
 int FUNC_15 (int) ;
 int FUNC_16 (char const*,int ) ;
 int FUNC_17 (int,unsigned char*,int) ;
 int FUNC_18 (char const*,struct stat*) ;
 unsigned char* VAR_4 ;
 int VAR_5 ;

void FUNC_19(void)
{
 git_indexer *VAR_6 = ((void*)0);
 git_indexer_progress VAR_7 = { 0 };
 git_repository *VAR_8;
 git_odb *VAR_9;
 git_oid VAR_10, VAR_11;

 FUNC_3(FUNC_13(&VAR_8, "thin.git", 1));
 FUNC_3(FUNC_14(&VAR_9, VAR_8));


 FUNC_3(FUNC_10(&VAR_10, VAR_9, VAR_2, VAR_3, VAR_0));
 FUNC_11(&VAR_11, "e68fe8129b546b101aee9510c5328e7f21ca1d18");
 FUNC_2(&VAR_11, &VAR_10);

 FUNC_3(FUNC_8(&VAR_6, ".", 0, VAR_9, ((void*)0)));
 FUNC_3(FUNC_4(VAR_6, VAR_4, VAR_5, &VAR_7));
 FUNC_3(FUNC_5(VAR_6, &VAR_7));

 FUNC_1(VAR_7.total_objects, 2);
 FUNC_1(VAR_7.received_objects, 2);
 FUNC_1(VAR_7.indexed_objects, 2);
 FUNC_1(VAR_7.local_objects, 1);

 FUNC_11(&VAR_11, "fefdb2d740a3a6b6c03a0c7d6ce431c6d5810e13");
 FUNC_2(&VAR_11, FUNC_7(VAR_6));

 FUNC_6(VAR_6);
 FUNC_9(VAR_9);
 FUNC_12(VAR_8);






 {
  unsigned char VAR_12[128];
  int VAR_13;
  ssize_t VAR_14;
  struct stat VAR_15;
  const char *VAR_16 = "pack-fefdb2d740a3a6b6c03a0c7d6ce431c6d5810e13.pack";

  VAR_13 = FUNC_16(VAR_16, VAR_1);
  FUNC_0(VAR_13 != -1);

  FUNC_3(FUNC_18(VAR_16, &VAR_15));

  FUNC_3(FUNC_8(&VAR_6, ".", 0, ((void*)0), ((void*)0)));
  VAR_14 = FUNC_17(VAR_13, VAR_12, sizeof(VAR_12));
  FUNC_0(VAR_14 != -1);
  FUNC_15(VAR_13);

  FUNC_3(FUNC_4(VAR_6, VAR_12, VAR_14, &VAR_7));
  FUNC_3(FUNC_5(VAR_6, &VAR_7));

  FUNC_1(VAR_7.total_objects, 3);
  FUNC_1(VAR_7.received_objects, 3);
  FUNC_1(VAR_7.indexed_objects, 3);
  FUNC_1(VAR_7.local_objects, 0);

  FUNC_6(VAR_6);
 }
}
