
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_long ;
struct resource {int dummy; } ;
struct iobus_softc {scalar_t__ sc_addr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,int,struct resource*) ;
 struct iobus_softc* FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct resource*) ;
 scalar_t__ FUNC_4 (struct resource*) ;
 scalar_t__ FUNC_5 (struct resource*) ;
 int FUNC_6 (struct resource*,int ) ;
 int FUNC_7 (struct resource*,int *) ;
 int FUNC_8 (struct resource*,void*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5, device_t VAR_6, int VAR_7, int VAR_8,
      struct resource *VAR_9)
{
 struct iobus_softc *VAR_10;
 void *VAR_11;

 VAR_10 = FUNC_1(VAR_5);

 if (VAR_7 == VAR_2)
                return (FUNC_0(VAR_5, VAR_7, VAR_8, VAR_9));

 if ((VAR_7 == VAR_3) || (VAR_7 == VAR_1)) {
  VAR_11 = FUNC_2((vm_offset_t)FUNC_5(VAR_9) + VAR_10->sc_addr,
    (vm_size_t)FUNC_4(VAR_9));
  if (VAR_11 == ((void*)0))
   return (VAR_0);
  FUNC_8(VAR_9, VAR_11);
  FUNC_7(VAR_9, &VAR_4);
  FUNC_6(VAR_9, (u_long)VAR_11);
 }

 return (FUNC_3(VAR_9));
}
