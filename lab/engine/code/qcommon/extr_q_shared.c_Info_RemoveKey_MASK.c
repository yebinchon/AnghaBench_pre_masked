
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*,char) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char*) ;

void FUNC_5( char *VAR_4, const char *VAR_5 ) {
 char *VAR_6;
 char VAR_7[VAR_1];
 char VAR_8[VAR_3];
 char *VAR_9;

 if ( FUNC_4( VAR_4 ) >= VAR_2 ) {
  FUNC_0( VAR_0, "Info_RemoveKey: oversize infostring" );
 }

 if (FUNC_2 (VAR_5, '\\')) {
  return;
 }

 while (1)
 {
  VAR_6 = VAR_4;
  if (*VAR_4 == '\\')
   VAR_4++;
  VAR_9 = VAR_7;
  while (*VAR_4 != '\\')
  {
   if (!*VAR_4)
    return;
   *VAR_9++ = *VAR_4++;
  }
  *VAR_9 = 0;
  VAR_4++;

  VAR_9 = VAR_8;
  while (*VAR_4 != '\\' && *VAR_4)
  {
   if (!*VAR_4)
    return;
   *VAR_9++ = *VAR_4++;
  }
  *VAR_9 = 0;

  if (!FUNC_3 (VAR_5, VAR_7) )
  {
   FUNC_1(VAR_6, VAR_4, FUNC_4(VAR_4) + 1);

   return;
  }

  if (!*VAR_4)
   return;
 }

}
