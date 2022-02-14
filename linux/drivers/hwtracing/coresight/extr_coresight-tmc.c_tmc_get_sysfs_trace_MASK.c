
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmc_drvdata {int config_type; } ;
typedef int ssize_t ;
typedef int loff_t ;


 int VAR_0 ;



 int FUNC_0 (struct tmc_drvdata*,int ,size_t,char**) ;
 int FUNC_1 (struct tmc_drvdata*,int ,size_t,char**) ;

__attribute__((used)) static inline ssize_t FUNC_2(struct tmc_drvdata *VAR_1,
       loff_t VAR_2, size_t VAR_3, char **VAR_4)
{
 switch (VAR_1->config_type) {
 case 130:
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 case 128:
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 }

 return -VAR_0;
}
