
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*) ;
 int VAR_2 ;

void FUNC_3( const char *VAR_3, const char *VAR_4 )
{
 int VAR_5 = FUNC_1( VAR_3 );

 if((VAR_5 != VAR_0) && (VAR_5 & VAR_1))
 {
  if( VAR_4 )
   FUNC_0( VAR_2, "Restricted source tried to set "
    "\"%s\" to \"%s\"", VAR_3, VAR_4 );
  else
   FUNC_0( VAR_2, "Restricted source tried to "
    "modify \"%s\"", VAR_3 );
  return;
 }
 FUNC_2( VAR_3, VAR_4 );
}
