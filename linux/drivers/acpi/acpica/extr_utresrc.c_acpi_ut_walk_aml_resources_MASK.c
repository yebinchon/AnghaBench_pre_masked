
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct aml_resource_end_tag {int dummy; } ;
struct acpi_walk_state {int dummy; } ;
typedef int (* acpi_walk_aml_callback ) (int*,int,int,int,void**) ;
typedef int acpi_status ;
typedef int acpi_size ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (struct acpi_walk_state*,int*,int*) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;

acpi_status
FUNC_6(struct acpi_walk_state *VAR_4,
      u8 *VAR_5,
      acpi_size VAR_6,
      acpi_walk_aml_callback VAR_7, void **VAR_8)
{
 acpi_status VAR_9;
 u8 *VAR_10;
 u8 VAR_11;
 u32 VAR_12;
 u32 VAR_13 = 0;
 u8 VAR_14[2] = { 0x79, 0x00 };

 FUNC_1(VAR_3);



 if (VAR_6 < sizeof(struct aml_resource_end_tag)) {
  FUNC_5(VAR_1);
 }



 VAR_10 = VAR_5 + VAR_6;



 while (VAR_5 < VAR_10) {



  VAR_9 =
      FUNC_4(VAR_4, VAR_5, &VAR_11);
  if (FUNC_0(VAR_9)) {




   FUNC_5(VAR_9);
  }



  VAR_12 = FUNC_2(VAR_5);



  if (VAR_7) {
   VAR_9 =
       VAR_7(VAR_5, VAR_12, VAR_13, VAR_11,
       VAR_8);
   if (FUNC_0(VAR_9)) {
    FUNC_5(VAR_9);
   }
  }



  if (FUNC_3(VAR_5) ==
      VAR_0) {




   if ((VAR_5 + 1) >= VAR_10) {
    FUNC_5(VAR_1);
   }
   if (!VAR_7) {
    *VAR_8 = VAR_5;
   }



   FUNC_5(VAR_2);
  }

  VAR_5 += VAR_12;
  VAR_13 += VAR_12;
 }



 if (VAR_7) {



  (void)FUNC_4(VAR_4, VAR_14,
      &VAR_11);
  VAR_9 =
      VAR_7(VAR_14, 2, VAR_13, VAR_11, VAR_8);
  if (FUNC_0(VAR_9)) {
   FUNC_5(VAR_9);
  }
 }

 FUNC_5(VAR_1);
}
