
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xc_num_avail; int xc_is_last_record; } ;
typedef TYPE_1__ xdr_bytesrec ;
typedef int uint32_t ;
typedef scalar_t__ int32_t ;
typedef int bool_t ;
struct TYPE_5__ {int x_handy; char* x_private; } ;
typedef TYPE_2__ XDR ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;



 int FUNC_1 (int ) ;

__attribute__((used)) static bool_t
FUNC_2(XDR *VAR_2, int VAR_3, void *VAR_4)
{
 xdr_bytesrec *VAR_5;
 int32_t *VAR_6;
 int VAR_7;

 switch (VAR_3) {

 case 130:
  VAR_5 = (xdr_bytesrec *)VAR_4;
  VAR_5->xc_is_last_record = VAR_1;
  VAR_5->xc_num_avail = VAR_2->x_handy;
  return (VAR_1);

 case 129:



  if (VAR_2->x_handy < sizeof (int32_t))
   return (VAR_0);
  VAR_6 = (int32_t *)VAR_4;
  *VAR_6 = (int32_t)FUNC_1((uint32_t)
      (*((int32_t *)(VAR_2->x_private))));
  return (VAR_1);

 case 128:



  VAR_6 = (int32_t *)VAR_4;
  VAR_7 = FUNC_0((int)(*VAR_6));
  if (VAR_2->x_handy < VAR_7)
   return (VAR_0);
  VAR_2->x_handy -= VAR_7;
  VAR_2->x_private = (char *)VAR_2->x_private + VAR_7;
  return (VAR_1);

 }
 return (VAR_0);
}
