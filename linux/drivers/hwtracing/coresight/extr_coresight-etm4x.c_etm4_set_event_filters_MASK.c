
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {struct etm_filters* addr_filters; } ;
struct perf_event {TYPE_1__ hw; } ;
struct etmv4_config {int vissctlr; int viiectlr; int vinst_ctrl; } ;
struct etmv4_drvdata {struct etmv4_config config; } ;
struct etm_filters {int nr_filters; int ssstatus; struct etm_filter* etm_filter; } ;
struct etm_filter {int type; int stop_addr; int start_addr; } ;
typedef enum etm_addr_type { ____Placeholder_etm_addr_type } etm_addr_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;



 int FUNC_1 (struct etmv4_drvdata*,int) ;
 int FUNC_2 (struct etmv4_config*,int ,int ,int) ;
 int FUNC_3 (struct etmv4_config*) ;
 int FUNC_4 (struct etmv4_config*,int ,int,int) ;
 int FUNC_5 (struct perf_event*) ;

__attribute__((used)) static int FUNC_6(struct etmv4_drvdata *VAR_1,
      struct perf_event *VAR_2)
{
 int VAR_3, VAR_4, VAR_5 = 0;
 u64 VAR_6;
 struct etmv4_config *VAR_7 = &VAR_1->config;
 struct etm_filters *VAR_8 = VAR_2->hw.addr_filters;

 if (!VAR_8)
  goto default_filter;


 FUNC_5(VAR_2);





 if (!VAR_8->nr_filters)
  goto default_filter;

 for (VAR_3 = 0; VAR_3 < VAR_8->nr_filters; VAR_3++) {
  struct etm_filter *VAR_9 = &VAR_8->etm_filter[VAR_3];
  enum etm_addr_type VAR_10 = VAR_9->type;


  VAR_4 = FUNC_1(VAR_1, VAR_10);
  if (VAR_4 < 0) {
   VAR_5 = VAR_4;
   goto out;
  }

  switch (VAR_10) {
  case 130:
   FUNC_2(VAR_7,
         VAR_9->start_addr,
         VAR_9->stop_addr,
         VAR_4);




   VAR_7->vinst_ctrl |= FUNC_0(9);


   VAR_7->vissctlr = 0x0;
   break;
  case 129:
  case 128:

   VAR_6 = (VAR_10 == 129 ?
       VAR_9->start_addr :
       VAR_9->stop_addr);


   FUNC_4(VAR_7, VAR_6,
         VAR_4, VAR_10);
   if (VAR_8->ssstatus)
    VAR_7->vinst_ctrl |= FUNC_0(9);


   VAR_7->viiectlr = 0x0;
   break;
  default:
   VAR_5 = -VAR_0;
   goto out;
  }
 }

 goto out;


default_filter:
 FUNC_3(VAR_7);

out:
 return VAR_5;
}
