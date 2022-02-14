
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int iw_ifname; int node_type; } ;
struct qedr_dev {TYPE_1__* ndev; TYPE_2__ ibdev; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct qedr_dev *VAR_2)
{
 VAR_2->ibdev.node_type = VAR_0;

 FUNC_0(&VAR_2->ibdev, &VAR_1);

 FUNC_1(VAR_2->ibdev.iw_ifname,
        VAR_2->ndev->name, sizeof(VAR_2->ibdev.iw_ifname));

 return 0;
}
