
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_usec; int tv_sec; } ;
struct itimerval {TYPE_1__ it_interval; TYPE_1__ it_value; } ;
struct iftot {scalar_t__ ift_od; scalar_t__ ift_co; scalar_t__ ift_ob; scalar_t__ ift_oe; scalar_t__ ift_op; scalar_t__ ift_ib; scalar_t__ ift_id; scalar_t__ ift_ie; scalar_t__ ift_ip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct iftot*) ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,struct itimerval*,int *) ;
 int FUNC_2 (char*,int,char*,scalar_t__,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14(void)
{
 struct iftot VAR_8[2], *VAR_9, *VAR_10;
 struct itimerval VAR_11;
 int VAR_12, VAR_13;

 VAR_9 = &VAR_8[0];
 VAR_10 = &VAR_8[1];
 FUNC_0(VAR_10);

 (void)FUNC_5(VAR_1, VAR_2);
 VAR_7 = 0;
 VAR_11.it_interval.tv_sec = VAR_5;
 VAR_11.it_interval.tv_usec = 0;
 VAR_11.it_value = VAR_11.it_interval;
 FUNC_1(VAR_0, &VAR_11, ((void*)0));
 FUNC_13("interface-statistics");

banner:
 FUNC_10("{T:/%17s} {T:/%14s} {T:/%16s}\n", "input",
     VAR_4 != ((void*)0) ? VAR_4 : "(Total)", "output");
 FUNC_10("{T:/%10s} {T:/%5s} {T:/%5s} {T:/%10s} {T:/%10s} {T:/%5s} "
     "{T:/%10s} {T:/%5s}",
     "packets", "errs", "idrops", "bytes", "packets", "errs", "bytes",
     "colls");
 if (VAR_3)
  FUNC_10(" {T:/%5.5s}", "drops");
 FUNC_10("\n");
 FUNC_11();
 VAR_13 = 0;

loop:
 if ((VAR_6 != 0) && (--VAR_6 == 0)) {
  FUNC_9("interface-statistics");
  return;
 }
 VAR_12 = FUNC_3(FUNC_4(VAR_1));
 while (!VAR_7)
  FUNC_6(0);
 VAR_7 = 0;
 FUNC_7(VAR_12);
 VAR_13++;

 FUNC_0(VAR_9);

 FUNC_12("stats");
 FUNC_2("lu", 10, "received-packets",
     VAR_9->ift_ip - VAR_10->ift_ip, 1, 1);
 FUNC_2("lu", 5, "received-errors",
     VAR_9->ift_ie - VAR_10->ift_ie, 1, 1);
 FUNC_2("lu", 5, "dropped-packets",
     VAR_9->ift_id - VAR_10->ift_id, 1, 1);
 FUNC_2("lu", 10, "received-bytes",
     VAR_9->ift_ib - VAR_10->ift_ib, 1, 0);
 FUNC_2("lu", 10, "sent-packets",
     VAR_9->ift_op - VAR_10->ift_op, 1, 1);
 FUNC_2("lu", 5, "send-errors",
     VAR_9->ift_oe - VAR_10->ift_oe, 1, 1);
 FUNC_2("lu", 10, "sent-bytes",
     VAR_9->ift_ob - VAR_10->ift_ob, 1, 0);
 FUNC_2("NRSlu", 5, "collisions",
     VAR_9->ift_co - VAR_10->ift_co, 1, 1);
 if (VAR_3)
  FUNC_2("LSlu", 5, "dropped-packets",
      VAR_9->ift_od - VAR_10->ift_od, 1, 1);
 FUNC_8("stats");
 FUNC_10("\n");
 FUNC_11();

 if (VAR_9 == &VAR_8[0]) {
  VAR_9 = &VAR_8[1];
  VAR_10 = &VAR_8[0];
 } else {
  VAR_9 = &VAR_8[0];
  VAR_10 = &VAR_8[1];
 }

 if (VAR_13 == 21)
  goto banner;
 else
  goto loop;


}
