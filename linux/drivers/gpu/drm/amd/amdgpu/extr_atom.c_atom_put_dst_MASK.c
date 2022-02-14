
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct atom_context {size_t reg_block; int io_mode; size_t* divmul; size_t data_block; size_t shift; size_t fb_base; size_t io_attr; size_t scratch_size_bytes; size_t* scratch; TYPE_2__* card; int * iio; } ;
struct TYPE_7__ {size_t* ws; int * ps; struct atom_context* ctx; } ;
typedef TYPE_1__ atom_exec_context ;
struct TYPE_8__ {int (* mc_write ) (TYPE_2__*,size_t,size_t) ;int (* pll_write ) (TYPE_2__*,size_t,size_t) ;int (* reg_write ) (TYPE_2__*,size_t,size_t) ;} ;
 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*,size_t,size_t) ;
 size_t FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 size_t* VAR_0 ;
 size_t* VAR_1 ;
 size_t** VAR_2 ;
 int FUNC_4 (struct atom_context*,int ,size_t,size_t) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (TYPE_2__*,size_t,size_t) ;
 int FUNC_8 (TYPE_2__*,size_t,size_t) ;
 int FUNC_9 (TYPE_2__*,size_t,size_t) ;
 int FUNC_10 (TYPE_2__*,size_t,size_t) ;

__attribute__((used)) static void FUNC_11(atom_exec_context *VAR_3, int VAR_4, uint8_t VAR_5,
    int *VAR_6, uint32_t VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9 =
     VAR_2[(VAR_5 >> 3) & 7][(VAR_5 >> 6) & 3], VAR_10 =
     VAR_7, VAR_11;
 struct atom_context *VAR_12 = VAR_3->ctx;
 VAR_10 &= VAR_0[VAR_9] >> VAR_1[VAR_9];
 VAR_7 <<= VAR_1[VAR_9];
 VAR_7 &= VAR_0[VAR_9];
 VAR_8 &= ~VAR_0[VAR_9];
 VAR_7 |= VAR_8;
 switch (VAR_4) {
 case 149:
  VAR_11 = FUNC_2(*VAR_6);
  (*VAR_6) += 2;
  FUNC_0("REG[0x%04X]", VAR_11);
  VAR_11 += VAR_12->reg_block;
  switch (VAR_12->io_mode) {
  case 147:
   if (VAR_11 == 0)
    VAR_12->card->reg_write(VAR_12->card, VAR_11,
            VAR_7 << 2);
   else
    VAR_12->card->reg_write(VAR_12->card, VAR_11, VAR_7);
   break;
  case 146:
   FUNC_6("PCI registers are not implemented\n");
   return;
  case 145:
   FUNC_6("SYSIO registers are not implemented\n");
   return;
  default:
   if (!(VAR_12->io_mode & 0x80)) {
    FUNC_6("Bad IO mode\n");
    return;
   }
   if (!VAR_12->iio[VAR_12->io_mode & 0xFF]) {
    FUNC_6("Undefined indirect IO write method %d\n",
     VAR_12->io_mode & 0x7F);
    return;
   }
   FUNC_4(VAR_12, VAR_12->iio[VAR_12->io_mode & 0xFF],
      VAR_11, VAR_7);
  }
  break;
 case 150:
  VAR_11 = FUNC_3(*VAR_6);
  (*VAR_6)++;
  FUNC_0("PS[0x%02X]", VAR_11);
  VAR_3->ps[VAR_11] = FUNC_5(VAR_7);
  break;
 case 148:
  VAR_11 = FUNC_3(*VAR_6);
  (*VAR_6)++;
  FUNC_0("WS[0x%02X]", VAR_11);
  switch (VAR_11) {
  case 131:
   VAR_12->divmul[0] = VAR_7;
   break;
  case 129:
   VAR_12->divmul[1] = VAR_7;
   break;
  case 134:
   VAR_12->data_block = VAR_7;
   break;
  case 128:
   VAR_12->shift = VAR_7;
   break;
  case 132:
  case 136:
   break;
  case 133:
   VAR_12->fb_base = VAR_7;
   break;
  case 135:
   VAR_12->io_attr = VAR_7;
   break;
  case 130:
   VAR_12->reg_block = VAR_7;
   break;
  default:
   VAR_3->ws[VAR_11] = VAR_7;
  }
  break;
 case 153:
  VAR_11 = FUNC_3(*VAR_6);
  (*VAR_6)++;
  if ((VAR_12->fb_base + (VAR_11 * 4)) > VAR_12->scratch_size_bytes) {
   FUNC_1("ATOM: fb write beyond scratch region: %d vs. %d\n",
      VAR_12->fb_base + (VAR_11 * 4), VAR_12->scratch_size_bytes);
  } else
   VAR_12->scratch[(VAR_12->fb_base / 4) + VAR_11] = VAR_7;
  FUNC_0("FB[0x%02X]", VAR_11);
  break;
 case 151:
  VAR_11 = FUNC_3(*VAR_6);
  (*VAR_6)++;
  FUNC_0("PLL[0x%02X]", VAR_11);
  VAR_12->card->pll_write(VAR_12->card, VAR_11, VAR_7);
  break;
 case 152:
  VAR_11 = FUNC_3(*VAR_6);
  (*VAR_6)++;
  FUNC_0("MC[0x%02X]", VAR_11);
  VAR_12->card->mc_write(VAR_12->card, VAR_11, VAR_7);
  return;
 }
 switch (VAR_9) {
 case 140:
  FUNC_0(".[31:0] <- 0x%08X\n", VAR_10);
  break;
 case 139:
  FUNC_0(".[15:0] <- 0x%04X\n", VAR_10);
  break;
 case 137:
  FUNC_0(".[23:8] <- 0x%04X\n", VAR_10);
  break;
 case 138:
  FUNC_0(".[31:16] <- 0x%04X\n", VAR_10);
  break;
 case 144:
  FUNC_0(".[7:0] <- 0x%02X\n", VAR_10);
  break;
 case 141:
  FUNC_0(".[15:8] <- 0x%02X\n", VAR_10);
  break;
 case 143:
  FUNC_0(".[23:16] <- 0x%02X\n", VAR_10);
  break;
 case 142:
  FUNC_0(".[31:24] <- 0x%02X\n", VAR_10);
  break;
 }
}
