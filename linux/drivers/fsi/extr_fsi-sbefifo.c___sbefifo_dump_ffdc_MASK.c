
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, const __be32 *VAR_2,
    size_t VAR_3, bool VAR_4)
{
 int VAR_5 = 0;

 static char VAR_6[60];
 char *VAR_7 = VAR_6;

 while (VAR_3) {
  u32 VAR_8, VAR_9, VAR_10, VAR_11;
  if (VAR_3 < 3) {
   FUNC_1(VAR_1, "SBE invalid FFDC package size %zd\n", VAR_3);
   return;
  }
  VAR_8 = FUNC_0(*(VAR_2++));
  VAR_9 = FUNC_0(*(VAR_2++));
  VAR_10 = FUNC_0(*(VAR_2++));
  VAR_3 -= 3;
  if ((VAR_8 >> 16) != 0xFFDC) {
   FUNC_1(VAR_1, "SBE invalid FFDC package signature %08x %08x %08x\n",
    VAR_8, VAR_9, VAR_10);
   break;
  }
  VAR_8 &= 0xffff;
  if (VAR_8 > VAR_3) {
   FUNC_1(VAR_1, "SBE FFDC package len %d words but only %zd remaining\n",
    VAR_8, VAR_3);
   VAR_8 = VAR_3;
   break;
  }
  if (VAR_4) {
   FUNC_2(VAR_1, "+---- SBE FFDC package %d for async err -----+\n",
     VAR_5++);
  } else {
   FUNC_2(VAR_1, "+---- SBE FFDC package %d for cmd %02x:%02x -----+\n",
     VAR_5++, (VAR_9 >> 8) & 0xff, VAR_9 & 0xff);
  }
  FUNC_2(VAR_1, "| Response code: %08x                   |\n", VAR_10);
  FUNC_2(VAR_1, "|-------------------------------------------|\n");
  for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
   if ((VAR_11 & 3) == 0) {
    VAR_7 = VAR_6;
    VAR_7 += FUNC_3(VAR_7, "| %04x:", VAR_11 << 4);
   }
   VAR_7 += FUNC_3(VAR_7, " %08x", FUNC_0(*(VAR_2++)));
   VAR_3--;
   if ((VAR_11 & 3) == 3 || VAR_11 == (VAR_8 - 1)) {
    while ((VAR_11 & 3) < 3) {
     VAR_7 += FUNC_3(VAR_7, "         ");
     VAR_11++;
    }
    FUNC_2(VAR_1, "%s |\n", VAR_6);
   }
  }
  FUNC_2(VAR_1, "+-------------------------------------------+\n");
 }
}
