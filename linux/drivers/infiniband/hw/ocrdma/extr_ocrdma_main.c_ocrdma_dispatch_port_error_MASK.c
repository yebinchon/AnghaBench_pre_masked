
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_dev {int ibdev; } ;
struct TYPE_2__ {int port_num; } ;
struct ib_event {int * device; TYPE_1__ element; int event; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_event*) ;

__attribute__((used)) static int FUNC_1(struct ocrdma_dev *VAR_1)
{
 struct ib_event VAR_2;

 VAR_2.event = VAR_0;
 VAR_2.element.port_num = 1;
 VAR_2.device = &VAR_1->ibdev;
 FUNC_0(&VAR_2);
 return 0;
}
