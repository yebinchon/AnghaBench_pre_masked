
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct n2rng {int work; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct n2rng* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct n2rng *VAR_3 = FUNC_1(VAR_2);

 VAR_3->flags |= VAR_1;

 FUNC_0(&VAR_3->work);

 FUNC_2(VAR_0);

 return 0;
}
