
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_6;

 if ((FUNC_1() & 0x0008f000) == 0) {
  VAR_6 = VAR_5;
 } else if ((FUNC_1() & 0x0008f000) == 0x00007000) {
  VAR_6 = (FUNC_1() & (1 << 23)) ? VAR_2 : VAR_1;
 } else if ((FUNC_1() & 0x00080000) == 0x00000000) {
  VAR_6 = (FUNC_1() >> 16) & 7;
  if (VAR_6)
   VAR_6 += VAR_1;
 } else if ((FUNC_1() & 0x000f0000) == 0x000f0000) {


  unsigned int VAR_7 = FUNC_0(VAR_0);
  if ((VAR_7 & 0x0000000f) >= 0x00000003 ||
      (VAR_7 & 0x000000f0) >= 0x00000030)
   VAR_6 = VAR_4;
  else if ((VAR_7 & 0x0000000f) == 0x00000002 ||
    (VAR_7 & 0x000000f0) == 0x00000020)
   VAR_6 = VAR_3;
  else
   VAR_6 = VAR_5;
 } else
  VAR_6 = VAR_5;

 return VAR_6;
}
