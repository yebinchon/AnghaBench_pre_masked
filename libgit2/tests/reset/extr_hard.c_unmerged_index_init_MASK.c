
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;
typedef int git_index ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int,int *) ;

__attribute__((used)) static void FUNC_3(git_index *VAR_0, int VAR_1)
{
 int VAR_2 = 1;
 int VAR_3 = 2;
 int VAR_4 = 4;
 git_oid VAR_5, VAR_6, VAR_7;

 FUNC_1(&VAR_5, "452e4244b5d083ddf0460acf1ecc74db9dcfa11a");
 FUNC_1(&VAR_6, "32504b727382542f9f089e24fddac5e78533e96c");
 FUNC_1(&VAR_7, "061d42a44cacde5726057b67558821d95db96f19");

 FUNC_0("status/conflicting_file", "conflicting file\n");

 if (VAR_1 & VAR_2)
  FUNC_2(VAR_0, 1, &VAR_5);

 if (VAR_1 & VAR_3)
  FUNC_2(VAR_0, 2, &VAR_6);

 if (VAR_1 & VAR_4)
  FUNC_2(VAR_0, 3, &VAR_7);
}
