
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (unsigned char,unsigned char,struct serio*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(unsigned char VAR_2, unsigned char VAR_3,
    struct serio *VAR_4)
{
 if (FUNC_2(VAR_1)) {
  if ((~VAR_3 & VAR_0) &&
      (VAR_2 == 0xfa || VAR_2 == 0xfe)) {
   VAR_1--;
   FUNC_0("Extra keyboard ACK - filtered out\n");
   return 1;
  }
 }

 if (&FUNC_1 && FUNC_1(VAR_2, VAR_3, VAR_4)) {
  FUNC_0("Filtered out by platform filter\n");
  return 1;
 }

 return 0;
}
