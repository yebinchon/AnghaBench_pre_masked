
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,struct stat*) ;

FILE *FUNC_3( const char *VAR_0, const char *VAR_1 ) {
 struct stat VAR_2;


 if ( !FUNC_2( VAR_0, &VAR_2 ) && FUNC_0( VAR_2.st_mode ) )
  return ((void*)0);

 return FUNC_1( VAR_0, VAR_1 );
}
