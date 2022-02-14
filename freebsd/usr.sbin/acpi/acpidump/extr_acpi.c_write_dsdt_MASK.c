
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_9__ {int Length; scalar_t__ Checksum; } ;
typedef TYPE_1__ ACPI_TABLE_HEADER ;


 char* VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,char*,TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_1, ACPI_TABLE_HEADER *VAR_2, ACPI_TABLE_HEADER *VAR_3)
{
 ACPI_TABLE_HEADER VAR_4;
 ACPI_TABLE_HEADER *VAR_5;
 uint8_t VAR_6;


 VAR_4 = *VAR_3;
 if (VAR_2 != ((void*)0)) {
  VAR_4.Checksum = 0;
  VAR_6 = FUNC_0(VAR_3 + 1, VAR_3->Length -
      sizeof(ACPI_TABLE_HEADER));
  VAR_5 = FUNC_1(VAR_2, VAR_0, ((void*)0));
  while (VAR_5 != ((void*)0)) {
   VAR_4.Length += VAR_5->Length - sizeof(ACPI_TABLE_HEADER);
   VAR_6 += FUNC_0(VAR_5 + 1,
       VAR_5->Length - sizeof(ACPI_TABLE_HEADER));
   VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_5);
  }
  VAR_6 += FUNC_0(&VAR_4, sizeof(ACPI_TABLE_HEADER));
  VAR_4.Checksum -= VAR_6;
 }


 FUNC_2(VAR_1, &VAR_4, sizeof(ACPI_TABLE_HEADER));
 FUNC_2(VAR_1, VAR_3 + 1, VAR_3->Length - sizeof(ACPI_TABLE_HEADER));


 if (VAR_2 != ((void*)0)) {
  VAR_5 = FUNC_1(VAR_2, "SSDT", ((void*)0));
  while (VAR_5 != ((void*)0)) {
   FUNC_2(VAR_1, VAR_5 + 1, VAR_5->Length -
       sizeof(ACPI_TABLE_HEADER));
   VAR_5 = FUNC_1(VAR_2, "SSDT", VAR_5);
  }
 }
 return (0);
}
