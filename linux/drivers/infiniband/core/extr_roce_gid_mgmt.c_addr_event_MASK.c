
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct net_device* ndev; } ;
struct update_gid_event_work {int gid_op; int work; TYPE_1__ gid_attr; int gid; } ;
struct sockaddr {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ type; } ;
typedef enum gid_op_type { ____Placeholder_gid_op_type } gid_op_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;


 int VAR_4 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_5 ;
 struct update_gid_event_work* FUNC_2 (int,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sockaddr*,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_7, unsigned long VAR_8,
        struct sockaddr *VAR_9, struct net_device *VAR_10)
{
 struct update_gid_event_work *VAR_11;
 enum gid_op_type VAR_12;

 if (VAR_10->type != VAR_0)
  return VAR_4;

 switch (VAR_8) {
 case 128:
  VAR_12 = VAR_2;
  break;

 case 129:
  VAR_12 = VAR_3;
  break;

 default:
  return VAR_4;
 }

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return VAR_4;

 FUNC_0(&VAR_11->work, VAR_6);

 FUNC_5(VAR_9, &VAR_11->gid);
 VAR_11->gid_op = VAR_12;

 FUNC_3(&VAR_11->gid_attr, 0, sizeof(VAR_11->gid_attr));
 FUNC_1(VAR_10);
 VAR_11->gid_attr.ndev = VAR_10;

 FUNC_4(VAR_5, &VAR_11->work);

 return VAR_4;
}
