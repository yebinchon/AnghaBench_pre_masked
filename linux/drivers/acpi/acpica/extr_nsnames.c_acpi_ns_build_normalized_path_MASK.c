
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct acpi_namespace_node {struct acpi_namespace_node* parent; int name; } ;


 int FUNC_0 (int ,struct acpi_namespace_node*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char,int) ;
 char VAR_1 ;
 char VAR_2 ;
 scalar_t__ VAR_3 ;
 struct acpi_namespace_node* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;

u32
FUNC_4(struct acpi_namespace_node *VAR_6,
         char *VAR_7, u32 VAR_8, u8 VAR_9)
{
 u32 VAR_10 = 0, VAR_11;
 char VAR_12[VAR_0];
 u8 VAR_13;
 char VAR_14, *VAR_15, *VAR_16;
 struct acpi_namespace_node *VAR_17;

 FUNC_0(VAR_5, VAR_6);
 if (!VAR_7) {
  VAR_8 = 0;
 }

 if (!VAR_6) {
  goto build_trailing_null;
 }

 VAR_17 = VAR_6;
 while (VAR_17 && VAR_17 != VAR_4) {
  if (VAR_17 != VAR_6) {
   do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = (VAR_1); } (VAR_10)++; } while (0);

  }

  FUNC_1(VAR_12, &VAR_17->name);
  VAR_13 = VAR_9;
  for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
   VAR_14 = VAR_12[4 - VAR_11 - 1];
   if (VAR_13 && VAR_14 != '_') {
    VAR_13 = VAR_3;
   }
   if (!VAR_13) {
    do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = (VAR_14); } (VAR_10)++; } while (0);
   }
  }

  VAR_17 = VAR_17->parent;
 }

 do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = (VAR_2); } (VAR_10)++; } while (0);



 if (VAR_10 <= VAR_8) {
  VAR_15 = VAR_7;
  VAR_16 = VAR_7 + VAR_10 - 1;

  while (VAR_15 < VAR_16) {
   VAR_14 = *VAR_15;
   *VAR_15++ = *VAR_16;
   *VAR_16-- = VAR_14;
  }
 }



build_trailing_null:
 do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = ('\0'); } (VAR_10)++; } while (0);



 FUNC_3(VAR_10);
}
