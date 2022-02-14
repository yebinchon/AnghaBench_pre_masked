
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int integer; int name; void* size; } ;
struct TYPE_8__ {TYPE_3__ value; int * inline_comment; int * name_comment; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {int* data; TYPE_1__ value; } ;
union acpi_parse_object {TYPE_4__ common; TYPE_2__ named; } ;
typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct acpi_parse_state {int* aml; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int*) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;



 int VAR_3 ;


 int FUNC_5 (struct acpi_parse_state*) ;
 int * VAR_4 ;
 union acpi_parse_object* FUNC_6 (int,int*) ;
 int FUNC_7 (union acpi_parse_object*,union acpi_parse_object*) ;
 int FUNC_8 (union acpi_parse_object*) ;
 int FUNC_9 (struct acpi_parse_state*) ;
 void* FUNC_10 (struct acpi_parse_state*) ;
 int FUNC_11 (union acpi_parse_object*,int) ;
 int VAR_5 ;
 int FUNC_12 (union acpi_parse_object*) ;

__attribute__((used)) static union acpi_parse_object *FUNC_13(struct acpi_parse_state
             *VAR_6)
{
 u8 *VAR_7;
 union acpi_parse_object *VAR_8;
 union acpi_parse_object *VAR_9 = ((void*)0);
 u16 VAR_10;
 u32 VAR_11;
 u8 VAR_12;
 u8 VAR_13;
 u8 VAR_14;
 u32 VAR_15;
 u8 *VAR_16;
 u32 VAR_17;

 FUNC_0(VAR_5);

 FUNC_5(VAR_6);
 VAR_7 = VAR_6->aml;



 switch (FUNC_3(VAR_6->aml)) {
 case 134:

  VAR_10 = 129;
  VAR_6->aml++;
  break;

 case 137:

  VAR_10 = 133;
  VAR_6->aml++;
  break;

 case 136:

  VAR_10 = 132;
  VAR_6->aml++;
  break;

 case 135:

  VAR_10 = 131;
  VAR_6->aml++;
  break;

 default:

  VAR_10 = 130;
  break;
 }



 VAR_8 = FUNC_6(VAR_10, VAR_7);
 if (!VAR_8) {
  FUNC_12(((void*)0));
 }



 FUNC_5(VAR_6);
 switch (VAR_10) {
 case 130:



  FUNC_4(&VAR_11, VAR_6->aml);
  FUNC_11(VAR_8, VAR_11);
  VAR_6->aml += VAR_0;

  FUNC_5(VAR_6);
  VAR_8->common.value.size =
      FUNC_10(VAR_6);
  break;

 case 129:



  VAR_8->common.value.size =
      FUNC_10(VAR_6);
  break;

 case 133:
 case 131:
  VAR_12 = FUNC_3(VAR_6->aml);
  VAR_6->aml++;
  VAR_13 = FUNC_3(VAR_6->aml);
  VAR_6->aml++;

  VAR_8->common.value.integer = (u8)VAR_12;
  VAR_8->common.value.integer |= (u16)(VAR_13 << 8);



  if (VAR_10 == 131) {
   VAR_14 = FUNC_3(VAR_6->aml);
   VAR_6->aml++;

   VAR_8->common.value.integer |=
       (u32)(VAR_14 << 16);
  }
  break;

 case 132:





  VAR_7 = VAR_6->aml;
  if (FUNC_3(VAR_6->aml) == VAR_1) {
   VAR_6->aml++;

   FUNC_5(VAR_6);
   VAR_16 = VAR_6->aml;
   VAR_15 =
       FUNC_10(VAR_6);
   VAR_16 += VAR_15;

   FUNC_5(VAR_6);
   if (VAR_6->aml < VAR_16) {



    VAR_9 =
        FUNC_6(VAR_2, VAR_7);
    if (!VAR_9) {
     FUNC_8(VAR_8);
     FUNC_12(((void*)0));
    }



    VAR_10 = FUNC_3(VAR_6->aml);
    VAR_6->aml++;

    FUNC_5(VAR_6);
    switch (VAR_10) {
    case 139:

     VAR_17 =
         FUNC_3(VAR_6->aml);
     VAR_6->aml += 1;
     break;

    case 128:

     VAR_17 =
         FUNC_1(VAR_6->aml);
     VAR_6->aml += 2;
     break;

    case 138:

     VAR_17 =
         FUNC_2(VAR_6->aml);
     VAR_6->aml += 4;
     break;

    default:

     VAR_17 = 0;
     break;
    }



    FUNC_5(VAR_6);
    VAR_9->named.value.size = VAR_17;
    VAR_9->named.data = VAR_6->aml;
   }



   VAR_6->aml = VAR_16;
  } else {
   VAR_9 = FUNC_6(VAR_3, VAR_7);
   if (!VAR_9) {
    FUNC_8(VAR_8);
    FUNC_12(((void*)0));
   }



   VAR_9->common.value.name =
       FUNC_9(VAR_6);
  }



  FUNC_7(VAR_8, VAR_9);
  break;

 default:


  break;
 }

 FUNC_12(VAR_8);
}
