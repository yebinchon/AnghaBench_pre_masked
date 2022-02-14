
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fw; int fh_l; int fh_h; int sl; int bpp; int pfs; int npb; int sat; int nsb; } ;
struct TYPE_5__ {int bpp; int pfs; int npb; int sat; int ofs0; int ofs1; int ofs2; int ofs3; int wid0; int wid1; int wid2; int wid3; } ;
union chan_param_mem {TYPE_1__ pp; TYPE_2__ ip; } ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;
struct TYPE_6__ {int dev; } ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (union chan_param_mem*,int,int) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static void FUNC_2(union chan_param_mem *VAR_1,
      uint32_t VAR_2, uint16_t VAR_3,
      uint16_t VAR_4, uint16_t VAR_5)
{
 u32 VAR_6;
 u32 VAR_7;

 VAR_1->pp.fw = VAR_3 - 1;
 VAR_1->pp.fh_l = VAR_4 - 1;
 VAR_1->pp.fh_h = (VAR_4 - 1) >> 8;
 VAR_1->pp.sl = VAR_5 - 1;

 switch (VAR_2) {
 case 138:

  VAR_1->pp.bpp = 3;
  VAR_1->pp.pfs = 7;
  VAR_1->pp.npb = 31;
  VAR_1->pp.sat = 2;
  break;
 case 137:

  VAR_1->pp.bpp = 0;
  VAR_1->pp.pfs = 7;
  VAR_1->pp.npb = 7;
  VAR_1->pp.sat = 2;
  break;
 case 134:
  VAR_1->ip.bpp = 2;
  VAR_1->ip.pfs = 4;
  VAR_1->ip.npb = 15;
  VAR_1->ip.sat = 2;
  VAR_1->ip.ofs0 = 0;
  VAR_1->ip.ofs1 = 5;
  VAR_1->ip.ofs2 = 11;
  VAR_1->ip.ofs3 = 16;
  VAR_1->ip.wid0 = 4;
  VAR_1->ip.wid1 = 5;
  VAR_1->ip.wid2 = 4;
  break;
 case 141:
  VAR_1->ip.bpp = 1;
  VAR_1->ip.pfs = 4;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  VAR_1->ip.ofs0 = 0;
  VAR_1->ip.ofs1 = 8;
  VAR_1->ip.ofs2 = 16;
  VAR_1->ip.ofs3 = 24;
  VAR_1->ip.wid0 = 7;
  VAR_1->ip.wid1 = 7;
  VAR_1->ip.wid2 = 7;
  break;
 case 136:
  VAR_1->ip.bpp = 1;
  VAR_1->ip.pfs = 4;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  VAR_1->ip.ofs0 = 16;
  VAR_1->ip.ofs1 = 8;
  VAR_1->ip.ofs2 = 0;
  VAR_1->ip.ofs3 = 24;
  VAR_1->ip.wid0 = 7;
  VAR_1->ip.wid1 = 7;
  VAR_1->ip.wid2 = 7;
  break;
 case 139:
 case 140:
 case 142:
  VAR_1->ip.bpp = 0;
  VAR_1->ip.pfs = 4;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  VAR_1->ip.ofs0 = 8;
  VAR_1->ip.ofs1 = 16;
  VAR_1->ip.ofs2 = 24;
  VAR_1->ip.ofs3 = 0;
  VAR_1->ip.wid0 = 7;
  VAR_1->ip.wid1 = 7;
  VAR_1->ip.wid2 = 7;
  VAR_1->ip.wid3 = 7;
  break;
 case 133:
 case 135:
  VAR_1->ip.bpp = 0;
  VAR_1->ip.pfs = 4;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  VAR_1->ip.ofs0 = 24;
  VAR_1->ip.ofs1 = 16;
  VAR_1->ip.ofs2 = 8;
  VAR_1->ip.ofs3 = 0;
  VAR_1->ip.wid0 = 7;
  VAR_1->ip.wid1 = 7;
  VAR_1->ip.wid2 = 7;
  VAR_1->ip.wid3 = 7;
  break;
 case 132:
  VAR_1->ip.bpp = 2;
  VAR_1->ip.pfs = 6;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  break;
 case 130:
 case 131:
  VAR_1->ip.bpp = 3;
  VAR_1->ip.pfs = 3;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  VAR_6 = VAR_5 * VAR_4;
  VAR_7 = VAR_6 + VAR_6 / 4;
  FUNC_1(VAR_1, VAR_6, VAR_7);
  break;
 case 128:
  VAR_1->ip.bpp = 3;
  VAR_1->ip.pfs = 2;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  VAR_7 = VAR_5 * VAR_4;
  VAR_6 = VAR_7 + VAR_7 / 2;
  FUNC_1(VAR_1, VAR_6, VAR_7);
  break;
 case 129:
  VAR_1->ip.bpp = 3;
  VAR_1->ip.pfs = 2;
  VAR_1->ip.npb = 7;
  VAR_1->ip.sat = 2;
  VAR_6 = VAR_5 * VAR_4;
  VAR_7 = VAR_6 + VAR_6 / 2;
  FUNC_1(VAR_1, VAR_6, VAR_7);
  break;
 default:
  FUNC_0(VAR_0.dev,
   "mx3 ipu: unimplemented pixel format %d\n", VAR_2);
  break;
 }

 VAR_1->pp.nsb = 1;
}
