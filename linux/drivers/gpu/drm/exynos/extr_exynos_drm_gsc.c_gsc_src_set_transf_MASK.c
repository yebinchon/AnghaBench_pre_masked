
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gsc_context {int rotation; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;




 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct gsc_context *VAR_10, unsigned int VAR_11)
{
 unsigned int VAR_12 = VAR_11 & VAR_2;
 u32 VAR_13;

 VAR_13 = FUNC_0(VAR_3);
 VAR_13 &= ~VAR_7;

 switch (VAR_12) {
 case 131:
  if (VAR_11 & VAR_0)
   VAR_13 |= VAR_8;
  if (VAR_11 & VAR_1)
   VAR_13 |= VAR_9;
  break;
 case 128:
  VAR_13 |= VAR_6;
  if (VAR_11 & VAR_0)
   VAR_13 |= VAR_8;
  if (VAR_11 & VAR_1)
   VAR_13 |= VAR_9;
  break;
 case 130:
  VAR_13 |= VAR_4;
  if (VAR_11 & VAR_0)
   VAR_13 &= ~VAR_8;
  if (VAR_11 & VAR_1)
   VAR_13 &= ~VAR_9;
  break;
 case 129:
  VAR_13 |= VAR_5;
  if (VAR_11 & VAR_0)
   VAR_13 &= ~VAR_8;
  if (VAR_11 & VAR_1)
   VAR_13 &= ~VAR_9;
  break;
 }

 FUNC_1(VAR_13, VAR_3);

 VAR_10->rotation = (VAR_13 & VAR_6) ? 1 : 0;
}
