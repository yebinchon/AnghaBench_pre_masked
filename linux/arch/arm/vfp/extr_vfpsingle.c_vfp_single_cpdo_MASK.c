
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct op {int flags; scalar_t__ (* fn ) (unsigned int,unsigned int,int ,scalar_t__) ;} ;
typedef int s32 ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t FUNC_1 (scalar_t__) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct op* VAR_7 ;
 struct op* VAR_8 ;
 int FUNC_4 (char*,unsigned int,scalar_t__,...) ;
 scalar_t__ FUNC_5 (unsigned int,unsigned int,int ,scalar_t__) ;
 unsigned int FUNC_6 (scalar_t__) ;
 int FUNC_7 (unsigned int) ;
 unsigned int FUNC_8 (scalar_t__) ;
 unsigned int FUNC_9 (scalar_t__) ;
 unsigned int FUNC_10 (scalar_t__) ;

u32 FUNC_11(u32 VAR_9, u32 VAR_10)
{
 u32 VAR_11 = VAR_9 & VAR_1;
 u32 VAR_12 = 0;
 unsigned int VAR_13;
 unsigned int VAR_14 = FUNC_10(VAR_9);
 unsigned int VAR_15 = FUNC_9(VAR_9);
 unsigned int VAR_16, VAR_17, VAR_18;
 struct op *VAR_19;

 VAR_18 = 1 + ((VAR_10 & VAR_4) == VAR_4);

 VAR_19 = (VAR_11 == VAR_0) ? &VAR_8[FUNC_0(VAR_9)] : &VAR_7[FUNC_1(VAR_11)];







 if (VAR_19->flags & VAR_5)
  VAR_13 = FUNC_6(VAR_9);
 else
  VAR_13 = FUNC_8(VAR_9);





 if ((VAR_19->flags & VAR_6) || FUNC_2(VAR_13) == 0)
  VAR_17 = 0;
 else
  VAR_17 = VAR_10 & VAR_3;

 FUNC_4("VFP: vecstride=%u veclen=%u\n", VAR_18,
   (VAR_17 >> VAR_2) + 1);

 if (!VAR_19->fn)
  goto invalid;

 for (VAR_16 = 0; VAR_16 <= VAR_17; VAR_16 += 1 << VAR_2) {
  s32 VAR_20 = FUNC_7(VAR_15);
  u32 VAR_21;
  char VAR_22;

  VAR_22 = VAR_19->flags & VAR_5 ? 'd' : 's';
  if (VAR_11 == VAR_0)
   FUNC_4("VFP: itr%d (%c%u) = op[%u] (s%u=%08x)\n",
     VAR_16 >> VAR_2, VAR_22, VAR_13, VAR_14,
     VAR_15, VAR_20);
  else
   FUNC_4("VFP: itr%d (%c%u) = (s%u) op[%u] (s%u=%08x)\n",
     VAR_16 >> VAR_2, VAR_22, VAR_13, VAR_14,
     FUNC_1(VAR_11), VAR_15, VAR_20);

  VAR_21 = VAR_19->fn(VAR_13, VAR_14, VAR_20, VAR_10);
  FUNC_4("VFP: itr%d: exceptions=%08x\n",
    VAR_16 >> VAR_2, VAR_21);

  VAR_12 |= VAR_21;





  VAR_13 = FUNC_2(VAR_13) + ((FUNC_3(VAR_13) + VAR_18) & 7);
  VAR_14 = FUNC_2(VAR_14) + ((FUNC_3(VAR_14) + VAR_18) & 7);
  if (FUNC_2(VAR_15) != 0)
   VAR_15 = FUNC_2(VAR_15) + ((FUNC_3(VAR_15) + VAR_18) & 7);
 }
 return VAR_12;

 invalid:
 return (u32)-1;
}
