
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tpm_header {int ordinal; } ;
struct tpm_chip {int flags; } ;



 int VAR_0 ;

 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct tpm_chip *VAR_1,
     u8 *VAR_2, size_t VAR_3)
{
 struct tpm_header *VAR_4 = (struct tpm_header *)VAR_2;

 if (VAR_3 < sizeof(struct tpm_header))
  return 0;

 if (VAR_1->flags & VAR_0) {
  switch (FUNC_0(VAR_4->ordinal)) {
  case 129:
   return 1;
  }
 } else {
  switch (FUNC_0(VAR_4->ordinal)) {
  case 128:
   return 1;
  }
 }
 return 0;
}
