
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct opcode_obj_rewrite {int (* manage_sets ) (struct ip_fw_chain*,scalar_t__,scalar_t__,int ) ;} ;
struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw {scalar_t__ set; } ;
struct TYPE_3__ {scalar_t__ set; scalar_t__ new_set; } ;
typedef TYPE_1__ ipfw_range_tlv ;


 int VAR_0 ;
 int FUNC_0 (struct ip_fw_chain*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct opcode_obj_rewrite* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ip_fw_chain*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct ip_fw_chain*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_6, ipfw_range_tlv *VAR_7, int VAR_8)
{
 struct opcode_obj_rewrite *VAR_9;
 struct ip_fw *VAR_10;
 int VAR_11;

 FUNC_0(VAR_6);

 if (VAR_7->set == VAR_7->new_set)
  return (0);

 if (VAR_8 != 0) {




  for (VAR_9 = VAR_4;
      VAR_9 < VAR_4 + VAR_5; VAR_9++) {
   if (VAR_9->manage_sets == ((void*)0))
    continue;
   VAR_11 = VAR_9->manage_sets(VAR_6, (uint8_t)VAR_7->set,
       (uint8_t)VAR_7->new_set, VAR_3);
   if (VAR_11 != 0)
    return (VAR_0);
  }
 }

 for (VAR_11 = 0; VAR_11 < VAR_6->n_rules - 1; VAR_11++) {
  VAR_10 = VAR_6->map[VAR_11];
  if (VAR_10->set == (uint8_t)VAR_7->set)
   VAR_10->set = (uint8_t)VAR_7->new_set;
  else if (VAR_10->set == (uint8_t)VAR_7->new_set && VAR_8 == 0)
   VAR_10->set = (uint8_t)VAR_7->set;
 }
 for (VAR_9 = VAR_4; VAR_9 < VAR_4 + VAR_5; VAR_9++) {
  if (VAR_9->manage_sets == ((void*)0))
   continue;
  VAR_9->manage_sets(VAR_6, (uint8_t)VAR_7->set,
      (uint8_t)VAR_7->new_set, VAR_8 != 0 ? VAR_1: VAR_2);
 }
 return (0);
}
