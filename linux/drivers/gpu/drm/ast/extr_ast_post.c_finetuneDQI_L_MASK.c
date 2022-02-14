
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ast_private {int dummy; } ;
struct ast2300_dram_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ast_private*,int,int) ;
 int FUNC_1 (struct ast_private*) ;

__attribute__((used)) static bool FUNC_2(struct ast_private *VAR_2, struct ast2300_dram_param *VAR_3)
{
 u32 VAR_4[2], VAR_5[16], VAR_6[16], VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 bool VAR_13 = 0;
FINETUNE_START:
 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  VAR_5[VAR_9] = 0xff;
  VAR_6[VAR_9] = 0x0;
 }
 VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < 76; VAR_7++) {
  FUNC_0(VAR_2, 0x1E6E0068, 0x00001400 | (VAR_7 << 16) | (VAR_7 << 24));
  FUNC_0(VAR_2, 0x1E6E0074, VAR_0);
  VAR_8 = FUNC_1(VAR_2);
  if (VAR_8 != 0) {
   VAR_10 = 0x00010001;
   for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
    if (VAR_8 & VAR_10) {
     if (VAR_5[VAR_9] > VAR_7) {
      VAR_5[VAR_9] = VAR_7;
     }
     if (VAR_6[VAR_9] < VAR_7) {
      VAR_6[VAR_9] = VAR_7;
     }
    }
    VAR_10 <<= 1;
   }
   VAR_11++;
  } else if (VAR_11 >= VAR_1) {
   break;
  }
 }
 VAR_4[0] = 0x0;
 VAR_11 = 0;
 for (VAR_9 = 0; VAR_9 < 16; VAR_9++) {
  if ((VAR_6[VAR_9] > VAR_5[VAR_9]) && ((VAR_6[VAR_9] - VAR_5[VAR_9]) >= VAR_1)) {
   VAR_4[0] += VAR_5[VAR_9];
   VAR_11++;
  }
 }
 if (VAR_12++ > 10)
  goto FINETUNE_DONE;
 if (VAR_11 != 16) {
  goto FINETUNE_START;
 }
 VAR_13 = 1;
FINETUNE_DONE:
 VAR_4[0] = VAR_4[0] >> 4;
 VAR_4[1] = VAR_4[0];

 VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
  VAR_8 >>= 3;
  if ((VAR_6[VAR_9] > VAR_5[VAR_9]) && ((VAR_6[VAR_9] - VAR_5[VAR_9]) >= VAR_1)) {
   VAR_7 = VAR_5[VAR_9];
   if (VAR_4[0] >= VAR_7) {
    VAR_7 = ((VAR_4[0] - VAR_7) * 19) >> 5;
    if (VAR_7 > 3) {
     VAR_7 = 3;
    }
   } else {
    VAR_7 = ((VAR_7 - VAR_4[0]) * 19) >> 5;
    if (VAR_7 > 4) {
     VAR_7 = 4;
    }
    VAR_7 = (8 - VAR_7) & 0x7;
   }
   VAR_8 |= VAR_7 << 21;
  }
 }
 FUNC_0(VAR_2, 0x1E6E0080, VAR_8);

 VAR_8 = 0;
 for (VAR_9 = 8; VAR_9 < 16; VAR_9++) {
  VAR_8 >>= 3;
  if ((VAR_6[VAR_9] > VAR_5[VAR_9]) && ((VAR_6[VAR_9] - VAR_5[VAR_9]) >= VAR_1)) {
   VAR_7 = VAR_5[VAR_9];
   if (VAR_4[1] >= VAR_7) {
    VAR_7 = ((VAR_4[1] - VAR_7) * 19) >> 5;
    if (VAR_7 > 3) {
     VAR_7 = 3;
    } else {
     VAR_7 = (VAR_7 - 1) & 0x7;
    }
   } else {
    VAR_7 = ((VAR_7 - VAR_4[1]) * 19) >> 5;
    VAR_7 += 1;
    if (VAR_7 > 4) {
     VAR_7 = 4;
    }
    VAR_7 = (8 - VAR_7) & 0x7;
   }
   VAR_8 |= VAR_7 << 21;
  }
 }
 FUNC_0(VAR_2, 0x1E6E0084, VAR_8);
 return VAR_13;
}
