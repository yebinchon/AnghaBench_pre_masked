
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cec_devnode {int minor; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cec_devnode*) ;
 struct cec_devnode* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2)
{
 struct cec_devnode *VAR_3 = FUNC_5(VAR_2);

 FUNC_2(&VAR_0);

 FUNC_1(VAR_3->minor, VAR_1);
 FUNC_3(&VAR_0);

 FUNC_0(FUNC_4(VAR_3));
}
