
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float y; float x; float z; } ;
typedef TYPE_1__ vertex_t ;
typedef int GLfloat ;


 int FUNC_0 (TYPE_1__,TYPE_1__,TYPE_1__,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (float,float,float) ;
 int FUNC_4 () ;
 int FUNC_5 (float,float,float) ;
 int FUNC_6 (float,float,float) ;
 int FUNC_7 (char*,...) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9( GLfloat VAR_6,
                        GLfloat VAR_7 )
{
   vertex_t VAR_8;
   vertex_t VAR_9;
   vertex_t VAR_10;
   vertex_t VAR_11;
   vertex_t VAR_12;
   GLfloat VAR_13;
   static int VAR_14 = 0;





   for ( VAR_13 = 0;
         VAR_13 <= (360 - VAR_3);
         VAR_13 += VAR_3 )
   {



      if ( VAR_14 )
         FUNC_3( 0.8f, 0.1f, 0.1f );
      else
         FUNC_3( 0.95f, 0.95f, 0.95f );







      VAR_14 = ! VAR_14;




      if ( VAR_5 == VAR_0 )
         FUNC_3( 0.35f, 0.35f, 0.35f );




      VAR_8.y = VAR_9.y = (float) FUNC_1(VAR_7) * VAR_2;
      VAR_10.y = VAR_11.y = (float) FUNC_1(VAR_6) * VAR_2;






      VAR_8.x = (float) FUNC_1( VAR_13 ) * (VAR_2 * (float) FUNC_8( VAR_6 + VAR_4 ));
      VAR_11.x = (float) FUNC_1( VAR_13 ) * (VAR_2 * (float) FUNC_8( VAR_6 ));
      VAR_9.x = (float) FUNC_1( VAR_13 + VAR_3 ) * (VAR_2 * (float) FUNC_8( VAR_6 + VAR_4 ));
      VAR_10.x = (float) FUNC_1( VAR_13 + VAR_3 ) * (VAR_2 * (float) FUNC_8( VAR_6 ));

      VAR_8.z = (float) FUNC_8( VAR_13 ) * (VAR_2 * (float) FUNC_8( VAR_6 + VAR_4 ));
      VAR_11.z = (float) FUNC_8( VAR_13 ) * (VAR_2 * (float) FUNC_8( VAR_6 ));
      VAR_9.z = (float) FUNC_8( VAR_13 + VAR_3 ) * (VAR_2 * (float) FUNC_8( VAR_6 + VAR_4 ));
      VAR_10.z = (float) FUNC_8( VAR_13 + VAR_3 ) * (VAR_2 * (float) FUNC_8( VAR_6 ));




      FUNC_2( VAR_1 );

      FUNC_0( VAR_8, VAR_9, VAR_10, &VAR_12 );
      FUNC_5( VAR_12.x, VAR_12.y, VAR_12.z );

      FUNC_6( VAR_8.x, VAR_8.y, VAR_8.z );
      FUNC_6( VAR_9.x, VAR_9.y, VAR_9.z );
      FUNC_6( VAR_10.x, VAR_10.y, VAR_10.z );
      FUNC_6( VAR_11.x, VAR_11.y, VAR_11.z );

      FUNC_4();
   }




   VAR_14 = ! VAR_14;




   return;
}
