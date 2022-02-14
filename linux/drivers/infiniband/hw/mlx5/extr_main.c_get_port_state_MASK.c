
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_port_attr {int state; } ;
struct TYPE_2__ {int (* query_port ) (struct ib_device*,int ,struct ib_port_attr*) ;} ;
struct ib_device {TYPE_1__ ops; } ;
typedef enum ib_port_state { ____Placeholder_ib_port_state } ib_port_state ;
typedef int attr ;


 int FUNC_0 (struct ib_port_attr*,int ,int) ;
 int FUNC_1 (struct ib_device*,int ,struct ib_port_attr*) ;

__attribute__((used)) static int FUNC_2(struct ib_device *VAR_0,
     u8 VAR_1,
     enum ib_port_state *VAR_2)
{
 struct ib_port_attr VAR_3;
 int VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_4 = VAR_0->ops.query_port(VAR_0, VAR_1, &VAR_3);
 if (!VAR_4)
  *VAR_2 = VAR_3.state;
 return VAR_4;
}
