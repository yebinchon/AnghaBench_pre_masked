
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
typedef int byte ;
struct TYPE_6__ {int (* ImageLoader ) (char*,int **,int*,int*) ;int ext; } ;
struct TYPE_5__ {scalar_t__ integer; } ;
struct TYPE_4__ {int (* Printf ) (int ,char*,char const*,char*) ;} ;
typedef int GLenum ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int,char*) ;
 int FUNC_3 (char const*,int ) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char*,int **,int*,int*,int *,int*) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 TYPE_1__ VAR_8 ;
 int FUNC_6 (char*,int **,int*,int*) ;
 int FUNC_7 (char*,int **,int*,int*) ;
 int FUNC_8 (int ,char*,char const*,char*) ;
 char* FUNC_9 (char*,char*,int ) ;

void FUNC_10( const char *VAR_9, byte **VAR_10, int *VAR_11, int *VAR_12, GLenum *VAR_13, int *VAR_14 )
{
 qboolean VAR_15 = VAR_5;
 int VAR_16 = -1;
 int VAR_17;
 char VAR_18[ VAR_1 ];
 const char *VAR_19;
 char *VAR_20;

 *VAR_10 = ((void*)0);
 *VAR_11 = 0;
 *VAR_12 = 0;
 *VAR_13 = VAR_0;
 *VAR_14 = 0;

 FUNC_4( VAR_18, VAR_9, VAR_1 );

 VAR_19 = FUNC_0( VAR_18 );


 if (VAR_7->integer)
 {
  char VAR_21[VAR_1];

  FUNC_1(VAR_9, VAR_21, VAR_1);
  FUNC_2(VAR_21, VAR_1, ".dds");

  FUNC_5(VAR_21, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);


  if (*VAR_10)
   return;
 }

 if( *VAR_19 )
 {

  for( VAR_17 = 0; VAR_17 < VAR_4; VAR_17++ )
  {
   if( !FUNC_3( VAR_19, VAR_3[ VAR_17 ].ext ) )
   {

    VAR_3[ VAR_17 ].ImageLoader( VAR_18, VAR_10, VAR_11, VAR_12 );
    break;
   }
  }


  if( VAR_17 < VAR_4 )
  {
   if( *VAR_10 == ((void*)0) )
   {


    VAR_15 = VAR_6;
    VAR_16 = VAR_17;
    FUNC_1( VAR_9, VAR_18, VAR_1 );
   }
   else
   {

    return;
   }
  }
 }



 for( VAR_17 = 0; VAR_17 < VAR_4; VAR_17++ )
 {
  if (VAR_17 == VAR_16)
   continue;

  VAR_20 = FUNC_9( "%s.%s", VAR_18, VAR_3[ VAR_17 ].ext );


  VAR_3[ VAR_17 ].ImageLoader( VAR_20, VAR_10, VAR_11, VAR_12 );

  if( *VAR_10 )
  {
   if( VAR_15 )
   {
    VAR_8.Printf( VAR_2, "WARNING: %s not present, using %s instead\n",
      VAR_9, VAR_20 );
   }

   break;
  }
 }
}
