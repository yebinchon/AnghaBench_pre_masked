
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct request {int rq_flags; int internal_tag; int (* end_io ) (struct request*,int ) ;int q; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request*) ;
 scalar_t__ FUNC_2 (struct request*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct request*,int ) ;
 int FUNC_5 (struct request*,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct request*) ;
 int FUNC_8 (struct request*,int ) ;

inline void FUNC_9(struct request *VAR_1, blk_status_t VAR_2)
{
 u64 VAR_3 = 0;

 if (FUNC_2(VAR_1))
  VAR_3 = FUNC_6();

 if (VAR_1->rq_flags & VAR_0) {
  FUNC_3(VAR_1->q);
  FUNC_5(VAR_1, VAR_3);
 }

 if (VAR_1->internal_tag != -1)
  FUNC_4(VAR_1, VAR_3);

 FUNC_0(VAR_1, VAR_3);

 if (VAR_1->end_io) {
  FUNC_7(VAR_1->q, VAR_1);
  VAR_1->end_io(VAR_1, VAR_2);
 } else {
  FUNC_1(VAR_1);
 }
}
