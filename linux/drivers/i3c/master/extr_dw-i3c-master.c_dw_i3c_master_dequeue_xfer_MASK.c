
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dw_i3c_xfer {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct dw_i3c_master {TYPE_1__ xferqueue; } ;


 int FUNC_0 (struct dw_i3c_master*,struct dw_i3c_xfer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct dw_i3c_master *VAR_0,
           struct dw_i3c_xfer *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->xferqueue.lock, VAR_2);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->xferqueue.lock, VAR_2);
}
