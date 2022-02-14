
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usnic_ib_vf {TYPE_2__* pf; } ;
struct TYPE_3__ {int dev; } ;
struct TYPE_4__ {TYPE_1__ ib_dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,char*,int ) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, char *VAR_1, int VAR_2)
{
 struct usnic_ib_vf *VAR_3 = VAR_0;
 return FUNC_1(VAR_1, VAR_2, "PF: %s ", FUNC_0(&VAR_3->pf->ib_dev.dev));
}
