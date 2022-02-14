
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nds32_pmu {char* name; int set_event_filter; int num_events; int map_event; } ;


 int FUNC_0 (struct nds32_pmu*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct nds32_pmu *VAR_2)
{
 FUNC_0(VAR_2);




 VAR_2->name = "nds32v3-pmu";
 VAR_2->map_event = VAR_1;
 VAR_2->num_events = FUNC_1();
 VAR_2->set_event_filter = VAR_0;
 return 0;
}
