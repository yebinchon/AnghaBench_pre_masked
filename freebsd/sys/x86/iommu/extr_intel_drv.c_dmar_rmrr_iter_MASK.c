
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rmrr_iter_args {scalar_t__ dev_domain; int rmrr_entries; int domain; int dev_path_len; int dev_path; int dev_busno; } ;
struct dmar_map_entry {int end; int start; } ;
struct TYPE_10__ {int Length; } ;
struct TYPE_9__ {scalar_t__ Type; } ;
struct TYPE_7__ {int Length; } ;
struct TYPE_8__ {scalar_t__ Segment; int EndAddress; int BaseAddress; TYPE_1__ Header; } ;
typedef TYPE_2__ ACPI_DMAR_RESERVED_MEMORY ;
typedef TYPE_3__ ACPI_DMAR_HEADER ;
typedef TYPE_4__ ACPI_DMAR_DEVICE_SCOPE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct dmar_map_entry*,int ) ;
 struct dmar_map_entry* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_3(ACPI_DMAR_HEADER *VAR_3, void *VAR_4)
{
 struct rmrr_iter_args *VAR_5;
 ACPI_DMAR_RESERVED_MEMORY *VAR_6;
 ACPI_DMAR_DEVICE_SCOPE *VAR_7;
 struct dmar_map_entry *VAR_8;
 char *VAR_9, *VAR_10;
 int VAR_11;

 if (VAR_3->Type != VAR_0)
  return (1);

 VAR_5 = VAR_4;
 VAR_6 = (ACPI_DMAR_RESERVED_MEMORY *)VAR_3;
 if (VAR_6->Segment != VAR_5->dev_domain)
  return (1);

 VAR_9 = (char *)VAR_6 + sizeof(*VAR_6);
 VAR_10 = (char *)VAR_6 + VAR_6->Header.Length;
 for (;;) {
  if (VAR_9 >= VAR_10)
   break;
  VAR_7 = (ACPI_DMAR_DEVICE_SCOPE *)VAR_9;
  VAR_9 += VAR_7->Length;
  VAR_11 = FUNC_2(VAR_7, VAR_5->dev_busno,
      VAR_5->dev_path, VAR_5->dev_path_len);
  if (VAR_11 == 1) {
   VAR_8 = FUNC_1(VAR_5->domain,
       VAR_1);
   VAR_8->start = VAR_6->BaseAddress;

   VAR_8->end = VAR_6->EndAddress;
   FUNC_0(VAR_5->rmrr_entries, VAR_8,
       VAR_2);
  }
 }

 return (1);
}
