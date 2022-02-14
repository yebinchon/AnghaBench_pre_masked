
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int data; } ;
struct nv50_wndw {int wimm; TYPE_1__ interlock; } ;


 size_t VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (int *,int) ;

__attribute__((used)) static void
FUNC_4(struct nv50_wndw *VAR_1, u32 *VAR_2)
{
 u32 *VAR_3;
 if ((VAR_3 = FUNC_3(&VAR_1->wimm, 2))) {
  FUNC_2(VAR_3, 0x0200, 1);
  if (VAR_2[VAR_0] & VAR_1->interlock.data)
   FUNC_0(VAR_3, 0x00000003);
  else
   FUNC_0(VAR_3, 0x00000001);
  FUNC_1(VAR_3, &VAR_1->wimm);
 }
}
