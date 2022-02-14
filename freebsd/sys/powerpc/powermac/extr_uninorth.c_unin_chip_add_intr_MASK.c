
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct unin_chip_devinfo {int udi_ninterrupts; int * udi_interrupts; int udi_resources; } ;
typedef int phandle_t ;
typedef int iparent ;
typedef int icells ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*,int,void**) ;
 scalar_t__ FUNC_3 (int ,char*,int*,int) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,int ,int,int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(phandle_t VAR_4, struct unin_chip_devinfo *VAR_5)
{
 phandle_t VAR_6;
 int *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;

 if (VAR_5->udi_ninterrupts >= 6) {
  FUNC_6("unin: device has more than 6 interrupts\n");
  return;
 }

 VAR_9 = FUNC_2(VAR_4, "interrupts", sizeof(*VAR_7),
  (void **)&VAR_7);
 if (VAR_9 == -1) {
  VAR_9 = FUNC_2(VAR_4, "AAPL,interrupts",
   sizeof(*VAR_7), (void **)&VAR_7);
  if (VAR_9 == -1)
   return;
 }

 if (VAR_7[0] == -1)
  return;

 if (FUNC_1(VAR_4, "interrupt-parent", &VAR_6, sizeof(VAR_6))
     <= 0)
  FUNC_4("Interrupt but no interrupt parent!\n");

 if (FUNC_3(VAR_6, "#interrupt-cells", &VAR_10, sizeof(VAR_10))
     <= 0)
  VAR_10 = 1;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8+=VAR_10) {
  u_int VAR_11 = FUNC_0(VAR_6, VAR_7[VAR_8]);

  FUNC_7(&VAR_5->udi_resources, VAR_3,
      VAR_5->udi_ninterrupts, VAR_11, VAR_11, 1);

  if (VAR_10 > 1) {
   FUNC_5(VAR_11,
       (VAR_7[VAR_8+1] & 1) ? VAR_2 :
       VAR_1, VAR_0);
  }

  VAR_5->udi_interrupts[VAR_5->udi_ninterrupts] = VAR_11;
  VAR_5->udi_ninterrupts++;
 }
}
