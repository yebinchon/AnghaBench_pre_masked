
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
typedef int int8 ;
typedef int int32 ;
struct TYPE_2__ {int uf_fsr; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

int8 FUNC_0(void)
{
 int32 VAR_2;

 VAR_2 = (VAR_1.uf_fsr & VAR_0) >> 5;
 VAR_1.uf_fsr &= ~(u_long)VAR_0;
 return (VAR_2);
}
