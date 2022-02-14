
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_initmsg {int sinit_num_ostreams; int sinit_max_instreams; int sinit_max_attempts; int sinit_max_init_timeo; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, struct sctp_initmsg *VAR_1)
{
 FUNC_0(VAR_0, "{out=%u,", VAR_1->sinit_num_ostreams);
 FUNC_0(VAR_0, "in=%u,", VAR_1->sinit_max_instreams);
 FUNC_0(VAR_0, "max_rtx=%u,", VAR_1->sinit_max_attempts);
 FUNC_0(VAR_0, "max_rto=%u}", VAR_1->sinit_max_init_timeo);
}
