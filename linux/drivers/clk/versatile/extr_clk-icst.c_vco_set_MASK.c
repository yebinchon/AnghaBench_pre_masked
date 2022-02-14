
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct icst_vco {int v; int s; int r; } ;
struct clk_icst {int ctype; int lockreg_off; int map; int vcoreg_off; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct clk_icst *VAR_6, struct icst_vco VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10;


 switch (VAR_6->ctype) {
 case 131:
  VAR_8 = VAR_0;
  VAR_9 = VAR_7.v & 0xFF;
  if (VAR_7.v & 0x100)
   FUNC_1("ICST error: tried to set bit 8 of VDW\n");
  if (VAR_7.s != 1)
   FUNC_1("ICST error: tried to use VOD != 1\n");
  if (VAR_7.r != 22)
   FUNC_1("ICST error: tried to use RDW != 22\n");
  break;
 case 130:
  VAR_8 = VAR_1;
  VAR_9 = VAR_7.v & 0xFF;
  if (VAR_7.v & 0x100)
   FUNC_1("ICST error: tried to set bit 8 of VDW\n");
  if (VAR_7.s != 3)
   FUNC_1("ICST error: tried to use VOD != 1\n");
  if (VAR_7.r != 46)
   FUNC_1("ICST error: tried to use RDW != 22\n");
  break;
 case 129:
  VAR_8 = VAR_2;
  VAR_9 = (VAR_7.v & 0xFF) | VAR_7.s << 8;
  if (VAR_7.v & 0x100)
   FUNC_1("ICST error: tried to set bit 8 of VDW\n");
  if (VAR_7.r != 22)
   FUNC_1("ICST error: tried to use RDW != 22\n");
  break;
 case 128:
  VAR_8 = VAR_3;
  VAR_9 = ((VAR_7.v & 0xFF) << 12) | (VAR_7.s << 20);
  if (VAR_7.v & 0x100)
   FUNC_1("ICST error: tried to set bit 8 of VDW\n");
  if (VAR_7.r != 22)
   FUNC_1("ICST error: tried to use RDW != 22\n");
  break;
 default:

  VAR_8 = VAR_4;
  VAR_9 = VAR_7.v | (VAR_7.r << 9) | (VAR_7.s << 16);
  break;
 }

 FUNC_0("ICST: new val = 0x%08x\n", VAR_9);


 VAR_10 = FUNC_3(VAR_6->map, VAR_6->lockreg_off, VAR_5);
 if (VAR_10)
  return VAR_10;
 VAR_10 = FUNC_2(VAR_6->map, VAR_6->vcoreg_off, VAR_8, VAR_9);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_6->map, VAR_6->lockreg_off, 0);
 if (VAR_10)
  return VAR_10;
 return 0;
}
