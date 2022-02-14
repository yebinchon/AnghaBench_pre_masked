
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host1x {TYPE_1__* debug_op; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {int (* debug_init ) (struct dentry*) ;} ;


 int FUNC_0 (struct dentry*) ;

__attribute__((used)) static inline void FUNC_1(struct host1x *VAR_0, struct dentry *VAR_1)
{
 if (VAR_0->debug_op && VAR_0->debug_op->debug_init)
  VAR_0->debug_op->debug_init(VAR_1);
}
