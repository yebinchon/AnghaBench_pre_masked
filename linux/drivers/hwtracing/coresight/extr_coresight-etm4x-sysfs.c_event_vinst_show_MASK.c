
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etmv4_config {unsigned long vinst_ctrl; } ;
struct etmv4_drvdata {struct etmv4_config config; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 struct etmv4_drvdata* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,char*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
    struct device_attribute *VAR_3,
    char *VAR_4)
{
 unsigned long VAR_5;
 struct etmv4_drvdata *VAR_6 = FUNC_0(VAR_2->parent);
 struct etmv4_config *VAR_7 = &VAR_6->config;

 VAR_5 = VAR_7->vinst_ctrl & VAR_0;
 return FUNC_1(VAR_4, VAR_1, "%#lx\n", VAR_5);
}
