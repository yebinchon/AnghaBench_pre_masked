
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fnbuf ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (char*,int,char*,char*,int,long) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(void)
{
 char VAR_5[VAR_0];
 long VAR_6;

 if (!VAR_1)
  return;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  FUNC_0(VAR_5, sizeof(VAR_5), "%s%0*ld", VAR_3,
      (int)VAR_4, VAR_6);
  FUNC_1(VAR_5);
 }
}
