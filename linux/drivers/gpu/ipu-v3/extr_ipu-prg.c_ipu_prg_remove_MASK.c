
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ipu_prg {int list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ipu_prg* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct ipu_prg *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_0);
 FUNC_0(&VAR_2->list);
 FUNC_2(&VAR_0);

 return 0;
}
