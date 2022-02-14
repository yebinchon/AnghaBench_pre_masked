
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int integer; } ;
struct TYPE_3__ {int overbrightBits; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_0(float VAR_2[4], float VAR_3[4])
{
 float VAR_4, VAR_5, VAR_6;
 float VAR_7 = (1 << (VAR_0->integer - VAR_1.overbrightBits)) / 255.0f;

 VAR_4 = VAR_2[0] * VAR_7;
 VAR_5 = VAR_2[1] * VAR_7;
 VAR_6 = VAR_2[2] * VAR_7;


 if ( VAR_4 > 1 || VAR_5 > 1 || VAR_6 > 1 ) {
  float VAR_8;

  VAR_8 = VAR_4 > VAR_5 ? VAR_4 : VAR_5;
  VAR_8 = VAR_8 > VAR_6 ? VAR_8 : VAR_6;
  VAR_4 = VAR_4 / VAR_8;
  VAR_5 = VAR_5 / VAR_8;
  VAR_6 = VAR_6 / VAR_8;
 }

 VAR_3[0] = VAR_4;
 VAR_3[1] = VAR_5;
 VAR_3[2] = VAR_6;
 VAR_3[3] = VAR_2[3];
}
