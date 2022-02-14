
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int mode_t ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int *,int *) ;
 int FUNC_3 (char*,struct stat*) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(mode_t VAR_1, mode_t VAR_2)
{
 struct stat VAR_3;
 mode_t VAR_4, VAR_5;

 FUNC_5();

 FUNC_2(VAR_0, ".", VAR_1, ((void*)0), ((void*)0));







 VAR_5 = 0777;


 VAR_4 = FUNC_4(0);
 FUNC_4(VAR_4);

 FUNC_1(FUNC_3("pack-7f5fa362c664d68ba7221259be1cbd187434b2f0.idx", &VAR_3));
 FUNC_0(VAR_3.st_mode & VAR_5, (VAR_2 & ~VAR_4) & VAR_5);

 FUNC_1(FUNC_3("pack-7f5fa362c664d68ba7221259be1cbd187434b2f0.pack", &VAR_3));
 FUNC_0(VAR_3.st_mode & VAR_5, (VAR_2 & ~VAR_4) & VAR_5);
}
