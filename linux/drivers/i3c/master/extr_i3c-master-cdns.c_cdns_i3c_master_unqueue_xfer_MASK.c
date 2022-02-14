
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct cdns_i3c_xfer {int node; } ;
struct TYPE_2__ {int lock; struct cdns_i3c_xfer* cur; } ;
struct cdns_i3c_master {TYPE_1__ xferqueue; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct cdns_i3c_master *VAR_11,
      struct cdns_i3c_xfer *VAR_12)
{
 unsigned long VAR_13;

 FUNC_3(&VAR_11->xferqueue.lock, VAR_13);
 if (VAR_11->xferqueue.cur == VAR_12) {
  u32 VAR_14;

  FUNC_5(FUNC_1(VAR_11->regs + VAR_0) & ~VAR_1,
         VAR_11->regs + VAR_0);
  FUNC_2(VAR_11->regs + VAR_9, VAR_14,
       VAR_14 & VAR_10, 10,
       1000000);
  VAR_11->xferqueue.cur = ((void*)0);
  FUNC_5(VAR_5 | VAR_6 | VAR_2 |
         VAR_3,
         VAR_11->regs + VAR_4);
  FUNC_5(VAR_8, VAR_11->regs + VAR_7);
  FUNC_5(FUNC_1(VAR_11->regs + VAR_0) | VAR_1,
         VAR_11->regs + VAR_0);
 } else {
  FUNC_0(&VAR_12->node);
 }
 FUNC_4(&VAR_11->xferqueue.lock, VAR_13);
}
