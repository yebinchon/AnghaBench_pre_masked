
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnode {int dummy; } ;
struct dquot {size_t dq_type; TYPE_1__* dq_ump; scalar_t__ dq_cnt; } ;
struct dqhash {int dummy; } ;
struct TYPE_2__ {struct vnode** um_quotas; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 struct dquot* FUNC_2 (struct dqhash*) ;
 struct dquot* FUNC_3 (struct dquot*,int ) ;
 int FUNC_4 (struct dquot*,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct dqhash* VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct vnode *VAR_4)
{
 struct dquot *VAR_5, *VAR_6;
 struct dqhash *VAR_7;
 int VAR_8;






 VAR_8 = 0;
 FUNC_0();
 for (VAR_7 = &VAR_3[VAR_2]; VAR_7 >= VAR_3; VAR_7--) {
  for (VAR_5 = FUNC_2(VAR_7); VAR_5; VAR_5 = VAR_6) {
   VAR_6 = FUNC_3(VAR_5, VAR_1);
   if (VAR_5->dq_ump->um_quotas[VAR_5->dq_type] != VAR_4)
    continue;
   if (VAR_5->dq_cnt)
    VAR_8 = VAR_0;
   else {
    FUNC_4(VAR_5, VAR_1);
    VAR_5->dq_ump = ((void*)0);
   }
  }
 }
 FUNC_1();
 return (VAR_8);
}
