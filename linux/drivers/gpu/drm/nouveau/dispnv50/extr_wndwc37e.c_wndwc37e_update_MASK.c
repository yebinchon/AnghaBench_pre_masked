
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int data; } ;
struct nv50_wndw {int wndw; TYPE_1__ interlock; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (int *,int) ;

void
FUNC_4(struct nv50_wndw *VAR_4, u32 *VAR_5)
{
 u32 *VAR_6;
 if ((VAR_6 = FUNC_3(&VAR_4->wndw, 5))) {
  FUNC_2(VAR_6, 0x0370, 2);
  FUNC_0(VAR_6, VAR_5[VAR_1] << 1 |
          VAR_5[VAR_0]);
  FUNC_0(VAR_6, VAR_5[VAR_3]);
  FUNC_2(VAR_6, 0x0200, 1);
  if (VAR_5[VAR_2] & VAR_4->interlock.data)
   FUNC_0(VAR_6, 0x00001001);
  else
   FUNC_0(VAR_6, 0x00000001);
  FUNC_1(VAR_6, &VAR_4->wndw);
 }
}
