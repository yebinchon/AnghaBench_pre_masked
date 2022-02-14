
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scaler_context {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct scaler_context *VAR_11,
 unsigned int VAR_12)
{
 u32 VAR_13 = 0;

 if (VAR_12 & VAR_4)
  VAR_13 |= FUNC_0(VAR_10);
 else if (VAR_12 & VAR_2)
  VAR_13 |= FUNC_0(VAR_8);
 else if (VAR_12 & VAR_3)
  VAR_13 |= FUNC_0(VAR_9);
 if (VAR_12 & VAR_0)
  VAR_13 |= VAR_6;
 if (VAR_12 & VAR_1)
  VAR_13 |= VAR_7;
 FUNC_1(VAR_13, VAR_5);
}
