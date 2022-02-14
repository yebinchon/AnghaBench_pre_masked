
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hd_struct {scalar_t__ partno; int stamp; } ;
struct TYPE_2__ {struct hd_struct part0; } ;


 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct hd_struct*,int ,int) ;
 unsigned long FUNC_2 (int *,unsigned long,unsigned long) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (struct hd_struct*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct hd_struct *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;
again:
 VAR_3 = FUNC_0(VAR_1->stamp);
 if (FUNC_5(VAR_3 != VAR_2)) {
  if (FUNC_3(FUNC_2(&VAR_1->stamp, VAR_3, VAR_2) == VAR_3)) {
   FUNC_1(VAR_1, VAR_0, 1);
  }
 }
 if (VAR_1->partno) {
  VAR_1 = &FUNC_4(VAR_1)->part0;
  goto again;
 }
}
