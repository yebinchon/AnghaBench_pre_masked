
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long ccctlr; } ;
struct etmv4_drvdata {unsigned long ccitmin; struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
       struct device_attribute *VAR_3,
       const char *VAR_4, size_t VAR_5)
{
 unsigned long VAR_6;
 struct etmv4_drvdata *VAR_7 = FUNC_0(VAR_2->parent);
 struct etmv4_config *VAR_8 = &VAR_7->config;

 if (FUNC_1(VAR_4, 16, &VAR_6))
  return -VAR_0;
 if (VAR_6 < VAR_7->ccitmin)
  return -VAR_0;

 VAR_8->ccctlr = VAR_6 & VAR_1;
 return VAR_5;
}
