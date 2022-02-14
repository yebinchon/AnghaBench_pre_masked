
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float phys_gravity; float phys_maxvelocity; double rs_maxjumpfallheight; } ;


 TYPE_1__ VAR_0 ;
 float FUNC_0 (double) ;

float FUNC_1(float VAR_1)
{
 float VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_0.phys_gravity;
 VAR_3 = VAR_0.phys_maxvelocity;

 VAR_4 = FUNC_0(VAR_0.rs_maxjumpfallheight / (0.5 * VAR_2));

 return VAR_3 * (VAR_4 + VAR_1 / VAR_2);
}
