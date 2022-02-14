
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chcr_dev {scalar_t__ state; int detach_comp; int detach_work; int inflight; } ;
struct uld_ctx {struct chcr_dev dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct uld_ctx*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct uld_ctx *VAR_2)
{
 struct chcr_dev *VAR_3 = &VAR_2->dev;

 if (VAR_3->state == VAR_0) {
  FUNC_2("Detached Event received for already detach device\n");
  return;
 }
 VAR_3->state = VAR_0;
 if (FUNC_0(&VAR_3->inflight) != 0) {
  FUNC_3(&VAR_3->detach_work, VAR_1);
  FUNC_4(&VAR_3->detach_comp);
 }


 FUNC_1(VAR_2);
}
