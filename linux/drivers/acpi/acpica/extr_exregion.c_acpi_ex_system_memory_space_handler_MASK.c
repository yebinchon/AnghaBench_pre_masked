
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct acpi_mem_space_context {scalar_t__ mapped_physical_address; int mapped_length; scalar_t__ address; scalar_t__ length; void* mapped_logical_address; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_size ;
typedef scalar_t__ acpi_physical_address ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (void*) ;
 scalar_t__ FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;

 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (void*,int) ;
 int FUNC_10 (void*,int) ;
 int FUNC_11 (void*,int) ;
 int FUNC_12 (void*,int) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (void*,int) ;
 int FUNC_15 (int,int,int *,int*) ;
 int VAR_8 ;
 int FUNC_16 (int ) ;

acpi_status
FUNC_17(u32 VAR_9,
        acpi_physical_address VAR_10,
        u32 VAR_11,
        u64 *VAR_12,
        void *VAR_13, void *VAR_14)
{
 acpi_status VAR_15 = VAR_7;
 void *VAR_16 = ((void*)0);
 struct acpi_mem_space_context *VAR_17 = VAR_14;
 u32 VAR_18;
 acpi_size VAR_19;
 acpi_size VAR_20;




 FUNC_3(VAR_8);



 switch (VAR_11) {
 case 8:

  VAR_18 = 1;
  break;

 case 16:

  VAR_18 = 2;
  break;

 case 32:

  VAR_18 = 4;
  break;

 case 64:

  VAR_18 = 8;
  break;

 default:

  FUNC_1((VAR_5, "Invalid SystemMemory width %u",
       VAR_11));
  FUNC_16(VAR_3);
 }
 if ((VAR_10 < VAR_17->mapped_physical_address) ||
     (((u64) VAR_10 + VAR_18) > ((u64)
      VAR_17->mapped_physical_address +
      VAR_17->mapped_length))) {




  if (VAR_17->mapped_length) {



   FUNC_14(VAR_17->mapped_logical_address,
          VAR_17->mapped_length);
  }






  VAR_19 = (acpi_size)
      ((VAR_17->address + VAR_17->length) - VAR_10);
  VAR_20 = (acpi_size)
      (FUNC_8(VAR_10, VAR_1) - VAR_10);
  if (VAR_20 == 0) {
   VAR_20 = VAR_1;
  }

  if (VAR_19 > VAR_20) {
   VAR_19 = VAR_20;
  }



  VAR_17->mapped_logical_address =
      FUNC_13(VAR_10, VAR_19);
  if (!VAR_17->mapped_logical_address) {
   FUNC_1((VAR_5,
        "Could not map memory at 0x%8.8X%8.8X, size %u",
        FUNC_2(VAR_10),
        (u32)VAR_19));
   VAR_17->mapped_length = 0;
   FUNC_16(VAR_6);
  }



  VAR_17->mapped_physical_address = VAR_10;
  VAR_17->mapped_length = VAR_19;
 }





 VAR_16 = VAR_17->mapped_logical_address +
     ((u64) VAR_10 - (u64) VAR_17->mapped_physical_address);

 FUNC_0((VAR_0,
     "System-Memory (width %u) R/W %u Address=%8.8X%8.8X\n",
     VAR_11, VAR_9, FUNC_2(VAR_10)));
 switch (VAR_9) {
 case 129:

  *VAR_12 = 0;
  switch (VAR_11) {
  case 8:

   *VAR_12 = (u64)FUNC_7(VAR_16);
   break;

  case 16:

   *VAR_12 = (u64)FUNC_4(VAR_16);
   break;

  case 32:

   *VAR_12 = (u64)FUNC_5(VAR_16);
   break;

  case 64:

   *VAR_12 = (u64)FUNC_6(VAR_16);
   break;

  default:



   break;
  }
  break;

 case 128:

  switch (VAR_11) {
  case 8:

   FUNC_12(VAR_16, *VAR_12);
   break;

  case 16:

   FUNC_9(VAR_16, *VAR_12);
   break;

  case 32:

   FUNC_10(VAR_16, *VAR_12);
   break;

  case 64:

   FUNC_11(VAR_16, *VAR_12);
   break;

  default:



   break;
  }
  break;

 default:

  VAR_15 = VAR_4;
  break;
 }

 FUNC_16(VAR_15);
}
