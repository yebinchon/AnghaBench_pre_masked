
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ,int,int ,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int ,int,int *) ;
 scalar_t__ FUNC_12 () ;

__attribute__((used)) static int
FUNC_13(device_t VAR_5)
{
 phandle_t VAR_6;
 pcell_t *VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_10(VAR_5, "ibm,opal-v3"))
  return (VAR_1);
 if (FUNC_12() != 0)
  return (VAR_1);

 FUNC_6(VAR_5, "OPAL Abstraction Firmware");


 if (FUNC_3(FUNC_9(VAR_5), "opal-interrupts")) {
  VAR_6 = FUNC_0("/interrupt-controller@0");
  VAR_6 = FUNC_4(VAR_6);

  VAR_9 = FUNC_2(FUNC_9(VAR_5),
                    "opal-interrupts") / sizeof(*VAR_7);
  VAR_7 = FUNC_8(VAR_9 * sizeof(*VAR_7), VAR_2, VAR_3);
  FUNC_1(FUNC_9(VAR_5), "opal-interrupts", VAR_7,
      VAR_9 * sizeof(*VAR_7));
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++)
   FUNC_5(VAR_5, VAR_4, VAR_8,
       FUNC_11(VAR_5, VAR_6, 1, &VAR_7[VAR_8]), 1);
  FUNC_7(VAR_7, VAR_2);
 }


 return (VAR_0);
}
