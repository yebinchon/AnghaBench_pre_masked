
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct xen_intr_pcpu_data {int * evtchn_intrcnt; } ;
typedef int buf ;


 struct xen_intr_pcpu_data* FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int **) ;
 int FUNC_2 (char*,int,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(u_int VAR_2)
{
 char VAR_3[VAR_0 + 1];
 struct xen_intr_pcpu_data *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 if (VAR_4->evtchn_intrcnt != ((void*)0))
  return;

 FUNC_2(VAR_3, sizeof(VAR_3), "cpu%d:xen", VAR_2);
 FUNC_1(VAR_3, &VAR_4->evtchn_intrcnt);
}
