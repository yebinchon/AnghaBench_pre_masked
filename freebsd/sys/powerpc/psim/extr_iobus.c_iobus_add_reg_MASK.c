
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int u_int ;
struct iobus_devinfo {int id_nregs; scalar_t__* id_reg; int id_resources; } ;
typedef int phandle_t ;


 int FUNC_0 (int ,char*,scalar_t__*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(phandle_t VAR_1, struct iobus_devinfo *VAR_2,
       vm_offset_t VAR_3)
{
 u_int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1, "reg", VAR_2->id_reg,sizeof(VAR_2->id_reg));

 if (VAR_4 != -1) {
  VAR_2->id_nregs = VAR_4 / (sizeof(VAR_2->id_reg[0]));

  for (VAR_5 = 0; VAR_5 < VAR_2->id_nregs; VAR_5+= 3) {





   VAR_2->id_reg[VAR_5+1] -= VAR_3;

   FUNC_1(&VAR_2->id_resources,
       VAR_0, 0,
       VAR_2->id_reg[VAR_5+1],
       VAR_2->id_reg[VAR_5+1] +
           VAR_2->id_reg[VAR_5+2],
       VAR_2->id_reg[VAR_5+2]);
  }
 }
}
