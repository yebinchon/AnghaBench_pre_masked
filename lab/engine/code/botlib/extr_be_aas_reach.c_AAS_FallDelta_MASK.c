
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float phys_gravity; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (float) ;
 float FUNC_1 (int) ;

float FUNC_2(float VAR_1)
{
 float VAR_2, VAR_3, VAR_4;

 VAR_4 = VAR_0.phys_gravity;
 VAR_2 = FUNC_1(FUNC_0(VAR_1) * 2 / VAR_4);
 VAR_3 = VAR_2 * VAR_4;
 return VAR_3 * VAR_3 * 0.0001;
}
