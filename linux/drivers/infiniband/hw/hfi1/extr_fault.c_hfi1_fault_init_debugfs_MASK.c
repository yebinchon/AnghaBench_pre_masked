
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int interval; int stacktrace_depth; scalar_t__ verbose; int * dname; int require_end; } ;
struct hfi1_ibdev {int enable; int opcode; int suppress_err; int direction; struct hfi1_ibdev* fault; int fault_skip_usec; int fault_skip; struct dentry* dir; TYPE_1__ attr; int opcodes; scalar_t__ skip; struct dentry* hfi1_ibdev_dbg; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (char*,int,struct dentry*,int*) ;
 int FUNC_3 (char*,int,struct dentry*,struct hfi1_ibdev*,int *) ;
 int FUNC_4 (char*,int,struct dentry*,int *) ;
 int FUNC_5 (char*,int,struct dentry*,int *) ;
 struct dentry* FUNC_6 (char*,struct dentry*,TYPE_1__*) ;
 int FUNC_7 (struct hfi1_ibdev*) ;
 struct hfi1_ibdev* FUNC_8 (int,int ) ;

int FUNC_9(struct hfi1_ibdev *VAR_8)
{
 struct dentry *VAR_9 = VAR_8->hfi1_ibdev_dbg;
 struct dentry *VAR_10;

 VAR_8->fault = FUNC_8(sizeof(*VAR_8->fault), VAR_3);
 if (!VAR_8->fault)
  return -VAR_2;

 VAR_8->fault->attr.interval = 1;
 VAR_8->fault->attr.require_end = VAR_5;
 VAR_8->fault->attr.stacktrace_depth = 32;
 VAR_8->fault->attr.dname = ((void*)0);
 VAR_8->fault->attr.verbose = 0;
 VAR_8->fault->enable = 0;
 VAR_8->fault->opcode = 0;
 VAR_8->fault->fault_skip = 0;
 VAR_8->fault->skip = 0;
 VAR_8->fault->direction = VAR_4;
 VAR_8->fault->suppress_err = 0;
 FUNC_1(VAR_8->fault->opcodes,
      sizeof(VAR_8->fault->opcodes) * VAR_0);

 VAR_10 =
  FUNC_6("fault", VAR_9, &VAR_8->fault->attr);
 if (FUNC_0(VAR_10)) {
  FUNC_7(VAR_8->fault);
  VAR_8->fault = ((void*)0);
  return -VAR_1;
 }
 VAR_8->fault->dir = VAR_10;

 FUNC_3("fault_stats", 0444, VAR_10, VAR_8,
       &VAR_7);
 FUNC_2("enable", 0600, VAR_10, &VAR_8->fault->enable);
 FUNC_2("suppress_err", 0600, VAR_10,
       &VAR_8->fault->suppress_err);
 FUNC_2("opcode_mode", 0600, VAR_10,
       &VAR_8->fault->opcode);
 FUNC_3("opcodes", 0600, VAR_10, VAR_8->fault,
       &VAR_6);
 FUNC_4("skip_pkts", 0600, VAR_10,
      &VAR_8->fault->fault_skip);
 FUNC_4("skip_usec", 0600, VAR_10,
      &VAR_8->fault->fault_skip_usec);
 FUNC_5("direction", 0600, VAR_10, &VAR_8->fault->direction);

 return 0;
}
