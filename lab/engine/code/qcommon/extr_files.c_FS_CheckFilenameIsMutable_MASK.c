
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*,char const*,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4( const char *VAR_1,
  const char *VAR_2 )
{

 if( FUNC_3( VAR_1 )
  || FUNC_0( VAR_1, ".qvm" )
  || FUNC_0( VAR_1, ".pk3" ) )
 {
  FUNC_2( VAR_0, "%s: Not allowed to manipulate '%s' due "
   "to %s extension", VAR_2, VAR_1, FUNC_1( VAR_1 ) );
 }
}
