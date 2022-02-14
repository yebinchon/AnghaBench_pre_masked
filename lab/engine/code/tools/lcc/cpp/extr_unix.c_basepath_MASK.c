
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uchar ;


 scalar_t__ FUNC_0 (int *,int,int ) ;
 char* FUNC_1 (char*,char) ;

char *FUNC_2( char *VAR_0 )
{
 char *VAR_1 = ".";
 char *VAR_2;
 if ((VAR_2 = FUNC_1(VAR_0, '/')) != ((void*)0)) {
  int VAR_3 = VAR_2 - VAR_0;
  VAR_1 = (char*)FUNC_0((uchar*)VAR_0, VAR_3+1, 0);
  VAR_1[VAR_3] = '\0';
 }

 return VAR_1;
}
