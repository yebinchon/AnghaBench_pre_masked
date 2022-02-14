
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nv50_core {int chan; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int *) ;
 int FUNC_2 (int*,int,int) ;
 int* FUNC_3 (int *,int) ;

void
FUNC_4(struct nv50_core *VAR_3, u32 *VAR_4, bool VAR_5)
{
 u32 *VAR_6;
 if ((VAR_6 = FUNC_3(&VAR_3->chan, 9))) {
  if (VAR_5) {
   FUNC_2(VAR_6, 0x020c, 1);
   FUNC_0(VAR_6, 0x00001000 | VAR_0);
  }

  FUNC_2(VAR_6, 0x0218, 2);
  FUNC_0(VAR_6, VAR_4[VAR_1]);
  FUNC_0(VAR_6, VAR_4[VAR_2]);
  FUNC_2(VAR_6, 0x0200, 1);
  FUNC_0(VAR_6, 0x00000001);

  if (VAR_5) {
   FUNC_2(VAR_6, 0x020c, 1);
   FUNC_0(VAR_6, 0x00000000);
  }
  FUNC_1(VAR_6, &VAR_3->chan);
 }
}
