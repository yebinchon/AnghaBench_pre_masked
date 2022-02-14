
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fimc_context {int dev; } ;


 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct fimc_context*,int ) ;
 int FUNC_2 (struct fimc_context*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct fimc_context *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10 = VAR_9 & VAR_2;
 u32 VAR_11;

 FUNC_0(VAR_8->dev, "rotation[0x%x]\n", VAR_9);

 VAR_11 = FUNC_1(VAR_8, VAR_3);
 VAR_11 &= ~VAR_4;
 VAR_11 &= ~VAR_7;

 switch (VAR_10) {
 case 131:
  if (VAR_9 & VAR_0)
   VAR_11 |= VAR_5;
  if (VAR_9 & VAR_1)
   VAR_11 |= VAR_6;
  break;
 case 128:
  VAR_11 |= VAR_7;
  if (VAR_9 & VAR_0)
   VAR_11 |= VAR_5;
  if (VAR_9 & VAR_1)
   VAR_11 |= VAR_6;
  break;
 case 130:
  VAR_11 |= (VAR_5 |
   VAR_6);
  if (VAR_9 & VAR_0)
   VAR_11 &= ~VAR_5;
  if (VAR_9 & VAR_1)
   VAR_11 &= ~VAR_6;
  break;
 case 129:
  VAR_11 |= (VAR_7 |
   VAR_5 |
   VAR_6);
  if (VAR_9 & VAR_0)
   VAR_11 &= ~VAR_5;
  if (VAR_9 & VAR_1)
   VAR_11 &= ~VAR_6;
  break;
 }

 FUNC_2(VAR_8, VAR_11, VAR_3);
}
