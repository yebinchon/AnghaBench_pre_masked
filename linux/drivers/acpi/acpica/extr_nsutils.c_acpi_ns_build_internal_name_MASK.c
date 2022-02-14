
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpi_namestring_info {int num_segments; char* internal_name; char* next_external_char; int num_carats; scalar_t__ fully_qualified; } ;
typedef int acpi_status ;
typedef size_t acpi_size ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

acpi_status FUNC_5(struct acpi_namestring_info *VAR_9)
{
 u32 VAR_10 = VAR_9->num_segments;
 char *VAR_11 = VAR_9->internal_name;
 const char *VAR_12 = VAR_9->next_external_char;
 char *VAR_13 = ((void*)0);
 u32 VAR_14;

 FUNC_1(VAR_8);



 if (VAR_9->fully_qualified) {
  VAR_11[0] = VAR_7;

  if (VAR_10 <= 1) {
   VAR_13 = &VAR_11[1];
  } else if (VAR_10 == 2) {
   VAR_11[1] = VAR_4;
   VAR_13 = &VAR_11[2];
  } else {
   VAR_11[1] = VAR_5;
   VAR_11[2] = (char)VAR_10;
   VAR_13 = &VAR_11[3];
  }
 } else {




  VAR_14 = 0;
  if (VAR_9->num_carats) {
   for (VAR_14 = 0; VAR_14 < VAR_9->num_carats; VAR_14++) {
    VAR_11[VAR_14] = VAR_6;
   }
  }

  if (VAR_10 <= 1) {
   VAR_13 = &VAR_11[VAR_14];
  } else if (VAR_10 == 2) {
   VAR_11[VAR_14] = VAR_4;
   VAR_13 = &VAR_11[(acpi_size)VAR_14 + 1];
  } else {
   VAR_11[VAR_14] = VAR_5;
   VAR_11[(acpi_size)VAR_14 + 1] = (char)VAR_10;
   VAR_13 = &VAR_11[(acpi_size)VAR_14 + 2];
  }
 }



 for (; VAR_10; VAR_10--) {
  for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
   if (FUNC_2(*VAR_12) ||
       (*VAR_12 == 0)) {



    VAR_13[VAR_14] = '_';
   } else {


    VAR_13[VAR_14] = (char)FUNC_4((int)*VAR_12);
    VAR_12++;
   }
  }



  if (!FUNC_2(*VAR_12) &&
      (*VAR_12 != 0)) {
   FUNC_3(VAR_2);
  }



  VAR_12++;
  VAR_13 += VAR_1;
 }



 *VAR_13 = 0;

 if (VAR_9->fully_qualified) {
  FUNC_0((VAR_0,
      "Returning [%p] (abs) \"\\%s\"\n",
      VAR_11, VAR_11));
 } else {
  FUNC_0((VAR_0, "Returning [%p] (rel) \"%s\"\n",
      VAR_11, VAR_11));
 }

 FUNC_3(VAR_3);
}
