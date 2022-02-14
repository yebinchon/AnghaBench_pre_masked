
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cacheinfo {int attributes; scalar_t__ type; int ways_of_associativity; int number_of_sets; int coherency_line_size; int size; struct acpi_pptt_processor* fw_token; } ;
struct acpi_pptt_processor {int dummy; } ;
struct acpi_pptt_cache {int flags; int attributes; int associativity; int number_of_sets; int line_size; int size; } ;


 int VAR_0 ;
 int VAR_1 ;





 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_0(struct cacheinfo *VAR_15,
        struct acpi_pptt_cache *VAR_16,
        struct acpi_pptt_processor *VAR_17)
{
 VAR_15->fw_token = VAR_17;
 if (VAR_16->flags & VAR_7)
  VAR_15->size = VAR_16->size;
 if (VAR_16->flags & VAR_3)
  VAR_15->coherency_line_size = VAR_16->line_size;
 if (VAR_16->flags & VAR_6)
  VAR_15->number_of_sets = VAR_16->number_of_sets;
 if (VAR_16->flags & VAR_1)
  VAR_15->ways_of_associativity = VAR_16->associativity;
 if (VAR_16->flags & VAR_8) {
  switch (VAR_16->attributes & VAR_5) {
  case 132:
   VAR_15->attributes = VAR_14;
   break;
  case 133:
   VAR_15->attributes = VAR_13;
   break;
  }
 }
 if (VAR_16->flags & VAR_0) {
  switch (VAR_16->attributes & VAR_4) {
  case 131:
   VAR_15->attributes |= VAR_9;
   break;
  case 128:
   VAR_15->attributes |= VAR_12;
   break;
  case 130:
  case 129:
   VAR_15->attributes |=
    VAR_9 | VAR_12;
   break;
  }
 }
 if (VAR_15->type == VAR_10 &&
     VAR_16->flags & VAR_2)
  VAR_15->type = VAR_11;
}
