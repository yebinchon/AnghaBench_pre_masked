
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_x86 {int x86; int x86_vendor; int x86_vendor_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,unsigned char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,unsigned char) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct cpuinfo_x86 *VAR_3)
{

 if (VAR_3->x86 == 4 && FUNC_7()) {
  unsigned char VAR_4, VAR_5;

  FUNC_6(VAR_3->x86_vendor_id, "CyrixInstead");
  VAR_3->x86_vendor = VAR_2;





  FUNC_0(&VAR_4, &VAR_5);

  VAR_4 >>= 4;



  if (VAR_4 == 5 || VAR_4 == 3) {
   unsigned char VAR_6;
   unsigned long VAR_7;
   FUNC_4("Enabling CPUID on Cyrix processor.\n");
   FUNC_3(VAR_7);
   VAR_6 = FUNC_1(VAR_0);

   FUNC_5(VAR_0, (VAR_6 & 0x0f) | 0x10);

   FUNC_5(VAR_1, FUNC_1(VAR_1) | 0x80);

   FUNC_5(VAR_0, VAR_6);
   FUNC_2(VAR_7);
  }
 }
}
