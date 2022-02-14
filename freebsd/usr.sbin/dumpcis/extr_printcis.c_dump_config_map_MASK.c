
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tuple {int* data; scalar_t__ code; unsigned int length; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int,int*,int**,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char) ;

__attribute__((used)) static void
FUNC_3(struct tuple *VAR_1)
{
 u_char *VAR_2 = VAR_1->data, VAR_3;
 unsigned int VAR_4, VAR_5 = 0, VAR_6;

 VAR_4 = (VAR_2[0] & 3) + 1;
 if (VAR_1->code == VAR_0)
  VAR_5 = ((VAR_2[0] >> 2) & 3) + 1;
 if (VAR_1->length < VAR_4 + VAR_5 + 2) {
  FUNC_1("\tWrong length for configuration map tuple\n");
  return;
 }
 FUNC_1("\tReg len = %d, config register addr = 0x%x, last config = 0x%x\n",
        VAR_4, FUNC_0(VAR_4 | 0x10, VAR_2 + 2, &VAR_2, 0), VAR_2[1]);
 if (VAR_5) {
  FUNC_1("\tRegisters: ");
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_2++) {
   for (VAR_3 = 0x1; VAR_3; VAR_3 <<= 1)
    FUNC_1("%c", VAR_3 & *VAR_2 ? 'X' : '-');
   FUNC_2(' ');
  }
 }
 VAR_6 = VAR_1->length - (VAR_4 + VAR_5 + 2);
 if (VAR_6) {
  if (!VAR_5)
   FUNC_2('\t');
  FUNC_1("%d bytes in subtuples", VAR_6);
 }
 if (VAR_5 || VAR_6)
  FUNC_2('\n');
}
