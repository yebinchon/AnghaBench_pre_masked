
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,char*,int ,int,int,int) ;
 int * VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_11, void *VAR_12)
{
 struct device *VAR_13 = (struct device *) VAR_12;
 u32 VAR_14 = FUNC_1(VAR_8);
 u32 VAR_15 = FUNC_1(VAR_9);

 FUNC_0(VAR_13, "illegal %s access from %s - addr:0x%08x offset:%d len:%d\n",
  (VAR_15 & VAR_5) ? ("write") : ("read"),
  VAR_10[(VAR_15 >> VAR_1) & VAR_0],
  VAR_14, (VAR_15 >> VAR_4) & VAR_3,
  VAR_15 & VAR_2);

 FUNC_2(VAR_6, VAR_9);

 return VAR_7;
}
