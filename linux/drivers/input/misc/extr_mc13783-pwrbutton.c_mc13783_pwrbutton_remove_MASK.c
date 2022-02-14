
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mc13xxx_buttons_platform_data {int b3on_flags; int b2on_flags; int b1on_flags; } ;
struct mc13783_pwrb {int pwr; int mc13783; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mc13xxx_buttons_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mc13783_pwrb*) ;
 int FUNC_3 (int ,int ,struct mc13783_pwrb*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct mc13783_pwrb* FUNC_6 (struct platform_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_4)
{
 struct mc13783_pwrb *VAR_5 = FUNC_6(VAR_4);
 const struct mc13xxx_buttons_platform_data *VAR_6;

 VAR_6 = FUNC_0(&VAR_4->dev);

 FUNC_4(VAR_5->mc13783);

 if (VAR_6->b3on_flags & VAR_0)
  FUNC_3(VAR_5->mc13783, VAR_3, VAR_5);
 if (VAR_6->b2on_flags & VAR_0)
  FUNC_3(VAR_5->mc13783, VAR_2, VAR_5);
 if (VAR_6->b1on_flags & VAR_0)
  FUNC_3(VAR_5->mc13783, VAR_1, VAR_5);

 FUNC_5(VAR_5->mc13783);

 FUNC_1(VAR_5->pwr);
 FUNC_2(VAR_5);

 return 0;
}
