
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int FILE ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (char const*,struct stat*) ;

FILE *FUNC_7( const char *VAR_2 )
{
 FILE *VAR_3;
 int VAR_4;
 int VAR_5;
 struct stat VAR_6;


 if( !FUNC_6( VAR_2, &VAR_6 ) && FUNC_1( VAR_6.st_mode ) )
  FUNC_0( VAR_2 );

 VAR_4 = FUNC_5( VAR_2, 0600 );
 if( VAR_4 != 0 )
  return ((void*)0);

 VAR_3 = FUNC_4( VAR_2, "w+" );
 if( VAR_3 )
 {
  VAR_5 = FUNC_3( VAR_3 );
  FUNC_2( VAR_5, VAR_0, VAR_1 );
 }

 return VAR_3;
}
