
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct qib_devdata {TYPE_1__* cspec; } ;
struct TYPE_2__ {int sdepb_lock; } ;


 int VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;



 int FUNC_0 (struct qib_devdata*,int,int) ;
 int FUNC_1 (struct qib_devdata*,int ,int,int*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (struct qib_devdata*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct qib_devdata *VAR_14, int VAR_15, u32 VAR_16,
          u8 *VAR_17, int VAR_18, int VAR_19)
{
 u16 VAR_20;
 u64 VAR_21;
 u64 VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;
 int VAR_27;
 unsigned long VAR_28;


 switch (VAR_15) {
 case 130:
  VAR_22 = 1ULL << VAR_1;
  VAR_20 = VAR_12;
  break;

 case 129:
 case 128:

  VAR_22 = 1ULL << VAR_4;
  VAR_20 = VAR_13;
  break;

 default:
  return -1;
 }

 FUNC_3(&VAR_14->cspec->sdepb_lock, VAR_28);

 VAR_23 = FUNC_0(VAR_14, VAR_15, 1);
 if (VAR_23 < 0) {
  FUNC_4(&VAR_14->cspec->sdepb_lock, VAR_28);
  return -1;
 }
 VAR_26 = VAR_16 & 0x1FFF;
 for (VAR_24 = VAR_10; VAR_24; --VAR_24) {
  VAR_21 = FUNC_2(VAR_14, VAR_20);
  if (VAR_21 & VAR_9)
   break;
  FUNC_5(5);
 }

 VAR_25 = 0;
 if (VAR_24 > 0) {







  VAR_21 = VAR_22 | VAR_11 |
   (VAR_19 ? VAR_7 : VAR_8);
  VAR_24 = FUNC_1(VAR_14, VAR_20, VAR_21, &VAR_21);
  while (VAR_24 > 0 && VAR_25 < VAR_18) {
   if (!VAR_25) {

    int VAR_29 = (VAR_26 + VAR_25) >> 8;

    VAR_21 = VAR_22 | VAR_2 | VAR_29;
    VAR_24 = FUNC_1(VAR_14, VAR_20, VAR_21,
        &VAR_21);
    if (VAR_24 <= 0)
     break;
    VAR_29 = (VAR_26 + VAR_25) & 0xFF;
    VAR_21 = VAR_22 | VAR_3 | VAR_29;
    VAR_24 = FUNC_1(VAR_14, VAR_20, VAR_21,
       &VAR_21);
    if (VAR_24 <= 0)
     break;
   }

   if (VAR_19)
    VAR_21 = VAR_22 | VAR_6 | VAR_5;
   else
    VAR_21 = VAR_22 | VAR_6 | VAR_17[VAR_25];
   VAR_24 = FUNC_1(VAR_14, VAR_20, VAR_21, &VAR_21);
   if (VAR_24 <= 0)
    break;
   if (VAR_19)
    VAR_17[VAR_25] = VAR_21 & VAR_0;
   ++VAR_25;
  }

  VAR_21 = VAR_22 | VAR_11;
  VAR_24 = FUNC_1(VAR_14, VAR_20, VAR_21, &VAR_21);
 }

 VAR_27 = VAR_25;

 if (FUNC_0(VAR_14, VAR_15, -1) < 0)
  VAR_27 = -1;

 FUNC_4(&VAR_14->cspec->sdepb_lock, VAR_28);
 if (VAR_24 <= 0)
  VAR_27 = -1;
 return VAR_27;
}
