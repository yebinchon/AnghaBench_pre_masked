
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct input_dev {int evbit; } ;
struct iforce {TYPE_1__* xport_ops; } ;
struct TYPE_2__ {int (* start_io ) (struct iforce*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iforce*,int ,char*) ;
 struct iforce* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct iforce*) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_2)
{
 struct iforce *VAR_3 = FUNC_1(VAR_2);

 VAR_3->xport_ops->start_io(VAR_3);

 if (FUNC_3(VAR_0, VAR_2->evbit)) {

  FUNC_0(VAR_3, VAR_1, "\004");
 }

 return 0;
}
