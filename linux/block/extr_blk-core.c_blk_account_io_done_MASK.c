
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct request {int rq_flags; int q; scalar_t__ start_time_ns; struct hd_struct* part; } ;
struct hd_struct {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct request*) ;
 int FUNC_1 (struct hd_struct*) ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct hd_struct*,int ) ;
 int FUNC_5 (struct hd_struct*,int ,scalar_t__) ;
 int FUNC_6 (struct hd_struct*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct request*) ;
 int FUNC_10 (struct request*) ;
 int VAR_4 ;
 int FUNC_11 (struct hd_struct*,int ) ;

void FUNC_12(struct request *VAR_5, u64 VAR_6)
{





 if (FUNC_0(VAR_5) && !(VAR_5->rq_flags & VAR_0)) {
  const int VAR_7 = FUNC_3(FUNC_9(VAR_5));
  struct hd_struct *VAR_8;

  FUNC_7();
  VAR_8 = VAR_5->part;

  FUNC_11(VAR_8, VAR_2);
  FUNC_6(VAR_8, VAR_1[VAR_7]);
  FUNC_5(VAR_8, VAR_3[VAR_7], VAR_6 - VAR_5->start_time_ns);
  FUNC_5(VAR_8, VAR_4, FUNC_2(VAR_6 - VAR_5->start_time_ns));
  FUNC_4(VAR_5->q, VAR_8, FUNC_10(VAR_5));

  FUNC_1(VAR_8);
  FUNC_8();
 }
}
