
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct funnel_drvdata {int priority; scalar_t__ base; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct funnel_drvdata *VAR_5, int VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;

 FUNC_1(VAR_5->base);

 VAR_7 = FUNC_3(VAR_5->base + VAR_1);

 if (!(VAR_7 & VAR_0)) {
  VAR_8 = FUNC_2(VAR_5->base);
  if (VAR_8)
   goto done;
 }

 VAR_7 &= ~VAR_3;
 VAR_7 |= VAR_2;
 VAR_7 |= (1 << VAR_6);
 FUNC_4(VAR_7, VAR_5->base + VAR_1);
 FUNC_4(VAR_5->priority, VAR_5->base + VAR_4);
done:
 FUNC_0(VAR_5->base);
 return VAR_8;
}
