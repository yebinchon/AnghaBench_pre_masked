
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u32 ;
struct atom_context {int reg_block; int io_mode; int* divmul; int data_block; int shift; int fb_base; int io_attr; int scratch_size_bytes; int* scratch; TYPE_2__* card; int * iio; } ;
struct TYPE_6__ {int* ws; int * ps; struct atom_context* ctx; } ;
typedef TYPE_1__ atom_exec_context ;
struct TYPE_7__ {int (* reg_read ) (TYPE_2__*,int) ;int (* pll_read ) (TYPE_2__*,int) ;int (* mc_read ) (TYPE_2__*,int) ;} ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int* VAR_0 ;
 int* VAR_1 ;
 int FUNC_5 (struct atom_context*,int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (TYPE_2__*,int) ;
 int FUNC_9 (TYPE_2__*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static uint32_t FUNC_11(atom_exec_context *VAR_2, uint8_t VAR_3,
     int *VAR_4, uint32_t *VAR_5, int VAR_6)
{
 uint32_t VAR_7, VAR_8 = 0xCDCDCDCD, VAR_9, VAR_10;
 struct atom_context *VAR_11 = VAR_2->ctx;
 VAR_10 = VAR_3 & 7;
 VAR_9 = (VAR_3 >> 3) & 7;
 switch (VAR_10) {
 case 149:
  VAR_7 = FUNC_2(*VAR_4);
  (*VAR_4) += 2;
  if (VAR_6)
   FUNC_0("REG[0x%04X]", VAR_7);
  VAR_7 += VAR_11->reg_block;
  switch (VAR_11->io_mode) {
  case 147:
   VAR_8 = VAR_11->card->reg_read(VAR_11->card, VAR_7);
   break;
  case 146:
   FUNC_7("PCI registers are not implemented\n");
   return 0;
  case 145:
   FUNC_7("SYSIO registers are not implemented\n");
   return 0;
  default:
   if (!(VAR_11->io_mode & 0x80)) {
    FUNC_7("Bad IO mode\n");
    return 0;
   }
   if (!VAR_11->iio[VAR_11->io_mode & 0x7F]) {
    FUNC_7("Undefined indirect IO read method %d\n",
     VAR_11->io_mode & 0x7F);
    return 0;
   }
   VAR_8 =
       FUNC_5(VAR_11,
          VAR_11->iio[VAR_11->io_mode & 0x7F],
          VAR_7, 0);
  }
  break;
 case 150:
  VAR_7 = FUNC_4(*VAR_4);
  (*VAR_4)++;


  VAR_8 = FUNC_6((u32 *)&VAR_2->ps[VAR_7]);
  if (VAR_6)
   FUNC_0("PS[0x%02X,0x%04X]", VAR_7, VAR_8);
  break;
 case 148:
  VAR_7 = FUNC_4(*VAR_4);
  (*VAR_4)++;
  if (VAR_6)
   FUNC_0("WS[0x%02X]", VAR_7);
  switch (VAR_7) {
  case 131:
   VAR_8 = VAR_11->divmul[0];
   break;
  case 129:
   VAR_8 = VAR_11->divmul[1];
   break;
  case 134:
   VAR_8 = VAR_11->data_block;
   break;
  case 128:
   VAR_8 = VAR_11->shift;
   break;
  case 132:
   VAR_8 = 1 << VAR_11->shift;
   break;
  case 136:
   VAR_8 = ~(1 << VAR_11->shift);
   break;
  case 133:
   VAR_8 = VAR_11->fb_base;
   break;
  case 135:
   VAR_8 = VAR_11->io_attr;
   break;
  case 130:
   VAR_8 = VAR_11->reg_block;
   break;
  default:
   VAR_8 = VAR_2->ws[VAR_7];
  }
  break;
 case 154:
  VAR_7 = FUNC_2(*VAR_4);
  (*VAR_4) += 2;
  if (VAR_6) {
   if (VAR_11->data_block)
    FUNC_0("ID[0x%04X+%04X]", VAR_7, VAR_11->data_block);
   else
    FUNC_0("ID[0x%04X]", VAR_7);
  }
  VAR_8 = FUNC_3(VAR_7 + VAR_11->data_block);
  break;
 case 155:
  VAR_7 = FUNC_4(*VAR_4);
  (*VAR_4)++;
  if ((VAR_11->fb_base + (VAR_7 * 4)) > VAR_11->scratch_size_bytes) {
   FUNC_1("ATOM: fb read beyond scratch region: %d vs. %d\n",
      VAR_11->fb_base + (VAR_7 * 4), VAR_11->scratch_size_bytes);
   VAR_8 = 0;
  } else
   VAR_8 = VAR_11->scratch[(VAR_11->fb_base / 4) + VAR_7];
  if (VAR_6)
   FUNC_0("FB[0x%02X]", VAR_7);
  break;
 case 153:
  switch (VAR_9) {
  case 140:
   VAR_8 = FUNC_3(*VAR_4);
   (*VAR_4) += 4;
   if (VAR_6)
    FUNC_0("IMM 0x%08X\n", VAR_8);
   return VAR_8;
  case 139:
  case 137:
  case 138:
   VAR_8 = FUNC_2(*VAR_4);
   (*VAR_4) += 2;
   if (VAR_6)
    FUNC_0("IMM 0x%04X\n", VAR_8);
   return VAR_8;
  case 144:
  case 141:
  case 143:
  case 142:
   VAR_8 = FUNC_4(*VAR_4);
   (*VAR_4)++;
   if (VAR_6)
    FUNC_0("IMM 0x%02X\n", VAR_8);
   return VAR_8;
  }
  return 0;
 case 151:
  VAR_7 = FUNC_4(*VAR_4);
  (*VAR_4)++;
  if (VAR_6)
   FUNC_0("PLL[0x%02X]", VAR_7);
  VAR_8 = VAR_11->card->pll_read(VAR_11->card, VAR_7);
  break;
 case 152:
  VAR_7 = FUNC_4(*VAR_4);
  (*VAR_4)++;
  if (VAR_6)
   FUNC_0("MC[0x%02X]", VAR_7);
  VAR_8 = VAR_11->card->mc_read(VAR_11->card, VAR_7);
  break;
 }
 if (VAR_5)
  *VAR_5 = VAR_8;
 VAR_8 &= VAR_0[VAR_9];
 VAR_8 >>= VAR_1[VAR_9];
 if (VAR_6)
  switch (VAR_9) {
  case 140:
   FUNC_0(".[31:0] -> 0x%08X\n", VAR_8);
   break;
  case 139:
   FUNC_0(".[15:0] -> 0x%04X\n", VAR_8);
   break;
  case 137:
   FUNC_0(".[23:8] -> 0x%04X\n", VAR_8);
   break;
  case 138:
   FUNC_0(".[31:16] -> 0x%04X\n", VAR_8);
   break;
  case 144:
   FUNC_0(".[7:0] -> 0x%02X\n", VAR_8);
   break;
  case 141:
   FUNC_0(".[15:8] -> 0x%02X\n", VAR_8);
   break;
  case 143:
   FUNC_0(".[23:16] -> 0x%02X\n", VAR_8);
   break;
  case 142:
   FUNC_0(".[31:24] -> 0x%02X\n", VAR_8);
   break;
  }
 return VAR_8;
}
