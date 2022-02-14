
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uclogic_drvdata {int params; int desc_ptr; int inrange_timer; } ;
struct hid_device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct uclogic_drvdata* FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct hid_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct hid_device *VAR_0)
{
 struct uclogic_drvdata *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->inrange_timer);
 FUNC_2(VAR_0);
 FUNC_3(VAR_1->desc_ptr);
 FUNC_4(&VAR_1->params);
}
