
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct resource {scalar_t__ start; scalar_t__ end; int flags; } ;
struct resource_win {scalar_t__ offset; struct resource res; } ;
struct TYPE_5__ {int write_protect; scalar_t__ caching; } ;
struct TYPE_4__ {int translation_type; } ;
struct TYPE_6__ {TYPE_2__ mem; TYPE_1__ io; } ;
struct acpi_resource_address {scalar_t__ min_address_fixed; scalar_t__ max_address_fixed; scalar_t__ producer_consumer; int resource_type; TYPE_3__ info; } ;
struct acpi_address64_attribute {int granularity; scalar_t__ address_length; scalar_t__ translation_offset; scalar_t__ minimum; scalar_t__ maximum; } ;
typedef int resource_size_t ;



 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct resource*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct resource*,scalar_t__,int) ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool FUNC_4(struct resource_win *VAR_8,
         struct acpi_resource_address *VAR_9,
         struct acpi_address64_attribute *VAR_10)
{
 u8 VAR_11 = VAR_10->granularity == 0xfff ? VAR_0 : VAR_1;
 bool VAR_12 = VAR_9->info.mem.write_protect;
 u64 VAR_13 = VAR_10->address_length;
 u64 VAR_14, VAR_15, VAR_16 = 0;
 struct resource *VAR_17 = &VAR_8->res;





 if ((VAR_9->min_address_fixed != VAR_9->max_address_fixed && VAR_13) ||
     (VAR_9->min_address_fixed && VAR_9->max_address_fixed && !VAR_13))
  FUNC_2("ACPI: Invalid address space min_addr_fix %d, max_addr_fix %d, len %llx\n",
    VAR_9->min_address_fixed, VAR_9->max_address_fixed, VAR_13);
 if (VAR_9->producer_consumer == VAR_3)
  VAR_16 = VAR_10->translation_offset;
 else if (VAR_10->translation_offset)
  FUNC_2("ACPI: translation_offset(%lld) is invalid for non-bridge device.\n",
    VAR_10->translation_offset);
 VAR_14 = VAR_10->minimum + VAR_16;
 VAR_15 = VAR_10->maximum + VAR_16;

 VAR_8->offset = VAR_16;
 VAR_17->start = VAR_14;
 VAR_17->end = VAR_15;
 if (sizeof(resource_size_t) < sizeof(u64) &&
     (VAR_16 != VAR_8->offset || VAR_14 != VAR_17->start || VAR_15 != VAR_17->end)) {
  FUNC_3("acpi resource window ([%#llx-%#llx] ignored, not CPU addressable)\n",
   VAR_10->minimum, VAR_10->maximum);
  return 0;
 }

 switch (VAR_9->resource_type) {
 case 128:
  FUNC_1(VAR_17, VAR_13, VAR_12);
  break;
 case 129:
  FUNC_0(VAR_17, VAR_13, VAR_11,
       VAR_9->info.io.translation_type);
  break;
 case 130:
  VAR_17->flags = VAR_4;
  break;
 default:
  return 0;
 }

 if (VAR_9->producer_consumer == VAR_3)
  VAR_17->flags |= VAR_7;

 if (VAR_9->info.mem.caching == VAR_2)
  VAR_17->flags |= VAR_6;

 return !(VAR_17->flags & VAR_5);
}
