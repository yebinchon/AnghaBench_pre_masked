
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef size_t u32 ;
typedef int u16 ;
struct sprd_pll {size_t regs_num; int fflag; int k1; int k2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,size_t) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_1 (size_t) ;
 size_t* FUNC_2 (size_t,int,int ) ;
 int FUNC_3 (size_t*) ;
 scalar_t__ FUNC_4 (struct sprd_pll const*,size_t*,int ) ;
 int FUNC_5 (struct sprd_pll const*,size_t*,int ) ;
 int FUNC_6 (struct sprd_pll const*) ;
 size_t FUNC_7 (struct sprd_pll const*,int ) ;
 scalar_t__ FUNC_8 (struct sprd_pll const*,int ) ;
 size_t FUNC_9 (struct sprd_pll const*,size_t) ;

__attribute__((used)) static unsigned long FUNC_10(const struct sprd_pll *VAR_11,
        unsigned long VAR_12)
{
 u32 *VAR_13;
 u32 VAR_14, VAR_15, VAR_16 = VAR_11->regs_num;
 unsigned long VAR_17, VAR_18, VAR_19 = 0;
 u64 VAR_20;
 u16 VAR_21, VAR_22;

 VAR_13 = FUNC_2(VAR_16, sizeof(*VAR_13), VAR_3);
 if (!VAR_13)
  return -VAR_2;

 for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++)
  VAR_13[VAR_14] = FUNC_9(VAR_11, VAR_14);

 VAR_20 = FUNC_6(VAR_11);

 if (FUNC_4(VAR_11, VAR_13, VAR_9))
  VAR_20 = VAR_20 * 2;

 if (FUNC_8(VAR_11, VAR_8) &&
     ((VAR_11->fflag == 1 && FUNC_4(VAR_11, VAR_13, VAR_8)) ||
      (!VAR_11->fflag && !FUNC_4(VAR_11, VAR_13, VAR_8))))
  VAR_20 = VAR_20 / 2;

 if (!FUNC_4(VAR_11, VAR_13, VAR_4)) {
  VAR_17 = VAR_20 * FUNC_5(VAR_11, VAR_13, VAR_6) * VAR_0;
 } else {
  VAR_18 = FUNC_5(VAR_11, VAR_13, VAR_7);
  if (FUNC_4(VAR_11, VAR_13, VAR_10))
   VAR_19 = FUNC_5(VAR_11, VAR_13, VAR_5);

  VAR_15 = FUNC_7(VAR_11, VAR_5);

  VAR_21 = VAR_11->k1;
  VAR_22 = VAR_11->k2;
  VAR_17 = FUNC_0(VAR_20 * VAR_19 * VAR_21,
      ((VAR_15 >> FUNC_1(VAR_15)) + 1)) *
      VAR_22 + VAR_20 * VAR_18 * VAR_1;
 }

 FUNC_3(VAR_13);
 return VAR_17;
}
