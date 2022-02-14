
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct macio_devinfo {int mdi_ninterrupts; int * mdi_interrupts; int mdi_resources; } ;
typedef int phandle_t ;
typedef int iparent ;
typedef int icells ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int,char*,int*,int) ;
 int FUNC_2 (int,char*,int,void**) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *,int ,int,int ,int ,int) ;

__attribute__((used)) static void
FUNC_7(phandle_t VAR_1, struct macio_devinfo *VAR_2)
{
 phandle_t VAR_3;
 int *VAR_4;
 int VAR_5, VAR_6;
 int VAR_7;

 if (VAR_2->mdi_ninterrupts >= 6) {
  FUNC_5("macio: device has more than 6 interrupts\n");
  return;
 }

 VAR_6 = FUNC_2(VAR_1, "interrupts", sizeof(*VAR_4),
  (void **)&VAR_4);
 if (VAR_6 == -1) {
  VAR_6 = FUNC_2(VAR_1, "AAPL,interrupts",
   sizeof(*VAR_4), (void **)&VAR_4);
  if (VAR_6 == -1)
   return;
 }

 if (VAR_4[0] == -1)
  return;

 if (FUNC_1(VAR_1, "interrupt-parent", &VAR_3, sizeof(VAR_3))
     <= 0)
  FUNC_4("Interrupt but no interrupt parent!\n");

 if (FUNC_1(FUNC_3(VAR_3), "#interrupt-cells", &VAR_7,
     sizeof(VAR_7)) <= 0)
  VAR_7 = 1;

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5+=VAR_7) {
  u_int VAR_8 = FUNC_0(VAR_3, VAR_4[VAR_5]);

  FUNC_6(&VAR_2->mdi_resources, VAR_0,
      VAR_2->mdi_ninterrupts, VAR_8, VAR_8, 1);

  VAR_2->mdi_interrupts[VAR_2->mdi_ninterrupts] = VAR_8;
  VAR_2->mdi_ninterrupts++;
 }
}
