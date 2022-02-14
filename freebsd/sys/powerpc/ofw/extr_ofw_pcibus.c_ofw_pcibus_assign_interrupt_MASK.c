
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int ofw_pci_intr_t ;
typedef int iparent ;
typedef int intr ;
typedef int icells ;
typedef int device_t ;


 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int,int*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_0, device_t VAR_1)
{
 ofw_pci_intr_t VAR_2[2];
 phandle_t VAR_3, VAR_4;
 int VAR_5, VAR_6;

 VAR_3 = FUNC_4(VAR_1);

 if (VAR_3 == -1) {


  VAR_2[0] = FUNC_6(VAR_1);
  return (FUNC_2(FUNC_3(VAR_0), VAR_1,
      VAR_2[0]));
 }






 VAR_4 = -1;
 if (FUNC_0(VAR_3, "interrupt-parent", &VAR_4,
     sizeof(VAR_4)) < 0)
  VAR_4 = -1;
 VAR_6 = 1;
 if (VAR_4 != -1)
  FUNC_0(FUNC_1(VAR_4), "#interrupt-cells",
      &VAR_6, sizeof(VAR_6));






 VAR_5 = FUNC_0(VAR_3, "AAPL,interrupts", VAR_2, sizeof(VAR_2));
 if (VAR_5 == sizeof(VAR_2[0])*VAR_6)
  return ((VAR_4 == -1) ? VAR_2[0] : FUNC_5(VAR_0,
      VAR_4, VAR_6, VAR_2));

 VAR_5 = FUNC_0(VAR_3, "interrupts", VAR_2, sizeof(VAR_2));
 if (VAR_5 == sizeof(VAR_2[0])*VAR_6) {
  if (VAR_4 != -1)
   VAR_2[0] = FUNC_5(VAR_0, VAR_4, VAR_6, VAR_2);
 } else {

  VAR_2[0] = FUNC_6(VAR_1);
 }
 return (FUNC_2(FUNC_3(VAR_0), VAR_1, VAR_2[0]));
}
