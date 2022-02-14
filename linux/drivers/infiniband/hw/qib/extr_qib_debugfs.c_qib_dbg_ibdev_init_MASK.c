
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_ibdev {struct dentry* qib_ibdev_dbg; } ;
struct dentry {int dummy; } ;
typedef int name ;
struct TYPE_2__ {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct qib_ibdev*) ;
 struct dentry* FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,struct dentry*,struct qib_ibdev*,int *) ;
 int VAR_3 ;
 int FUNC_3 (char*,int,char*,int) ;

void FUNC_4(struct qib_ibdev *VAR_4)
{
 struct dentry *VAR_5;
 char VAR_6[10];

 FUNC_3(VAR_6, sizeof(VAR_6), "qib%d", FUNC_0(VAR_4)->unit);
 VAR_5 = FUNC_1(VAR_6, VAR_3);
 VAR_4->qib_ibdev_dbg = VAR_5;

 FUNC_2("opcode_stats", 0400, VAR_5, VAR_4,
       &VAR_1);
 FUNC_2("ctx_stats", 0400, VAR_5, VAR_4, &VAR_0);
 FUNC_2("qp_stats", 0400, VAR_5, VAR_4, &VAR_2);
}
