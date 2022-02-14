
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_i2c {int msg_idx; int msg_num; } ;



__attribute__((used)) static inline int FUNC_0(struct synquacer_i2c *VAR_0)
{
 return VAR_0->msg_idx >= (VAR_0->msg_num - 1);
}
