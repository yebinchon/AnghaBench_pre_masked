
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (int,unsigned long*) ;

__attribute__((used)) static void FUNC_2(int VAR_0, bool VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = 0xdeadbeef;
 if (!FUNC_1(VAR_0, &VAR_2)) {
  FUNC_0("SPR 0x%03x (%4d) Faulted during read\n", VAR_0, VAR_0);
  return;
 }

 if (VAR_2 == 0xdeadbeef) {

  VAR_2 = 0x0badcafe;
  if (!FUNC_1(VAR_0, &VAR_2)) {
   FUNC_0("SPR 0x%03x (%4d) Faulted during read\n", VAR_0, VAR_0);
   return;
  }

  if (VAR_2 == 0x0badcafe) {
   if (VAR_1)
    FUNC_0("SPR 0x%03x (%4d) Unimplemented\n", VAR_0, VAR_0);
   return;
  }
 }

 FUNC_0("SPR 0x%03x (%4d) = 0x%lx\n", VAR_0, VAR_0, VAR_2);
}
