
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* idd; } ;
struct TYPE_5__ {int* ipacket; int ddi; TYPE_1__ di_scratch; } ;
typedef TYPE_2__ hil_mlc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_0(hil_mlc *VAR_8, int VAR_9)
{
 int VAR_10;






 if (VAR_8->ipacket[0] & VAR_6)
  goto bail;


 for (VAR_10 = 1; VAR_10 < 16; VAR_10++) {
  if (((VAR_8->ipacket[VAR_10] & VAR_5) ==
       (VAR_8->ipacket[0] & VAR_5)) &&
      (VAR_8->ipacket[VAR_10] & VAR_6) &&
      ((VAR_8->ipacket[VAR_10] & VAR_7) == VAR_2))
   break;
 }
 if (VAR_10 > 15)
  goto bail;


 while (++VAR_10 < 16)
  if (VAR_8->ipacket[VAR_10])
   break;

 if (VAR_10 < 16)
  goto bail;

 for (VAR_10 = 0; VAR_10 < 16; VAR_10++)
  VAR_8->di_scratch.idd[VAR_10] =
   VAR_8->ipacket[VAR_10] & VAR_7;


 if (VAR_8->di_scratch.idd[1] & VAR_4)
  return VAR_1;

 if (VAR_8->di_scratch.idd[1] & VAR_3)
  return VAR_0 | 4;

 return 0;

 bail:
 VAR_8->ddi--;

 return -1;
}
