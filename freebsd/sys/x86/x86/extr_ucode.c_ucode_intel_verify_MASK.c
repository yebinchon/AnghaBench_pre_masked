
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ucode_intel_header {int total_size; int header_version; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct ucode_intel_header *VAR_1, size_t VAR_2)
{
 uint32_t VAR_3, *VAR_4, VAR_5;
 int VAR_6;

 if (VAR_2 < sizeof(struct ucode_intel_header))
  return (1);
 VAR_5 = VAR_1->total_size;
 if (VAR_5 == 0)
  VAR_5 = VAR_0 +
      sizeof(struct ucode_intel_header);

 if (VAR_1->header_version != 1)
  return (1);
 if (VAR_5 % 16 != 0)
  return (1);
 if (VAR_2 < VAR_5)
  return (1);

 VAR_3 = 0;
 VAR_4 = (uint32_t *)VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_5 / sizeof(uint32_t); VAR_6++)
  VAR_3 += VAR_4[VAR_6];
 if (VAR_3 != 0)
  return (1);
 return (0);
}
