
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sysctl_netisr_workstream {scalar_t__ snws_wsid; int snws_cpu; } ;
struct sysctl_netisr_work {scalar_t__ snw_wsid; int snw_handled; int snw_queued; int snw_qdrops; int snw_hybrid_dispatched; int snw_dispatched; int snw_watermark; int snw_len; int snw_proto; } ;


 int FUNC_0 (int ) ;
 struct sysctl_netisr_work* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void
FUNC_6(struct sysctl_netisr_workstream *VAR_2)
{
 struct sysctl_netisr_work *VAR_3;
 u_int VAR_4;

 FUNC_5("work");
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_0[VAR_4];
  if (VAR_3->snw_wsid != VAR_2->snws_wsid)
   continue;
  FUNC_4("work");
  FUNC_3("{t:workstream/%4u} ", VAR_2->snws_wsid);
  FUNC_3("{t:cpu/%3u} ", VAR_2->snws_cpu);
  FUNC_3("{P:  }");
  FUNC_3("{t:name/%-6s}", FUNC_0(VAR_3->snw_proto));
  FUNC_3(" {t:length/%5u}", VAR_3->snw_len);
  FUNC_3(" {t:watermark/%5u}", VAR_3->snw_watermark);
  FUNC_3(" {t:dispatched/%8ju}", VAR_3->snw_dispatched);
  FUNC_3(" {t:hybrid-dispatched/%8ju}",
      VAR_3->snw_hybrid_dispatched);
  FUNC_3(" {t:queue-drops/%8ju}", VAR_3->snw_qdrops);
  FUNC_3(" {t:queued/%8ju}", VAR_3->snw_queued);
  FUNC_3(" {t:handled/%8ju}", VAR_3->snw_handled);
  FUNC_3("\n");
  FUNC_1("work");
 }
 FUNC_2("work");
}
