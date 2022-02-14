
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int bit_offset; } ;
struct acpi_whea_header {int mask; int flags; TYPE_1__ register_region; } ;


 int VAR_0 ;
 int FUNC_0 (int*,TYPE_1__*) ;
 int FUNC_1 (int,TYPE_1__*) ;

int FUNC_2(struct acpi_whea_header *VAR_1, u64 VAR_2)
{
 int VAR_3;

 VAR_2 &= VAR_1->mask;
 VAR_2 <<= VAR_1->register_region.bit_offset;
 if (VAR_1->flags & VAR_0) {
  u64 VAR_4 = 0;
  VAR_3 = FUNC_0(&VAR_4, &VAR_1->register_region);
  if (VAR_3)
   return VAR_3;
  VAR_4 &= ~(VAR_1->mask << VAR_1->register_region.bit_offset);
  VAR_2 |= VAR_4;
 }
 VAR_3 = FUNC_1(VAR_2, &VAR_1->register_region);

 return VAR_3;
}
