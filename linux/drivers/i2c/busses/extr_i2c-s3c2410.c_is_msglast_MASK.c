
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s3c24xx_i2c {int msg_ptr; TYPE_1__* msg; } ;
struct TYPE_2__ {int flags; int len; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct s3c24xx_i2c *VAR_1)
{





 if (VAR_1->msg->flags & VAR_0 && VAR_1->msg->len == 1)
  return 0;

 return VAR_1->msg_ptr == VAR_1->msg->len-1;
}
