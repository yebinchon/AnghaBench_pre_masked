
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct drbd_request {unsigned int rq_state; scalar_t__ master_bio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int FUNC_0 (struct seq_file*,unsigned int,char*,char*) ;
 int FUNC_1 (struct seq_file*,char*,...) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_16, struct drbd_request *VAR_17)
{
 unsigned int VAR_18 = VAR_17->rq_state;
 char VAR_19 = ' ';
 FUNC_1(VAR_16, "\t0x%08x", VAR_18);
 FUNC_1(VAR_16, "\tmaster: %s", VAR_17->master_bio ? "pending" : "completed");


 FUNC_2(VAR_16, "\tlocal:");
 FUNC_0(VAR_16, VAR_18 & VAR_4, &VAR_19, "in-AL");
 FUNC_0(VAR_16, VAR_18 & VAR_15, &VAR_19, "postponed");
 FUNC_0(VAR_16, VAR_18 & VAR_0, &VAR_19, "suspended");
 VAR_19 = ' ';
 FUNC_0(VAR_16, VAR_18 & VAR_8, &VAR_19, "pending");
 FUNC_0(VAR_16, VAR_18 & VAR_6, &VAR_19, "completed");
 FUNC_0(VAR_16, VAR_18 & VAR_5, &VAR_19, "aborted");
 FUNC_0(VAR_16, VAR_18 & VAR_7, &VAR_19, "ok");
 if (VAR_19 == ' ')
  FUNC_2(VAR_16, " -");


 FUNC_1(VAR_16, "\tnet:");
 VAR_19 = ' ';
 FUNC_0(VAR_16, VAR_18 & VAR_11, &VAR_19, "pending");
 FUNC_0(VAR_16, VAR_18 & VAR_12, &VAR_19, "queued");
 FUNC_0(VAR_16, VAR_18 & VAR_13, &VAR_19, "sent");
 FUNC_0(VAR_16, VAR_18 & VAR_9, &VAR_19, "done");
 FUNC_0(VAR_16, VAR_18 & VAR_14, &VAR_19, "sis");
 FUNC_0(VAR_16, VAR_18 & VAR_10, &VAR_19, "ok");
 if (VAR_19 == ' ')
  FUNC_2(VAR_16, " -");

 FUNC_1(VAR_16, " :");
 VAR_19 = ' ';
 FUNC_0(VAR_16, VAR_18 & VAR_2, &VAR_19, "B");
 FUNC_0(VAR_16, VAR_18 & VAR_3, &VAR_19, "C");
 FUNC_0(VAR_16, VAR_18 & VAR_1, &VAR_19, "barr");
 if (VAR_19 == ' ')
  FUNC_2(VAR_16, " -");
 FUNC_1(VAR_16, "\n");
}
