
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct dw_i3c_xfer {int node; } ;
struct TYPE_2__ {struct dw_i3c_xfer* cur; } ;
struct dw_i3c_master {scalar_t__ regs; TYPE_1__ xferqueue; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct dw_i3c_master *VAR_5,
           struct dw_i3c_xfer *VAR_6)
{
 if (VAR_5->xferqueue.cur == VAR_6) {
  u32 VAR_7;

  VAR_5->xferqueue.cur = ((void*)0);

  FUNC_2(VAR_3 | VAR_4 |
         VAR_2 | VAR_1,
         VAR_5->regs + VAR_0);

  FUNC_1(VAR_5->regs + VAR_0, VAR_7,
       !VAR_7, 10, 1000000);
 } else {
  FUNC_0(&VAR_6->node);
 }
}
