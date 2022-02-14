
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,char*,char*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,struct stat*) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static void
FUNC_9(int VAR_3, char *VAR_4) {
 struct stat VAR_5;
 FILE *VAR_6;

 VAR_6 = FUNC_4(VAR_3, "r");
 if (VAR_6 == ((void*)0))
  FUNC_1(1, "cannot open file %s", VAR_4);
 if (FUNC_6(FUNC_5(VAR_6), &VAR_5) == -1)
  FUNC_1(1, "%s", VAR_4);
 if (FUNC_0(VAR_5.st_mode)) {
  VAR_1 = VAR_0;
  FUNC_1(1, "%s", VAR_4);
 }
 FUNC_8(&VAR_2, VAR_6);
 FUNC_7(&VAR_2);
 FUNC_2();
 FUNC_3(VAR_6);
}
