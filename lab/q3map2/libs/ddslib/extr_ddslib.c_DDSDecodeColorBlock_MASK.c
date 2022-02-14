
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* row; } ;
typedef TYPE_1__ ddsColorBlock_t ;



__attribute__((used)) static void FUNC_0( unsigned int *VAR_0, ddsColorBlock_t *VAR_1, int VAR_2, unsigned int VAR_3[ 4 ] ){
 int VAR_4, VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7[] = { 3, 12, 3 << 4, 3 << 6 };
 int VAR_8[] = { 0, 2, 4, 6 };



 for ( VAR_4 = 0; VAR_4 < 4; VAR_4++, VAR_0 += ( VAR_2 - 4 ) )
 {



  for ( VAR_5 = 0; VAR_5 < 4; VAR_5++ )
  {
   VAR_6 = VAR_1->row[ VAR_4 ] & VAR_7[ VAR_5 ];
   VAR_6 >>= VAR_8[ VAR_5 ];

   switch ( VAR_6 )
   {
   case 0:
    *VAR_0 = VAR_3[ 0 ];
    VAR_0++;
    break;

   case 1:
    *VAR_0 = VAR_3[ 1 ];
    VAR_0++;
    break;

   case 2:
    *VAR_0 = VAR_3[ 2 ];
    VAR_0++;
    break;

   case 3:
    *VAR_0 = VAR_3[ 3 ];
    VAR_0++;
    break;

   default:

    VAR_0++;
    break;
   }
  }
 }
}
