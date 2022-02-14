
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ib_class_port_info {int dummy; } ;
struct class_port_info_context {int done; int class_port_info; int port_num; TYPE_1__* device; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct ib_class_port_info*,int) ;
 int FUNC_3 (char*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(int VAR_0,
        struct ib_class_port_info *VAR_1,
        void *VAR_2)
{
 struct class_port_info_context *VAR_3 = VAR_2;

 FUNC_0(!VAR_2);

 if (VAR_0 || !VAR_1) {
  FUNC_3("RDMA CM: %s port %u failed query ClassPortInfo status: %d\n",
    VAR_3->device->name, VAR_3->port_num, VAR_0);
  goto out;
 }

 FUNC_2(VAR_3->class_port_info, VAR_1, sizeof(struct ib_class_port_info));

out:
 FUNC_1(&VAR_3->done);
}
