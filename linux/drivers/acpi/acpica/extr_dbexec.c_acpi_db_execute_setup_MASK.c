
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_db_method_info {char* name; int flags; scalar_t__* pathname; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 char* VAR_9 ;
 int FUNC_4 (char*,scalar_t__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,int,char*) ;
 int VAR_10 ;

__attribute__((used)) static acpi_status FUNC_6(struct acpi_db_method_info *VAR_11)
{
 acpi_status VAR_12;

 FUNC_1(VAR_10);



 VAR_11->pathname[0] = 0;
 if ((VAR_11->name[0] != '\\') && (VAR_11->name[0] != '/')) {
  if (FUNC_5(VAR_11->pathname, sizeof(VAR_11->pathname),
     VAR_9)) {
   VAR_12 = VAR_3;
   goto error_exit;
  }
 }

 if (FUNC_5(VAR_11->pathname, sizeof(VAR_11->pathname),
    VAR_11->name)) {
  VAR_12 = VAR_3;
  goto error_exit;
 }

 FUNC_2(VAR_11->pathname);

 FUNC_3(VAR_1);
 FUNC_4("Evaluating %s\n", VAR_11->pathname);

 if (VAR_11->flags & VAR_6) {
  VAR_8 = VAR_7;
  FUNC_3(VAR_0);
 }

 else {


  FUNC_3(VAR_2);
 }

 return (VAR_5);

error_exit:

 FUNC_0((VAR_4, VAR_12, "During setup for method execution"));
 return (VAR_12);
}
