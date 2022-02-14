
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct TYPE_2__ {int batu; int batl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int
FUNC_0(int VAR_10, vm_paddr_t VAR_11, vm_size_t VAR_12)
{
 u_int VAR_13;
 u_int32_t VAR_14;
 u_int32_t VAR_15;
 u_int32_t VAR_16;




 if (!(VAR_9[VAR_10].batu & VAR_5))
  return (VAR_6);





 VAR_13 = VAR_9[VAR_10].batl & (VAR_2|VAR_1|VAR_4);
 if (VAR_13 != (VAR_2|VAR_1|VAR_4))
  return (VAR_7);






 VAR_14 = VAR_9[VAR_10].batl & VAR_3;
 VAR_16 = (VAR_9[VAR_10].batu & ~(VAR_0)) | 0x03;
 VAR_15 = VAR_14 | (VAR_16 << 15) | 0x7fff;

 if ((VAR_11 < VAR_14) || ((VAR_11 + VAR_12) > VAR_15))
  return (VAR_8);

 return (0);
}
