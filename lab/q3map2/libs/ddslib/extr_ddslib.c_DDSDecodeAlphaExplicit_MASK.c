
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short a; scalar_t__ b; scalar_t__ g; scalar_t__ r; } ;
typedef TYPE_1__ ddsColor_t ;
struct TYPE_5__ {int * row; } ;
typedef TYPE_2__ ddsAlphaBlockExplicit_t ;


 unsigned short FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( unsigned int *VAR_0, ddsAlphaBlockExplicit_t *VAR_1, int VAR_2, unsigned int VAR_3 ){
 int VAR_4, VAR_5;
 unsigned short VAR_6;
 ddsColor_t VAR_7;



 VAR_7.r = 0;
 VAR_7.g = 0;
 VAR_7.b = 0;


 for ( VAR_4 = 0; VAR_4 < 4; VAR_4++, VAR_0 += ( VAR_2 - 4 ) )
 {
  VAR_6 = FUNC_0( VAR_1->row[ VAR_4 ] );


  for ( VAR_5 = 0; VAR_5 < 4; VAR_5++ )
  {

   *VAR_0 &= VAR_3;
   VAR_7.a = VAR_6 & 0x000F;
   VAR_7.a = VAR_7.a | ( VAR_7.a << 4 );
   *VAR_0 |= *( (unsigned int*) &VAR_7 );
   VAR_6 >>= 4;
   VAR_0++;

  }
 }
}
