
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_dclk {int dummy; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct s3c24xx_dclk*,int ,int ) ;
 struct s3c24xx_dclk* FUNC_1 (struct notifier_block*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_4,
          unsigned long VAR_5, void *VAR_6)
{
 struct s3c24xx_dclk *VAR_7 = FUNC_1(VAR_4);

 if (VAR_5 == VAR_3) {
  FUNC_0(VAR_7,
   VAR_1, VAR_0);
 }

 return VAR_2;
}
