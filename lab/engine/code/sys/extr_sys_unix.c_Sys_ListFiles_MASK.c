
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {char const* d_name; } ;
typedef int search ;
typedef scalar_t__ qboolean ;
typedef int DIR ;


 int FUNC_0 (char*,int,char*,char const*,char const*) ;
 char* FUNC_1 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int VAR_2 ;
 int FUNC_3 (char const*,char*,char*,char**,int*) ;
 char** FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*) ;
 scalar_t__ VAR_3 ;
 struct dirent* FUNC_7 (int *) ;
 int FUNC_8 (char*,struct stat*) ;
 int FUNC_9 (char const*) ;

char **FUNC_10( const char *VAR_4, const char *VAR_5, char *VAR_6, int *VAR_7, qboolean VAR_8 )
{
 struct dirent *VAR_9;
 DIR *VAR_10;
 qboolean VAR_11 = VAR_8;
 char VAR_12[VAR_1];
 int VAR_13;
 char **VAR_14;
 char *VAR_15[VAR_0];
 int VAR_16;
 struct stat VAR_17;

 int VAR_18;

 if (VAR_6) {

  VAR_13 = 0;
  FUNC_3( VAR_4, "", VAR_6, VAR_15, &VAR_13 );

  VAR_15[ VAR_13 ] = ((void*)0);
  *VAR_7 = VAR_13;

  if (!VAR_13)
   return ((void*)0);

  VAR_14 = FUNC_4( ( VAR_13 + 1 ) * sizeof( *VAR_14 ) );
  for ( VAR_16 = 0 ; VAR_16 < VAR_13 ; VAR_16++ ) {
   VAR_14[VAR_16] = VAR_15[VAR_16];
  }
  VAR_14[VAR_16] = ((void*)0);

  return VAR_14;
 }

 if ( !VAR_5)
  VAR_5 = "";

 if ( VAR_5[0] == '/' && VAR_5[1] == 0 ) {
  VAR_5 = "";
  VAR_11 = VAR_3;
 }

 VAR_18 = FUNC_9( VAR_5 );


 VAR_13 = 0;

 if ((VAR_10 = FUNC_6(VAR_4)) == ((void*)0)) {
  *VAR_7 = 0;
  return ((void*)0);
 }

 while ((VAR_9 = FUNC_7(VAR_10)) != ((void*)0)) {
  FUNC_0(VAR_12, sizeof(VAR_12), "%s/%s", VAR_4, VAR_9->d_name);
  if (FUNC_8(VAR_12, &VAR_17) == -1)
   continue;
  if ((VAR_11 && !(VAR_17.st_mode & VAR_2)) ||
   (!VAR_11 && (VAR_17.st_mode & VAR_2)))
   continue;

  if (*VAR_5) {
   if ( FUNC_9( VAR_9->d_name ) < VAR_18 ||
    FUNC_2(
     VAR_9->d_name + FUNC_9( VAR_9->d_name ) - VAR_18,
     VAR_5 ) ) {
    continue;
   }
  }

  if ( VAR_13 == VAR_0 - 1 )
   break;
  VAR_15[ VAR_13 ] = FUNC_1( VAR_9->d_name );
  VAR_13++;
 }

 VAR_15[ VAR_13 ] = ((void*)0);

 FUNC_5(VAR_10);


 *VAR_7 = VAR_13;

 if ( !VAR_13 ) {
  return ((void*)0);
 }

 VAR_14 = FUNC_4( ( VAR_13 + 1 ) * sizeof( *VAR_14 ) );
 for ( VAR_16 = 0 ; VAR_16 < VAR_13 ; VAR_16++ ) {
  VAR_14[VAR_16] = VAR_15[VAR_16];
 }
 VAR_14[VAR_16] = ((void*)0);

 return VAR_14;
}
