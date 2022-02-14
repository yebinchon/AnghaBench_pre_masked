
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct stat*) ;

char * FUNC_1(void)
{
 struct stat VAR_2;

 if( (FUNC_0(VAR_0, &VAR_2) > -1) && (VAR_2.st_mode & VAR_1) )
 {
  return VAR_0;
 }

 return ((void*)0);
}
