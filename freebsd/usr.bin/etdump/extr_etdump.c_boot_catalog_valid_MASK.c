
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int16_t ;
struct TYPE_2__ {int checksum; } ;
typedef TYPE_1__ boot_catalog_validation_entry ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(char *VAR_0)
{
 boot_catalog_validation_entry *VAR_1;
 int16_t VAR_2, VAR_3;
 unsigned char *VAR_4;
 size_t VAR_5;

 VAR_1 = (boot_catalog_validation_entry *)VAR_0;

 VAR_2 = FUNC_1(VAR_1->checksum);
 FUNC_0(0, VAR_1->checksum);
 VAR_4 = (unsigned char *)VAR_1;

 for (VAR_5 = VAR_3 = 0; VAR_5 < sizeof(*VAR_1); VAR_5 += 2) {
  VAR_3 += (int16_t)VAR_4[VAR_5];
  VAR_3 += 256 * (int16_t)VAR_4[VAR_5 + 1];
 }
 if (VAR_3 + VAR_2 != 0) {
  return (0);
 }

 FUNC_0(VAR_2, VAR_1->checksum);
 return (1);
}
