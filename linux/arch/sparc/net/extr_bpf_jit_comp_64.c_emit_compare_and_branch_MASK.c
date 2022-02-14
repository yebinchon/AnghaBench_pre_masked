
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct jit_ctx {int* offset; int tmp_1_used; scalar_t__ idx; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int const) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
 int * VAR_24 ;
 int FUNC_1 (int ,scalar_t__,int,struct jit_ctx*) ;
 int FUNC_2 (int const,int ,struct jit_ctx*) ;
 int FUNC_3 (int const,int const,struct jit_ctx*) ;
 int FUNC_4 (int ,scalar_t__,int,int const,int ,struct jit_ctx*) ;
 int FUNC_5 (int ,scalar_t__,int,int const,int const,struct jit_ctx*) ;
 int FUNC_6 (int const,int ,struct jit_ctx*) ;
 int FUNC_7 (int const,int const,struct jit_ctx*) ;
 int FUNC_8 (int const,int const,struct jit_ctx*) ;
 int FUNC_9 (struct jit_ctx*) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int const) ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_13(const u8 VAR_26, const u8 VAR_27, u8 VAR_28,
       const s32 VAR_29, bool VAR_30, int VAR_31,
       struct jit_ctx *VAR_32)
{
 bool VAR_33 = (VAR_25 & VAR_0) != 0;
 const u8 VAR_34 = VAR_24[VAR_23];

 VAR_31 = VAR_32->offset[VAR_31];

 if (!FUNC_10(VAR_31 - VAR_32->idx) ||
     FUNC_0(VAR_26) == 132)
  VAR_33 = 0;

 if (VAR_30) {
  bool VAR_35 = 1;

  if (VAR_33) {
   if (!FUNC_12(VAR_29))
    VAR_35 = 0;
  } else if (!FUNC_11(VAR_29)) {
   VAR_35 = 0;
  }
  if (!VAR_35) {
   VAR_32->tmp_1_used = 1;
   FUNC_8(VAR_29, VAR_34, VAR_32);
   VAR_28 = VAR_34;
   VAR_30 = 0;
  }
 }

 if (!VAR_33) {
  u32 VAR_36;

  if (FUNC_0(VAR_26) == 132) {
   if (VAR_30)
    FUNC_3(VAR_27, VAR_29, VAR_32);
   else
    FUNC_2(VAR_27, VAR_28, VAR_32);
  } else {
   if (VAR_30)
    FUNC_7(VAR_27, VAR_29, VAR_32);
   else
    FUNC_6(VAR_27, VAR_28, VAR_32);
  }
  switch (FUNC_0(VAR_26)) {
  case 138:
   VAR_36 = VAR_1;
   break;
  case 136:
   VAR_36 = VAR_5;
   break;
  case 134:
   VAR_36 = VAR_9;
   break;
  case 137:
   VAR_36 = VAR_4;
   break;
  case 135:
   VAR_36 = VAR_8;
   break;
  case 132:
  case 133:
   VAR_36 = VAR_10;
   break;
  case 130:
   VAR_36 = VAR_2;
   break;
  case 128:
   VAR_36 = VAR_6;
   break;
  case 131:
   VAR_36 = VAR_3;
   break;
  case 129:
   VAR_36 = VAR_7;
   break;
  default:



   return -VAR_22;
  }
  FUNC_1(VAR_36, VAR_32->idx, VAR_31, VAR_32);
  FUNC_9(VAR_32);
 } else {
  u32 VAR_37;

  switch (FUNC_0(VAR_26)) {
  case 138:
   VAR_37 = VAR_11;
   break;
  case 136:
   VAR_37 = VAR_15;
   break;
  case 134:
   VAR_37 = VAR_19;
   break;
  case 137:
   VAR_37 = VAR_14;
   break;
  case 135:
   VAR_37 = VAR_18;
   break;
  case 133:
   VAR_37 = VAR_20;
   break;
  case 130:
   VAR_37 = VAR_12;
   break;
  case 128:
   VAR_37 = VAR_16;
   break;
  case 131:
   VAR_37 = VAR_13;
   break;
  case 129:
   VAR_37 = VAR_17;
   break;
  default:



   return -VAR_22;
  }
  VAR_37 |= VAR_21;
  if (VAR_30)
   FUNC_5(VAR_37, VAR_32->idx, VAR_31,
         VAR_27, VAR_29, VAR_32);
  else
   FUNC_4(VAR_37, VAR_32->idx, VAR_31,
        VAR_27, VAR_28, VAR_32);
 }
 return 0;
}
