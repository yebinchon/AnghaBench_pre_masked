
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ space_id; int flags; union acpi_operand_object* handler; } ;
struct TYPE_5__ {int (* setup ) (union acpi_operand_object*,int ,int *,void**) ;} ;
struct TYPE_4__ {int region_context; } ;
union acpi_operand_object {TYPE_3__ region; TYPE_2__ address_space; TYPE_1__ extra; } ;
typedef int u32 ;
struct resource {scalar_t__ start; scalar_t__ end; } ;
struct acpi_mem_space_context {scalar_t__ address; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 union acpi_operand_object* FUNC_1 (int ) ;
 union acpi_operand_object* FUNC_2 (union acpi_operand_object*) ;
 int FUNC_3 (union acpi_operand_object*,int ,int *,void**) ;

__attribute__((used)) static acpi_status FUNC_4(acpi_handle VAR_4, u32 VAR_5,
           void *VAR_6, void **VAR_7)
{
 struct acpi_mem_space_context **VAR_8;
 union acpi_operand_object *VAR_9;
 union acpi_operand_object *VAR_10;
 union acpi_operand_object *VAR_11;
 struct resource *VAR_12 = VAR_6;
 acpi_status VAR_13;

 VAR_11 = FUNC_1(VAR_4);
 if (!VAR_11)
  return VAR_2;

 VAR_9 = VAR_11->region.handler;
 if (!VAR_9)
  return VAR_2;

 if (VAR_11->region.space_id != VAR_0)
  return VAR_2;

 if (!(VAR_11->region.flags & VAR_3))
  return VAR_2;

 VAR_10 = FUNC_2(VAR_11);
 if (!VAR_10)
  return VAR_2;

 VAR_8 = (void *)&VAR_10->extra.region_context;

 if (!(VAR_8[0]->address >= VAR_12->start &&
       VAR_8[0]->address < VAR_12->end))
  return VAR_2;

 VAR_13 = VAR_9->address_space.setup(VAR_11,
        VAR_1,
        ((void*)0), (void **)VAR_8);
 if (FUNC_0(VAR_13))
  VAR_11->region.flags &= ~(VAR_3);

 return VAR_13;
}
