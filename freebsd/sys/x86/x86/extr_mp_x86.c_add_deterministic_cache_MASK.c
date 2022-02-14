
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int present; int id_shift; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,int,...) ;

__attribute__((used)) static int
FUNC_2(int VAR_4, int VAR_5, int VAR_6)
{

 if (VAR_4 == 0)
  return (0);
 if (VAR_4 > 3) {
  FUNC_1("unexpected cache type %d\n", VAR_4);
  return (1);
 }
 if (VAR_4 == 2)
  return (1);
 if (VAR_5 == 0 || VAR_5 > VAR_0) {
  FUNC_1("unexpected cache level %d\n", VAR_4);
  return (1);
 }

 if (VAR_1[VAR_5 - 1].present) {
  FUNC_1("WARNING: multiple entries for L%u data cache\n", VAR_5);
  FUNC_1("%u => %u\n", VAR_1[VAR_5 - 1].id_shift,
      FUNC_0(VAR_6));
 }
 VAR_1[VAR_5 - 1].id_shift = FUNC_0(VAR_6);
 VAR_1[VAR_5 - 1].present = 1;

 if (VAR_1[VAR_5 - 1].id_shift > VAR_3) {
  FUNC_1("WARNING: L%u data cache covers more "
      "APIC IDs than a package (%u > %u)\n", VAR_5,
      VAR_1[VAR_5 - 1].id_shift, VAR_3);
  VAR_1[VAR_5 - 1].id_shift = VAR_3;
 }
 if (VAR_1[VAR_5 - 1].id_shift < VAR_2) {
  FUNC_1("WARNING: L%u data cache covers fewer "
      "APIC IDs than a core (%u < %u)\n", VAR_5,
      VAR_1[VAR_5 - 1].id_shift, VAR_2);
  VAR_1[VAR_5 - 1].id_shift = VAR_2;
 }

 return (1);
}
