
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static u64 FUNC_3(void)
{
 u64 VAR_15 = 0;

 if (FUNC_0(VAR_12))
  FUNC_2(VAR_6, VAR_15);







 VAR_15 |= VAR_1;
 if (VAR_14 != VAR_7)
  VAR_15 |= VAR_3;

 if (!FUNC_1(VAR_8))
  VAR_15 |= VAR_2;
 if (!FUNC_1(VAR_10))
  VAR_15 |= VAR_4;
 if (!FUNC_1(VAR_9))
  VAR_15 |= VAR_0;
 if (FUNC_1(VAR_11) && FUNC_0(VAR_13) &&
     (VAR_15 & VAR_5))
  VAR_15 &= ~VAR_0;

 return VAR_15;
}
