
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
typedef int vm_offset_t ;
typedef int u_int ;
typedef scalar_t__ caddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(caddr_t VAR_3, u_int VAR_4, int VAR_5)
{
 vm_paddr_t VAR_6, VAR_7 = 0;
 vm_offset_t VAR_8;
 u_int VAR_9 = (VAR_5 & 4) ? ~(128*1024-1) : ~(64*1024-1);

 VAR_8 = (vm_offset_t)FUNC_2((vm_offset_t)VAR_3 + VAR_4);
 for (; VAR_3 < (caddr_t) VAR_8 ; VAR_3 += VAR_1) {
  VAR_6 = FUNC_3(FUNC_1(VAR_2, (vm_offset_t)VAR_3));
  if (VAR_6 == 0)
   FUNC_0("isa_dmacheck: no physical page present");
  if (VAR_6 >= VAR_0)
   return (1);
  if (VAR_7) {
   if (VAR_7 + VAR_1 != VAR_6)
    return (1);

   if (((u_int)VAR_7 ^ (u_int)VAR_6) & VAR_9)
    return (1);
  }
  VAR_7 = VAR_6;
 }
 return (0);
}
