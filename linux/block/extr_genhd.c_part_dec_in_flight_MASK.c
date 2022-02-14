
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct hd_struct {scalar_t__ partno; } ;
struct TYPE_2__ {struct hd_struct part0; } ;


 int * VAR_0 ;
 int FUNC_0 (struct hd_struct*,int ) ;
 TYPE_1__* FUNC_1 (struct hd_struct*) ;
 scalar_t__ FUNC_2 (struct request_queue*) ;

void FUNC_3(struct request_queue *VAR_1, struct hd_struct *VAR_2, int VAR_3)
{
 if (FUNC_2(VAR_1))
  return;

 FUNC_0(VAR_2, VAR_0[VAR_3]);
 if (VAR_2->partno)
  FUNC_0(&FUNC_1(VAR_2)->part0, VAR_0[VAR_3]);
}
