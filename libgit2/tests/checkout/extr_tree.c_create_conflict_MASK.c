
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mode; char const* path; int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int **,int ) ;
 int FUNC_7 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_8(const char *VAR_1)
{
 git_index *VAR_2;
 git_index_entry VAR_3;

 FUNC_1(FUNC_6(&VAR_2, VAR_0));

 FUNC_7(&VAR_3, 0x0, sizeof(git_index_entry));
 VAR_3.mode = 0100644;
 FUNC_0(&VAR_3, 1);
 FUNC_5(&VAR_3.id, "d427e0b2e138501a3d15cc376077a3631e15bd46");
 VAR_3.path = VAR_1;
 FUNC_1(FUNC_2(VAR_2, &VAR_3));

 FUNC_0(&VAR_3, 2);
 FUNC_5(&VAR_3.id, "ee3fa1b8c00aff7fe02065fdb50864bb0d932ccf");
 FUNC_1(FUNC_2(VAR_2, &VAR_3));

 FUNC_0(&VAR_3, 3);
 FUNC_5(&VAR_3.id, "2bd0a343aeef7a2cf0d158478966a6e587ff3863");
 FUNC_1(FUNC_2(VAR_2, &VAR_3));

 FUNC_1(FUNC_4(VAR_2));
 FUNC_3(VAR_2);
}
