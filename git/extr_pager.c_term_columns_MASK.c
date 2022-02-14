
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct winsize {int ws_col; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int,int ,struct winsize*) ;

int FUNC_3(void)
{
 static int VAR_1;

 char *VAR_2;
 int VAR_3;

 if (VAR_1)
  return VAR_1;

 VAR_1 = 80;

 VAR_2 = FUNC_1("COLUMNS");
 if (VAR_2 && (VAR_3 = FUNC_0(VAR_2)) > 0)
  VAR_1 = VAR_3;
 return VAR_1;
}
