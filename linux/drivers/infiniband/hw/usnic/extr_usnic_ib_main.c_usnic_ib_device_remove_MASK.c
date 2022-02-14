
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct usnic_ib_dev {TYPE_1__ ib_dev; int ufdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usnic_ib_dev*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct usnic_ib_dev *VAR_0)
{
 FUNC_5("Unregistering %s\n", FUNC_0(&VAR_0->ib_dev.dev));
 FUNC_4(VAR_0);
 FUNC_3(VAR_0->ufdev);
 FUNC_2(&VAR_0->ib_dev);
 FUNC_1(&VAR_0->ib_dev);
}
