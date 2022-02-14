
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u_long ;
typedef scalar_t__ u_int32_t ;
typedef int u_int ;
struct TYPE_3__ {int uf_fsr; unsigned long uf_pc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*,int,scalar_t__,scalar_t__) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void
FUNC_2(const u_int *VAR_6, u_long VAR_7)
{
 u_int32_t VAR_8[64];
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 64; VAR_9++)
     VAR_8[VAR_9] = VAR_3[VAR_9];

 VAR_5.uf_fsr = (VAR_5.uf_fsr & ~VAR_0) |
  (VAR_2 << VAR_1);
 VAR_5.uf_pc = (u_long)VAR_6;
 if (FUNC_0(&VAR_5) == 0)
     __asm("stx %%fsr,%0" : "=m" (VAR_5.uf_fsr));

 for (VAR_9 = 0; VAR_9 < 64; VAR_9++) {
  if (!(VAR_7 & (1UL << VAR_9)) && VAR_8[VAR_9] != VAR_3[VAR_9]) {
   FUNC_1(VAR_4, "### %2d %08lx != %08lx\n",
       VAR_9, VAR_8[VAR_9], VAR_3[VAR_9]);
  }
 }
}
