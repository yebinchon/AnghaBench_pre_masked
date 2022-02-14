
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct qib_devdata {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct qib_devdata*) ;
 int FUNC_1 (struct qib_devdata*,int ) ;
 int FUNC_2 (struct qib_devdata*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qib_devdata *VAR_7, int VAR_8,
         int VAR_9, u8 *VAR_10, u8 *VAR_11)
{
 u64 VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_12 = VAR_4 | (VAR_8 << VAR_0) |
  (VAR_2 << VAR_1);
 VAR_14 = FUNC_0(VAR_7);
 if (VAR_14 < 0)
  goto bail;
 for (VAR_15 = 0; VAR_15 < VAR_9; ++VAR_15) {
  VAR_13 = VAR_12;
  if (VAR_11) {
   VAR_11[VAR_15 >> 3] &= ~(1 << (VAR_15 & 7));
   VAR_11[VAR_15 >> 3] |= (VAR_14 << (VAR_15 & 7));
  }
  if (VAR_10) {
   int VAR_16 = VAR_10[VAR_15 >> 3] >> (VAR_15 & 7);

   VAR_13 |= ((VAR_16 & 1) << VAR_3);
  }
  FUNC_2(VAR_7, VAR_5, VAR_13);
  FUNC_1(VAR_7, VAR_6);
  VAR_14 = FUNC_0(VAR_7);
  if (VAR_14 < 0)
   break;
 }

 VAR_13 = VAR_4 | (VAR_8 << VAR_0);
 FUNC_2(VAR_7, VAR_5, VAR_13);
 FUNC_1(VAR_7, VAR_6);
 VAR_14 = FUNC_0(VAR_7);

 if (VAR_14 >= 0)
  VAR_14 = VAR_15;
bail:
 return VAR_14;
}
