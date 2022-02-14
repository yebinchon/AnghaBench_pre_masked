
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* dmar_iter_t ) (TYPE_2__*,void*) ;
struct TYPE_6__ {int Length; } ;
struct TYPE_8__ {TYPE_1__ Header; } ;
struct TYPE_7__ {scalar_t__ Length; } ;
typedef int ACPI_TABLE_HEADER ;
typedef TYPE_3__ ACPI_TABLE_DMAR ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_DMAR_HEADER ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int **) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(dmar_iter_t VAR_1, void *VAR_2)
{
 ACPI_TABLE_DMAR *VAR_3;
 ACPI_DMAR_HEADER *VAR_4;
 char *VAR_5, *VAR_6;
 ACPI_STATUS VAR_7;

 VAR_7 = FUNC_1(VAR_0, 1, (ACPI_TABLE_HEADER **)&VAR_3);
 if (FUNC_0(VAR_7))
  return;
 VAR_5 = (char *)VAR_3 + sizeof(*VAR_3);
 VAR_6 = (char *)VAR_3 + VAR_3->Header.Length;
 for (;;) {
  if (VAR_5 >= VAR_6)
   break;
  VAR_4 = (ACPI_DMAR_HEADER *)VAR_5;
  if (VAR_4->Length <= 0) {
   FUNC_3("dmar_identify: corrupted DMAR table, l %d\n",
       VAR_4->Length);
   break;
  }
  VAR_5 += VAR_4->Length;
  if (!VAR_1(VAR_4, VAR_2))
   break;
 }
 FUNC_2((ACPI_TABLE_HEADER *)VAR_3);
}
