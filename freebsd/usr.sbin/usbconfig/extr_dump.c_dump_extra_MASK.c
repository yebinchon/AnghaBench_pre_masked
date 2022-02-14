
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct libusb20_me_struct {int dummy; } ;


 int* FUNC_0 (struct libusb20_me_struct*,int const*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(struct libusb20_me_struct *VAR_0, const char *VAR_1)
{
 const uint8_t *VAR_2;
 uint8_t VAR_3;

 VAR_2 = ((void*)0);

 while ((VAR_2 = FUNC_0(VAR_0, VAR_2))) {
  FUNC_1("\n" "%sAdditional Descriptor\n\n", VAR_1);
  FUNC_1("%sbLength = 0x%02x\n", VAR_1, VAR_2[0]);
  FUNC_1("%sbDescriptorType = 0x%02x\n", VAR_1, VAR_2[1]);
  if (VAR_2[0] > 1)
   FUNC_1("%sbDescriptorSubType = 0x%02x\n",
       VAR_1, VAR_2[2]);
  FUNC_1("%s RAW dump: ", VAR_1);
  for (VAR_3 = 0; VAR_3 != VAR_2[0]; VAR_3++) {
   if ((VAR_3 % 8) == 0) {
    FUNC_1("\n%s 0x%02x | ", VAR_1, VAR_3);
   }
   FUNC_1("0x%02x%s", VAR_2[VAR_3],
       (VAR_3 != (VAR_2[0] - 1)) ? ", " : (VAR_3 % 8) ? "\n" : "");
  }
  FUNC_1("\n");
 }
 return;
}
