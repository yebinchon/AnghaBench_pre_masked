
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int git_repository ;
struct TYPE_6__ {int mode; char* path; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (unsigned int*,int *,char*) ;
 int FUNC_8 (TYPE_1__*,int,int) ;

void FUNC_9(void)
{
 git_repository *VAR_2 = FUNC_2("status");
 git_index *VAR_3;
 unsigned int VAR_4;
 git_index_entry VAR_5, VAR_6, VAR_7;

 FUNC_8(&VAR_5, 0x0, sizeof(git_index_entry));
 FUNC_8(&VAR_6, 0x0, sizeof(git_index_entry));
 FUNC_8(&VAR_7, 0x0, sizeof(git_index_entry));

 VAR_5.mode = 0100644;
 VAR_5.path = "modified_file";
 FUNC_5(&VAR_5.id,
  "452e4244b5d083ddf0460acf1ecc74db9dcfa11a");

 VAR_6.mode = 0100644;
 VAR_6.path = "modified_file";
 FUNC_5(&VAR_6.id,
  "452e4244b5d083ddf0460acf1ecc74db9dcfa11a");

 VAR_7.mode = 0100644;
 VAR_7.path = "modified_file";
 FUNC_5(&VAR_7.id,
  "452e4244b5d083ddf0460acf1ecc74db9dcfa11a");

 FUNC_1(FUNC_7(&VAR_4, VAR_2, "modified_file"));
 FUNC_0(VAR_1, VAR_4);

 FUNC_1(FUNC_6(&VAR_3, VAR_2));
 FUNC_1(FUNC_3(VAR_3, &VAR_5,
  &VAR_6, &VAR_7));

 FUNC_1(FUNC_7(&VAR_4, VAR_2, "modified_file"));
 FUNC_0(VAR_0, VAR_4);

 FUNC_4(VAR_3);
}
