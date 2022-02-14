
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_offset_t ;
struct grackle_softc {void* sc_data; void* sc_addr; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct grackle_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct grackle_softc *VAR_4;

 VAR_4 = FUNC_0(VAR_3);







 VAR_4->sc_addr = (vm_offset_t)FUNC_2(VAR_0, VAR_2);
 VAR_4->sc_data = (vm_offset_t)FUNC_2(VAR_1, VAR_2);

 return (FUNC_1(VAR_3));
}
