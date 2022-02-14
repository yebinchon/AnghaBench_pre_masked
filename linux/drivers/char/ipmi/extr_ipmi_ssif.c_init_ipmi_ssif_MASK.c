
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int acpi_match_table; } ;
struct TYPE_5__ {int address_list; TYPE_1__ driver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int* VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,int ,int ,int ,int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 int * VAR_8 ;
 int VAR_9 ;
 int FUNC_6 () ;
 TYPE_2__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_7(void)
{
 int VAR_13;
 int VAR_14;

 if (VAR_4)
  return 0;

 FUNC_5("IPMI SSIF Interface driver\n");


 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  VAR_14 = FUNC_2(VAR_2[VAR_13], VAR_1[VAR_13],
         VAR_3[VAR_13], VAR_8[VAR_13],
         VAR_0, ((void*)0));
  if (VAR_14)
   FUNC_4("Couldn't add hardcoded device at addr 0x%x\n",
          VAR_2[VAR_13]);
 }

 if (VAR_11)
  VAR_10.driver.acpi_match_table =
   FUNC_0(VAR_9);

 if (VAR_12) {
  VAR_14 = FUNC_3(&VAR_5);
  if (VAR_14)
   FUNC_4("Unable to register driver: %d\n", VAR_14);
  else
   VAR_7 = 1;
 }

 VAR_10.address_list = FUNC_6();

 VAR_14 = FUNC_1(&VAR_10);
 if (!VAR_14)
  VAR_4 = 1;

 return VAR_14;
}
