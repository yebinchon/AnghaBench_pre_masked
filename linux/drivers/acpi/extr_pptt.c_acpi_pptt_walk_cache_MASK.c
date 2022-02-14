
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_table_header {int dummy; } ;
struct acpi_subtable_header {scalar_t__ type; } ;
struct acpi_pptt_cache {int flags; int next_level_of_cache; int attributes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 struct acpi_pptt_cache* FUNC_1 (struct acpi_table_header*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_table_header *VAR_2,
    int VAR_3,
    struct acpi_subtable_header *VAR_4,
    struct acpi_pptt_cache **VAR_5,
    int VAR_6, int VAR_7)
{
 struct acpi_pptt_cache *VAR_8;

 if (VAR_4->type != VAR_1)
  return 0;

 VAR_8 = (struct acpi_pptt_cache *) VAR_4;
 while (VAR_8) {
  VAR_3++;

  if (VAR_3 == VAR_6 &&
      VAR_8->flags & VAR_0 &&
      FUNC_0(VAR_8->attributes, VAR_7)) {
   if (*VAR_5 != ((void*)0) && VAR_8 != *VAR_5)
    FUNC_3("Found duplicate cache level/type unable to determine uniqueness\n");

   FUNC_2("Found cache @ level %d\n", VAR_6);
   *VAR_5 = VAR_8;





  }
  VAR_8 = FUNC_1(VAR_2, VAR_8->next_level_of_cache);
 }
 return VAR_3;
}
