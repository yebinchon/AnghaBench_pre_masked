
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vmctx {int dummy; } ;
struct TYPE_4__ {int port; int bytes; int in; int eax; } ;
struct TYPE_5__ {TYPE_1__ inout; } ;
struct vm_exit {TYPE_2__ u; } ;
struct TYPE_6__ {int rip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vmctx*,int,struct vm_exit*,int ) ;
 int FUNC_1 (int ,char*,char*,char,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_2 (struct vmctx*,struct vm_exit*,int*,int ) ;

__attribute__((used)) static int
FUNC_3(struct vmctx *VAR_6, struct vm_exit *VAR_7, int *VAR_8)
{
 int VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 int VAR_14;

 VAR_14 = *VAR_8;

 VAR_11 = VAR_7->u.inout.port;
 VAR_10 = VAR_7->u.inout.bytes;
 VAR_12 = VAR_7->u.inout.in;
 VAR_13 = !VAR_12;


        if (VAR_13 && VAR_11 == VAR_0) {
                VAR_9 = FUNC_2(VAR_6, VAR_7, VAR_8, VAR_7->u.inout.eax);
  return (VAR_9);
 }

 VAR_9 = FUNC_0(VAR_6, VAR_14, VAR_7, VAR_4);
 if (VAR_9) {
  FUNC_1(VAR_3, "Unhandled %s%c 0x%04x at 0x%x\n",
      VAR_12 ? "in" : "out",
      VAR_10 == 1 ? 'b' : (VAR_10 == 2 ? 'w' : 'l'),
      VAR_11, VAR_5->rip);
  return (VAR_1);
 } else {
  return (VAR_2);
 }
}
