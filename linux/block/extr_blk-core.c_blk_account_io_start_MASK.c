
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {struct hd_struct* part; int q; TYPE_1__* rq_disk; } ;
struct hd_struct {int dummy; } ;
struct TYPE_2__ {struct hd_struct part0; } ;


 int FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 struct hd_struct* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (struct hd_struct*) ;
 int FUNC_4 (struct hd_struct*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_5 (int ,struct hd_struct*,int) ;
 int FUNC_6 (struct hd_struct*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct request*) ;
 int FUNC_10 (struct hd_struct*,int ) ;

void FUNC_11(struct request *VAR_2, bool VAR_3)
{
 struct hd_struct *VAR_4;
 int VAR_5 = FUNC_9(VAR_2);

 if (!FUNC_0(VAR_2))
  return;

 FUNC_7();

 if (!VAR_3) {
  VAR_4 = VAR_2->part;
  FUNC_6(VAR_4, VAR_1[VAR_5]);
 } else {
  VAR_4 = FUNC_2(VAR_2->rq_disk, FUNC_1(VAR_2));
  if (!FUNC_4(VAR_4)) {
   VAR_4 = &VAR_2->rq_disk->part0;
   FUNC_3(VAR_4);
  }
  FUNC_5(VAR_2->q, VAR_4, VAR_5);
  VAR_2->part = VAR_4;
 }

 FUNC_10(VAR_4, VAR_0);

 FUNC_8();
}
