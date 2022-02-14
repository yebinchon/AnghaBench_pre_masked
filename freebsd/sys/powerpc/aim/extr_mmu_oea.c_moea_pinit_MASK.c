
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_int ;
typedef TYPE_1__* pmap_t ;
typedef int mmu_t ;
struct TYPE_3__ {int * pm_sr; struct TYPE_3__* pmap_phys; int pmap_pvo; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int,int) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,int) ;

void
FUNC_9(mmu_t VAR_6, pmap_t VAR_7)
{
 int VAR_8, VAR_9;
 u_int VAR_10;

 FUNC_0((int)VAR_7 < VAR_1, ("moea_pinit: virt pmap"));
 FUNC_1(&VAR_7->pmap_pvo);

 VAR_10 = 0;
 __asm __volatile("mftb %0" : "=r"(VAR_10));

 if ((VAR_7->pmap_phys = (pmap_t)FUNC_4(VAR_6, (vm_offset_t)VAR_7))
     == ((void*)0)) {
  VAR_7->pmap_phys = VAR_7;
 }


 FUNC_5(&VAR_4);



 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8 += VAR_2) {
  u_int VAR_11, VAR_12;
  VAR_5 = (VAR_5 * 0x1105) + VAR_10;
  VAR_11 = VAR_5 & (VAR_0 - 1);
  if (VAR_11 == 0)
   continue;
  VAR_12 = VAR_11 >> 5;
  VAR_9 = 1 << (VAR_11 & (VAR_2 - 1));
  VAR_11 = (VAR_5 & 0xfffff);
  if (VAR_3[VAR_12] & VAR_9) {

   if (VAR_3[VAR_12] == 0xffffffff) {
    VAR_10 = (VAR_5 >> 20);
    continue;
   }
   VAR_8 = FUNC_3(~VAR_3[VAR_12]) - 1;
   VAR_9 = 1 << VAR_8;
   VAR_11 &= FUNC_8(0xfffff, VAR_2);
   VAR_11 |= VAR_8;
  }
  FUNC_0(!(VAR_3[VAR_12] & VAR_9),
      ("Allocating in-use VSID group %#x\n", VAR_11));
  VAR_3[VAR_12] |= VAR_9;
  for (VAR_8 = 0; VAR_8 < 16; VAR_8++)
   VAR_7->pm_sr[VAR_8] = FUNC_2(VAR_8, VAR_11);
  FUNC_6(&VAR_4);
  return;
 }

 FUNC_6(&VAR_4);
 FUNC_7("moea_pinit: out of segments");
}
