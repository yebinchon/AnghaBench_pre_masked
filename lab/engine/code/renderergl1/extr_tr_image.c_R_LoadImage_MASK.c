
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int byte ;
struct TYPE_4__ {int (* ImageLoader ) (char*,int **,int*,int*) ;int ext; } ;
struct TYPE_3__ {int (* Printf ) (int ,char*,char const*,char*) ;} ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,int ) ;
 int FUNC_3 (char*,char const*,int) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_4 (char*,int **,int*,int*) ;
 int FUNC_5 (char*,int **,int*,int*) ;
 int FUNC_6 (int ,char*,char const*,char*) ;
 char* FUNC_7 (char*,char*,int ) ;

void FUNC_8( const char *VAR_7, byte **VAR_8, int *VAR_9, int *VAR_10 )
{
 qboolean VAR_11 = VAR_4;
 int VAR_12 = -1;
 int VAR_13;
 char VAR_14[ VAR_0 ];
 const char *VAR_15;
 char *VAR_16;

 *VAR_8 = ((void*)0);
 *VAR_9 = 0;
 *VAR_10 = 0;

 FUNC_3( VAR_14, VAR_7, VAR_0 );

 VAR_15 = FUNC_0( VAR_14 );

 if( *VAR_15 )
 {

  for( VAR_13 = 0; VAR_13 < VAR_3; VAR_13++ )
  {
   if( !FUNC_2( VAR_15, VAR_2[ VAR_13 ].ext ) )
   {

    VAR_2[ VAR_13 ].ImageLoader( VAR_14, VAR_8, VAR_9, VAR_10 );
    break;
   }
  }


  if( VAR_13 < VAR_3 )
  {
   if( *VAR_8 == ((void*)0) )
   {


    VAR_11 = VAR_5;
    VAR_12 = VAR_13;
    FUNC_1( VAR_7, VAR_14, VAR_0 );
   }
   else
   {

    return;
   }
  }
 }



 for( VAR_13 = 0; VAR_13 < VAR_3; VAR_13++ )
 {
  if (VAR_13 == VAR_12)
   continue;

  VAR_16 = FUNC_7( "%s.%s", VAR_14, VAR_2[ VAR_13 ].ext );


  VAR_2[ VAR_13 ].ImageLoader( VAR_16, VAR_8, VAR_9, VAR_10 );

  if( *VAR_8 )
  {
   if( VAR_11 )
   {
    VAR_6.Printf( VAR_1, "WARNING: %s not present, using %s instead\n",
      VAR_7, VAR_16 );
   }

   break;
  }
 }
}
