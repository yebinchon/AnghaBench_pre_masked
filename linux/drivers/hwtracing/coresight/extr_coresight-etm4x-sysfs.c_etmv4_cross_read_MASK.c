
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct etmv4_reg {scalar_t__ data; scalar_t__ addr; } ;
struct etmv4_drvdata {int cpu; scalar_t__ base; } ;
struct device {int dummy; } ;


 struct etmv4_drvdata* FUNC_0 (struct device const*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,struct etmv4_reg*,int) ;

__attribute__((used)) static u32 FUNC_2(const struct device *VAR_1, u32 VAR_2)
{
 struct etmv4_drvdata *VAR_3 = FUNC_0(VAR_1);
 struct etmv4_reg VAR_4;

 VAR_4.addr = VAR_3->base + VAR_2;




 FUNC_1(VAR_3->cpu, VAR_0, &VAR_4, 1);
 return VAR_4.data;
}
