
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int dummy; } ;
struct dquot {int dq_cnt; int dq_flags; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 struct dquot* VAR_1 ;
 int FUNC_3 (int *,struct dquot*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct vnode*,struct dquot*) ;

void
FUNC_5(struct vnode *VAR_4, struct dquot *VAR_5)
{

 if (VAR_5 == VAR_1)
  return;
 FUNC_0();
 FUNC_2(VAR_5->dq_cnt > 0, ("Lost dq %p reference 1", VAR_5));
 if (VAR_5->dq_cnt > 1) {
  VAR_5->dq_cnt--;
  FUNC_1();
  return;
 }
 FUNC_1();
sync:
 (void) FUNC_4(VAR_4, VAR_5);

 FUNC_0();
 FUNC_2(VAR_5->dq_cnt > 0, ("Lost dq %p reference 2", VAR_5));
 if (--VAR_5->dq_cnt > 0)
 {
  FUNC_1();
  return;
 }







 if ((VAR_5->dq_flags & VAR_0) != 0) {
  VAR_5->dq_cnt++;
  FUNC_1();
  goto sync;
 }
 FUNC_3(&VAR_3, VAR_5, VAR_2);
 FUNC_1();
}
