
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum hidma_cap { ____Placeholder_hidma_cap } hidma_cap ;


 scalar_t__ FUNC_0 (struct device*) ;

__attribute__((used)) static bool FUNC_1(struct device *VAR_0, enum hidma_cap VAR_1)
{
 enum hidma_cap VAR_2;

 VAR_2 = (enum hidma_cap) FUNC_0(VAR_0);
 return VAR_2 ? ((VAR_2 & VAR_1) > 0) : 0;
}
