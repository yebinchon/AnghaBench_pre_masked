
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
struct sprd_pll {size_t regs_num; int fflag; int fvco; int udelay; int itable; } ;
struct reg_cfg {size_t msk; size_t val; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct sprd_pll const*,size_t,int,size_t) ;
 size_t FUNC_2 (int,int) ;
 struct reg_cfg* FUNC_3 (size_t,int,int ) ;
 int FUNC_4 (struct reg_cfg*) ;
 size_t FUNC_5 (struct sprd_pll const*,int ) ;
 size_t FUNC_6 (int,int ) ;
 int FUNC_7 (struct sprd_pll const*) ;
 size_t FUNC_8 (struct sprd_pll const*,int ) ;
 size_t FUNC_9 (struct sprd_pll const*,int ) ;
 size_t FUNC_10 (struct sprd_pll const*,int ) ;
 size_t FUNC_11 (struct sprd_pll const*,size_t) ;
 int FUNC_12 (struct sprd_pll const*,size_t,int,size_t) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(const struct sprd_pll *VAR_10,
         unsigned long VAR_11,
         unsigned long VAR_12)
{
 struct reg_cfg *VAR_13;
 int VAR_14 = 0;
 u32 VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20 = VAR_10->regs_num, VAR_21 = 0;
 unsigned long VAR_22, VAR_23;
 u64 VAR_24, VAR_25, VAR_26 = VAR_11;

 VAR_13 = FUNC_3(VAR_20, sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_25 = FUNC_7(VAR_10);

 VAR_15 = FUNC_8(VAR_10, VAR_8);
 VAR_19 = FUNC_5(VAR_10, VAR_8);
 VAR_17 = FUNC_10(VAR_10, VAR_8);
 if (VAR_17 && (FUNC_11(VAR_10, VAR_19) & VAR_15))
  VAR_25 = VAR_25 * 2;

 VAR_15 = FUNC_8(VAR_10, VAR_7);
 VAR_19 = FUNC_5(VAR_10, VAR_7);
 VAR_17 = FUNC_10(VAR_10, VAR_7);
 VAR_13[VAR_19].msk = VAR_15;
 if (VAR_17 && ((VAR_10->fflag == 1 && VAR_26 <= VAR_10->fvco) ||
        (VAR_10->fflag == 0 && VAR_26 > VAR_10->fvco)))
  VAR_13[VAR_19].val |= VAR_15;

 if (VAR_17 && VAR_26 <= VAR_10->fvco)
  VAR_26 = VAR_26 * 2;

 VAR_15 = FUNC_8(VAR_10, VAR_3);
 VAR_19 = FUNC_5(VAR_10, VAR_3);
 VAR_13[VAR_19].val |= VAR_15;
 VAR_13[VAR_19].msk |= VAR_15;

 VAR_15 = FUNC_8(VAR_10, VAR_9);
 VAR_19 = FUNC_5(VAR_10, VAR_9);
 VAR_13[VAR_19].val |= VAR_15;
 VAR_13[VAR_19].msk |= VAR_15;

 VAR_23 = FUNC_2(VAR_26, VAR_25 * VAR_0);
 VAR_15 = FUNC_8(VAR_10, VAR_6);
 VAR_19 = FUNC_5(VAR_10, VAR_6);
 VAR_16 = FUNC_9(VAR_10, VAR_6);
 VAR_13[VAR_19].val |= (VAR_23 << VAR_16) & VAR_15;
 VAR_13[VAR_19].msk |= VAR_15;

 VAR_15 = FUNC_8(VAR_10, VAR_5);
 VAR_19 = FUNC_5(VAR_10, VAR_5);
 VAR_17 = FUNC_10(VAR_10, VAR_5);
 VAR_16 = FUNC_9(VAR_10, VAR_5);
 VAR_24 = VAR_26 - VAR_25 * VAR_23 * VAR_0;
 VAR_24 = FUNC_2(VAR_24, 10000) * ((VAR_15 >> VAR_16) + 1);
 VAR_22 = FUNC_0(VAR_24, VAR_25 * 100);
 VAR_13[VAR_19].val |= (VAR_22 << VAR_16) & VAR_15;
 VAR_13[VAR_19].msk |= VAR_15;

 VAR_18 = FUNC_6(VAR_26, VAR_10->itable);

 VAR_15 = FUNC_8(VAR_10, VAR_4);
 VAR_19 = FUNC_5(VAR_10, VAR_4);
 VAR_16 = FUNC_9(VAR_10, VAR_4);
 VAR_13[VAR_19].val |= VAR_18 << VAR_16 & VAR_15;
 VAR_13[VAR_19].msk |= VAR_15;

 for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++) {
  if (VAR_13[VAR_21].msk) {
   FUNC_12(VAR_10, VAR_21, VAR_13[VAR_21].msk, VAR_13[VAR_21].val);
   VAR_14 |= FUNC_1(VAR_10, VAR_21, VAR_13[VAR_21].msk,
         VAR_13[VAR_21].val);
  }
 }

 if (!VAR_14)
  FUNC_13(VAR_10->udelay);

 FUNC_4(VAR_13);
 return VAR_14;
}
