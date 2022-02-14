
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef size_t off_t ;
typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int,char*) ;
 size_t FUNC_1 (char*,int,size_t,int *) ;
 size_t FUNC_2 (char*,int,size_t,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(FILE *VAR_1, off_t VAR_2)
{
 char VAR_3[4096];
 size_t VAR_4;

 while (VAR_2) {
  if ((uintmax_t)VAR_2 < sizeof(VAR_3))
   VAR_4 = VAR_2;
  else
   VAR_4 = sizeof(VAR_3);
  VAR_4 = FUNC_1(VAR_3, sizeof(char), VAR_4, VAR_1);
  if (VAR_4 == 0)
   break;
  if (FUNC_2(VAR_3, sizeof(char), VAR_4, VAR_0) != VAR_4)
   FUNC_0(1, "stdout");
  VAR_2 -= VAR_4;
 }
}
