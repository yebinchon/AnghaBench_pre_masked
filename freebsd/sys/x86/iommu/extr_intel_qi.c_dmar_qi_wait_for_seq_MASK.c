
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmar_unit {int inv_seq_waiters; int lock; } ;
struct dmar_qi_genseq {int dummy; } ;


 int FUNC_0 (struct dmar_unit*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct dmar_unit*,struct dmar_qi_genseq const*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_4(struct dmar_unit *VAR_2, const struct dmar_qi_genseq *VAR_3,
    bool VAR_4)
{

 FUNC_0(VAR_2);
 VAR_2->inv_seq_waiters++;
 while (!FUNC_2(VAR_2, VAR_3)) {
  if (VAR_0 || VAR_4) {
   FUNC_1();
  } else {
   FUNC_3(&VAR_2->inv_seq_waiters, &VAR_2->lock, 0,
       "dmarse", VAR_1);
  }
 }
 VAR_2->inv_seq_waiters--;
}
