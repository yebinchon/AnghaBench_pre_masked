
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct send_context_info {int type; int base; scalar_t__ credits; } ;
struct sc_config_sizes {int count; scalar_t__ size; } ;
struct hfi1_devdata {struct send_context_info* send_contexts; struct sc_config_sizes* sc_sizes; struct send_context_info* hw_to_sw; int num_send_contexts; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct send_context_info VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 struct send_context_info* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct send_context_info*) ;
 struct send_context_info* FUNC_4 (int,int,int ) ;

int FUNC_5(struct hfi1_devdata *VAR_5)
{
 u16 VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_5->hw_to_sw = FUNC_4(VAR_4, sizeof(u8),
     VAR_1);
 VAR_5->send_contexts = FUNC_2(VAR_5->num_send_contexts,
        sizeof(struct send_context_info),
        VAR_1);
 if (!VAR_5->send_contexts || !VAR_5->hw_to_sw) {
  FUNC_3(VAR_5->hw_to_sw);
  FUNC_3(VAR_5->send_contexts);
  FUNC_0(VAR_5);
  return -VAR_0;
 }


 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_5->hw_to_sw[VAR_8] = VAR_2;





 VAR_10 = 0;
 VAR_6 = 1;
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  struct sc_config_sizes *VAR_11 = &VAR_5->sc_sizes[VAR_8];

  for (VAR_9 = 0; VAR_9 < VAR_11->count; VAR_9++) {
   struct send_context_info *VAR_12 =
      &VAR_5->send_contexts[VAR_10];
   VAR_12->type = VAR_8;
   VAR_12->base = VAR_6;
   VAR_12->credits = VAR_11->size;

   VAR_10++;
   VAR_6 += VAR_11->size;
  }
 }

 return 0;
}
