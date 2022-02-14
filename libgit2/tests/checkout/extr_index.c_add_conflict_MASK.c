
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
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_5(git_index *VAR_0, const char *VAR_1)
{
 git_index_entry VAR_2;

 FUNC_4(&VAR_2, 0, sizeof(git_index_entry));

 VAR_2.mode = 0100644;
 VAR_2.path = VAR_1;

 FUNC_3(&VAR_2.id, "d427e0b2e138501a3d15cc376077a3631e15bd46");
 FUNC_0(&VAR_2, 1);
 FUNC_1(FUNC_2(VAR_0, &VAR_2));

 FUNC_3(&VAR_2.id, "4e886e602529caa9ab11d71f86634bd1b6e0de10");
 FUNC_0(&VAR_2, 2);
 FUNC_1(FUNC_2(VAR_0, &VAR_2));

 FUNC_3(&VAR_2.id, "2bd0a343aeef7a2cf0d158478966a6e587ff3863");
 FUNC_0(&VAR_2, 3);
 FUNC_1(FUNC_2(VAR_0, &VAR_2));
}
