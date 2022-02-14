
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct drxd_state {scalar_t__ m_FeAgRegAgPwd; } ;
struct SCfgAgc {scalar_t__ outputLevel; scalar_t__ ctrlMode; int settleLevel; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct drxd_state*,int ,scalar_t__*,int) ;
 int FUNC_1 (struct drxd_state*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct drxd_state *VAR_20, struct SCfgAgc *VAR_21)
{
 int VAR_22 = 0;

 if (VAR_21->outputLevel > VAR_2)
  return -1;

 if (VAR_21->ctrlMode == VAR_1) {
  do {
   u16 VAR_23 = 0;
   u16 VAR_24 = (VAR_21->outputLevel);

   if (VAR_24 == VAR_2)
    VAR_24++;

   VAR_22 = FUNC_1(VAR_20, VAR_17, VAR_24, 0x0000);
   if (VAR_22 < 0)
    break;




   VAR_20->m_FeAgRegAgPwd &= ~(VAR_15);
   VAR_20->m_FeAgRegAgPwd |=
       VAR_13;
   VAR_22 = FUNC_1(VAR_20, VAR_16, VAR_20->m_FeAgRegAgPwd, 0x0000);
   if (VAR_22 < 0)
    break;

   VAR_22 = FUNC_0(VAR_20, VAR_12, &VAR_23, 0x0000);
   if (VAR_22 < 0)
    break;
   VAR_23 &= (~(VAR_8 |
     VAR_11));
   VAR_23 |= (VAR_7 |
          VAR_10);
   VAR_22 = FUNC_1(VAR_20, VAR_12, VAR_23, 0x0000);
   if (VAR_22 < 0)
    break;


   {
    u16 VAR_25 = 0;
    VAR_22 = FUNC_0(VAR_20, VAR_6, &VAR_25, 0x0000);
    if (VAR_22 < 0)
     break;
    VAR_25 &=
        ~(VAR_5);
    VAR_25 |=
        VAR_4;
    VAR_22 = FUNC_1(VAR_20, VAR_6, VAR_25, 0x0000);
    if (VAR_22 < 0)
     break;
   }

  } while (0);
 } else if (VAR_21->ctrlMode == VAR_0) {
  u16 VAR_26 = 0;

  do {
   u16 VAR_27;


   (VAR_20->m_FeAgRegAgPwd) &=
       ~(VAR_15);
   (VAR_20->m_FeAgRegAgPwd) |=
       VAR_13;
   VAR_22 = FUNC_1(VAR_20, VAR_16, (VAR_20->m_FeAgRegAgPwd), 0x0000);
   if (VAR_22 < 0)
    break;

   VAR_22 = FUNC_0(VAR_20, VAR_12, &VAR_26, 0x0000);
   if (VAR_22 < 0)
    break;
   VAR_26 &= (~(VAR_8 |
     VAR_11));
   VAR_26 |= (VAR_7 |
          VAR_9);
   VAR_22 = FUNC_1(VAR_20, VAR_12, VAR_26, 0x0000);
   if (VAR_22 < 0)
    break;

   VAR_27 = (((VAR_21->settleLevel) >> 4) &
     VAR_19);
   VAR_22 = FUNC_1(VAR_20, VAR_18, VAR_27, 0x0000);
   if (VAR_22 < 0)
    break;






   {
    u16 VAR_28 = 0;
    VAR_22 = FUNC_0(VAR_20, VAR_6, &VAR_28, 0x0000);
    if (VAR_22 < 0)
     break;
    VAR_28 &=
        ~(VAR_5);
    VAR_28 |=
        VAR_4;
    VAR_22 = FUNC_1(VAR_20, VAR_6, VAR_28, 0x0000);
    if (VAR_22 < 0)
     break;
   }

  } while (0);
 } else {
  u16 VAR_29 = 0;

  do {


   (VAR_20->m_FeAgRegAgPwd) &=
       ~(VAR_15);
   (VAR_20->m_FeAgRegAgPwd) |=
       VAR_14;
   VAR_22 = FUNC_1(VAR_20, VAR_16, (VAR_20->m_FeAgRegAgPwd), 0x0000);
   if (VAR_22 < 0)
    break;

   VAR_22 = FUNC_0(VAR_20, VAR_12, &VAR_29, 0x0000);
   if (VAR_22 < 0)
    break;
   VAR_29 &= (~(VAR_8 |
     VAR_11));
   VAR_29 |= (VAR_7 |
          VAR_10);
   VAR_22 = FUNC_1(VAR_20, VAR_12, VAR_29, 0x0000);
   if (VAR_22 < 0)
    break;


   {
    u16 VAR_30 = 0;
    VAR_22 = FUNC_0(VAR_20, VAR_6, &VAR_30, 0x0000);
    if (VAR_22 < 0)
     break;
    VAR_30 &=
        ~(VAR_5);
    VAR_30 |=
        VAR_3;
    VAR_22 = FUNC_1(VAR_20, VAR_6, VAR_30, 0x0000);
    if (VAR_22 < 0)
     break;
   }
  } while (0);
 }
 return VAR_22;
}
