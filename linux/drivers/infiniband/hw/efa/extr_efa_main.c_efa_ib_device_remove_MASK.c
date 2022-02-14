
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efa_dev {int ibdev; int edev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct efa_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static void FUNC_4(struct efa_dev *VAR_1)
{
 FUNC_0(&VAR_1->edev, VAR_0);
 FUNC_3(&VAR_1->ibdev, "Unregister ib device\n");
 FUNC_2(&VAR_1->ibdev);
 FUNC_1(VAR_1);
}
