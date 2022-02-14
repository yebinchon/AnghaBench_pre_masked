
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ib_device {int name; } ;
struct ib_class_port_info {int dummy; } ;
struct class_port_info_context {int done; int sa_query; int port_num; struct ib_class_port_info* class_port_info; struct ib_device* device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct ib_device*,int ,int ,int ,int ,struct class_port_info_context*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct class_port_info_context*) ;
 struct class_port_info_context* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int ,int) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_5, u8 VAR_6,
           struct ib_class_port_info *VAR_7)
{
 struct class_port_info_context *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->device = VAR_5;
 VAR_8->class_port_info = VAR_7;
 VAR_8->port_num = VAR_6;
 FUNC_1(&VAR_8->done);

 VAR_9 = FUNC_0(&VAR_4, VAR_5, VAR_6,
          VAR_0,
          VAR_2, VAR_3,
          VAR_8, &VAR_8->sa_query);
 if (VAR_9 < 0) {
  FUNC_4("RDMA CM: %s port %u failed to send ClassPortInfo query, ret: %d\n",
         VAR_5->name, VAR_6, VAR_9);
  goto out;
 }

 FUNC_5(&VAR_8->done);

out:
 FUNC_2(VAR_8);
 return VAR_9;
}
