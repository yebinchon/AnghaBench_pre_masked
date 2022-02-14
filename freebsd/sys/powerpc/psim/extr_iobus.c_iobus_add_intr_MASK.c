
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct iobus_devinfo {int id_interrupt; int id_resources; } ;
typedef int phandle_t ;
typedef int intr ;


 int FUNC_0 (int ,char*,int*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,int,int,int) ;

__attribute__((used)) static void
FUNC_2(phandle_t VAR_1, struct iobus_devinfo *VAR_2)
{
 u_int VAR_3 = -1;

 if (FUNC_0(VAR_1, "interrupt", &VAR_3, sizeof(VAR_3)) != -1) {
  FUNC_1(&VAR_2->id_resources,
      VAR_0, 0, VAR_3, VAR_3, 1);
 }
 VAR_2->id_interrupt = VAR_3;
}
