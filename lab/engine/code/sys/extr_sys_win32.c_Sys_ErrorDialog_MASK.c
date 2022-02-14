
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int HGLOBAL ;


 int VAR_0 ;
 unsigned int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_4 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,char*) ;
 int FUNC_11 (char*,char const*) ;

void FUNC_12( const char *VAR_5 )
{
 if( FUNC_10( VAR_2, FUNC_11( "%s. Copy console log to clipboard?", VAR_5 ),
   "Error" ) == VAR_1 )
 {
  HGLOBAL VAR_6;
  char *VAR_7;

  VAR_6 = FUNC_5( VAR_4|VAR_3, FUNC_1( ) + 1 );
  VAR_7 = (char *)FUNC_6( VAR_6 );

  if( VAR_7 )
  {
   char *VAR_8 = VAR_7;
   char VAR_9[ 1024 ];
   unsigned int VAR_10;

   while( ( VAR_10 = FUNC_0( VAR_9, sizeof( VAR_9 ) ) ) > 0 )
   {
    FUNC_3( VAR_8, VAR_9, VAR_10 );
    VAR_8 += VAR_10;
   }

   *VAR_8 = '\0';

   if( FUNC_8( ((void*)0) ) && FUNC_4( ) )
    FUNC_9( VAR_0, VAR_6 );

   FUNC_7( VAR_7 );
   FUNC_2( );
  }
 }
}
