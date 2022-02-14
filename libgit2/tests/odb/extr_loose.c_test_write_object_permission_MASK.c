
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;
typedef int git_oid ;
typedef int git_odb_backend ;
typedef int git_odb ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int **,char*,int,int ,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int *,int *,char*,int,int ) ;
 int FUNC_7 (char*,struct stat*) ;
 int FUNC_8 (int) ;

void FUNC_9(
 mode_t VAR_1, mode_t VAR_2,
 mode_t VAR_3, mode_t VAR_4)
{
 git_odb *VAR_5;
 git_odb_backend *VAR_6;
 git_oid VAR_7;
 struct stat VAR_8;
 mode_t VAR_9, VAR_10;







 VAR_10 = 0777;


 VAR_9 = FUNC_8(0);
 FUNC_8(VAR_9);

 FUNC_1(FUNC_5(&VAR_5));
 FUNC_1(FUNC_3(&VAR_6, "test-objects", -1, 0, VAR_1, VAR_2));
 FUNC_1(FUNC_2(VAR_5, VAR_6, 1));
 FUNC_1(FUNC_6(&VAR_7, VAR_5, "Test data\n", 10, VAR_0));

 FUNC_1(FUNC_7("test-objects/67", &VAR_8));
 FUNC_0(VAR_8.st_mode & VAR_10, (VAR_3 & ~VAR_9) & VAR_10);

 FUNC_1(FUNC_7("test-objects/67/b808feb36201507a77f85e6d898f0a2836e4a5", &VAR_8));
 FUNC_0(VAR_8.st_mode & VAR_10, (VAR_4 & ~VAR_9) & VAR_10);

 FUNC_4(VAR_5);
}
