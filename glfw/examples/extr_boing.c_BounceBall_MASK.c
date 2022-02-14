
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float GLfloat ;


 float VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 float VAR_7 ;
 int VAR_8 ;
 float VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (float) ;

void FUNC_2( double VAR_12 )
{
   GLfloat VAR_13;
   GLfloat VAR_14;

   if ( VAR_11 )
     return;


   if ( VAR_6 > (VAR_2/2 + VAR_5 ) )
   {
      VAR_7 = -0.5f - 0.75f * (GLfloat)FUNC_0() / (GLfloat)VAR_3;
      VAR_10 = -VAR_10;
   }
   if ( VAR_6 < -(VAR_1/2 + VAR_4) )
   {
      VAR_7 = 0.5f + 0.75f * (GLfloat)FUNC_0() / (GLfloat)VAR_3;
      VAR_10 = -VAR_10;
   }


   if ( VAR_8 > VAR_1/2 )
   {
      VAR_9 = -0.75f - 1.f * (GLfloat)FUNC_0() / (GLfloat)VAR_3;
   }
   if ( VAR_8 < -VAR_1/2*0.85 )
   {
      VAR_9 = 0.75f + 1.f * (GLfloat)FUNC_0() / (GLfloat)VAR_3;
   }


   VAR_6 += VAR_7 * ((float)VAR_12*VAR_0);
   VAR_8 += VAR_9 * ((float)VAR_12*VAR_0);




   if ( VAR_9 < 0 ) VAR_13 = -1.0; else VAR_13 = 1.0;

   VAR_14 = (VAR_8 + VAR_1/2) * 90 / VAR_1;
   if ( VAR_14 > 80 ) VAR_14 = 80;
   if ( VAR_14 < 10 ) VAR_14 = 10;

   VAR_9 = VAR_13 * 4.f * (float) FUNC_1( VAR_14 );
}
