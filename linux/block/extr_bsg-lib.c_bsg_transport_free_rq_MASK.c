
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct bsg_job {int request; scalar_t__ bidi_rq; int bidi_bio; } ;


 struct bsg_job* FUNC_0 (struct request*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct request *VAR_0)
{
 struct bsg_job *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->bidi_rq) {
  FUNC_2(VAR_1->bidi_bio);
  FUNC_1(VAR_1->bidi_rq);
 }

 FUNC_3(VAR_1->request);
}
