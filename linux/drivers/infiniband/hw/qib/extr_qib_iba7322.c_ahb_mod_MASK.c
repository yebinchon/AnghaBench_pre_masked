
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u64 ;
typedef int u32 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qib_devdata*,char*,int) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int) ;

__attribute__((used)) static u32 FUNC_3(struct qib_devdata *VAR_7, int VAR_8, int VAR_9, int VAR_10,
      u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13, VAR_14, VAR_15;
 u64 VAR_16, VAR_17, VAR_18;
 u32 VAR_19 = 0xBAD0BAD;
 int VAR_20;

 VAR_18 = FUNC_1(VAR_7, VAR_5);

 VAR_17 = (VAR_8 << 1) | 1;
 FUNC_2(VAR_7, VAR_5, VAR_17);

 for (VAR_20 = 1; VAR_20 < VAR_3; ++VAR_20) {
  VAR_16 = FUNC_1(VAR_7, VAR_6);
  if (VAR_16 & VAR_2)
   break;
 }
 if (VAR_20 >= VAR_3) {
  FUNC_0(VAR_7, "No ahb_rdy in %d tries\n", VAR_3);
  goto bail;
 }




 VAR_15 = (1UL << ((VAR_8 == 1) ? 32 : 16)) - 1;
 VAR_14 = VAR_11 & VAR_12 & VAR_15;
 if ((~VAR_12 & VAR_15) != 0) {
  VAR_16 = ((VAR_9 << 6) | VAR_10) << (VAR_0 + 1);
  FUNC_2(VAR_7, VAR_6, VAR_16);

  for (VAR_20 = 1; VAR_20 < VAR_3; ++VAR_20) {
   VAR_16 = FUNC_1(VAR_7, VAR_6);
   if (VAR_16 & VAR_2)
    break;
  }
  if (VAR_20 >= VAR_3) {
   FUNC_0(VAR_7, "No Rd ahb_rdy in %d tries\n",
        VAR_3);
   goto bail;
  }

  VAR_16 = FUNC_1(VAR_7, VAR_6);
  VAR_13 = (uint32_t)(VAR_16 >> VAR_1);
  VAR_14 |= (VAR_13 & ~VAR_12 & VAR_15);
 }


 if (VAR_12 & VAR_15) {
  VAR_16 = ((VAR_9 << 6) | VAR_10) << (VAR_0 + 1);
  VAR_16 |= ((uint64_t)VAR_14 << VAR_1);
  VAR_16 |= VAR_4;
  FUNC_2(VAR_7, VAR_6, VAR_16);

  for (VAR_20 = 1; VAR_20 < VAR_3; ++VAR_20) {
   VAR_16 = FUNC_1(VAR_7, VAR_6);
   if (VAR_16 & VAR_2)
    break;
  }
  if (VAR_20 >= VAR_3) {
   FUNC_0(VAR_7, "No Wr ahb_rdy in %d tries\n",
        VAR_3);
   goto bail;
  }
 }
 VAR_19 = VAR_14;
bail:
 FUNC_2(VAR_7, VAR_5, VAR_18);
 return VAR_19;
}
