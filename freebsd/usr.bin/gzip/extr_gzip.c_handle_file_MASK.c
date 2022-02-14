
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int outfile ;
typedef int off_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,char*,int,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_6(char *VAR_5, struct stat *VAR_6)
{
 off_t VAR_7, VAR_8;
 char VAR_9[VAR_0];

 FUNC_3(VAR_5, VAR_6->st_size);
 if (VAR_2) {
  VAR_7 = FUNC_1(VAR_5, VAR_9, sizeof(VAR_9));

  if (VAR_4 && VAR_3)
   FUNC_4(VAR_5, VAR_7 != -1);

  if (VAR_7 == -1)
   return;
  VAR_8 = VAR_6->st_size;
 } else {
  VAR_8 = FUNC_0(VAR_5, VAR_9, sizeof(VAR_9));
  if (VAR_8 == -1)
   return;
  VAR_7 = VAR_6->st_size;
 }
 FUNC_2();


 if (VAR_4 && !VAR_3)
  FUNC_5(VAR_5, (VAR_1) ? ((void*)0) : VAR_9, VAR_7, VAR_8);

}
