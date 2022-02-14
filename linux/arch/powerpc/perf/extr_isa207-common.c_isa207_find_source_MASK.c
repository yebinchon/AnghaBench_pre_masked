
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static inline u64 FUNC_3(u64 VAR_13, u32 VAR_14)
{
 u64 VAR_15 = VAR_7;

 switch(VAR_13) {
 case 0:

  break;
 case 1:
  VAR_15 = FUNC_1(VAR_6, VAR_2);
  break;
 case 2:
  VAR_15 = FUNC_1(VAR_6, VAR_3);
  break;
 case 3:
  VAR_15 = FUNC_1(VAR_6, VAR_4);
  break;
 case 4:
  if (VAR_14 <= 1)
   VAR_15 = FUNC_1(VAR_6, VAR_5);
  else if (VAR_14 > 1 && VAR_14 <= 2)
   VAR_15 = FUNC_1(VAR_6, VAR_10);
  else
   VAR_15 = FUNC_1(VAR_6, VAR_11);
  VAR_15 |= FUNC_0(VAR_12, VAR_0);
  break;
 case 5:
  VAR_15 = FUNC_1(VAR_6, VAR_8);
  if ((VAR_14 == 0) || (VAR_14 == 2) || (VAR_14 == 4))
   VAR_15 |= FUNC_0(VAR_12, VAR_0);
  else if ((VAR_14 == 1) || (VAR_14 == 3) || (VAR_14 == 5))
   VAR_15 |= FUNC_0(VAR_12, VAR_1);
  break;
 case 6:
  VAR_15 = FUNC_1(VAR_6, VAR_9);
  if ((VAR_14 == 0) || (VAR_14 == 2))
   VAR_15 |= FUNC_0(VAR_12, VAR_0);
  else if ((VAR_14 == 1) || (VAR_14 == 3))
   VAR_15 |= FUNC_0(VAR_12, VAR_1);
  break;
 case 7:
  VAR_15 = FUNC_2(VAR_6, VAR_2);
  break;
 }

 return VAR_15;
}
