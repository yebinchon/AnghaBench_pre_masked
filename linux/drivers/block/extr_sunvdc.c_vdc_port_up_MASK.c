
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_completion {int err; int com; int waiting_for; } ;
struct TYPE_2__ {struct vio_completion* cmp; } ;
struct vdc_port {TYPE_1__ vio; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct vdc_port *VAR_1)
{
 struct vio_completion VAR_2;

 FUNC_0(&VAR_2.com);
 VAR_2.err = 0;
 VAR_2.waiting_for = VAR_0;
 VAR_1->vio.cmp = &VAR_2;

 FUNC_1(&VAR_1->vio);
 FUNC_2(&VAR_2.com);
 return VAR_2.err;
}
