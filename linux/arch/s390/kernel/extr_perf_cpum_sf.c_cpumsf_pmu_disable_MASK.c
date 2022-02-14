
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu {int dummy; } ;
struct hws_qsi_info_block {int dear; int tear; scalar_t__ es; } ;
struct hws_lsctl_request_block {int dear; int tear; scalar_t__ cd; scalar_t__ cs; } ;
struct cpu_hw_sf {int flags; struct hws_lsctl_request_block lsctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*,int) ;
 int FUNC_1 (struct hws_lsctl_request_block*) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (struct hws_qsi_info_block*) ;
 int VAR_3 ;
 struct cpu_hw_sf* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pmu *VAR_4)
{
 struct cpu_hw_sf *VAR_5 = FUNC_4(&VAR_2);
 struct hws_lsctl_request_block VAR_6;
 struct hws_qsi_info_block VAR_7;
 int VAR_8;

 if (!(VAR_5->flags & VAR_0))
  return;

 if (VAR_5->flags & VAR_1)
  return;


 VAR_6 = VAR_5->lsctl;
 VAR_6.cs = 0;
 VAR_6.cd = 0;

 VAR_8 = FUNC_1(&VAR_6);
 if (VAR_8) {
  FUNC_2("Loading sampling controls failed: op=%i err=%i\n",
   2, VAR_8);
  return;
 }


 if (!FUNC_3(&VAR_7)) {





  if (VAR_7.es) {
   VAR_5->lsctl.tear = VAR_7.tear;
   VAR_5->lsctl.dear = VAR_7.dear;
  }
 } else
  FUNC_0(VAR_3, 3, "cpumsf_pmu_disable: "
        "qsi() failed with err=%i\n", VAR_8);

 VAR_5->flags &= ~VAR_0;
}
