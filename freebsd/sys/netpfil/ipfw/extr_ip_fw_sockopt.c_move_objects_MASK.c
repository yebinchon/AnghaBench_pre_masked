
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct opcode_obj_rewrite {int (* manage_sets ) (struct ip_fw_chain*,int ,int,int ) ;} ;
struct ip_fw_chain {int n_rules; struct ip_fw** map; } ;
struct ip_fw {scalar_t__ set; int cmd_len; int * cmd; } ;
struct TYPE_4__ {scalar_t__ new_set; } ;
typedef TYPE_1__ ipfw_range_tlv ;
typedef int ipfw_insn ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_fw_chain*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct opcode_obj_rewrite* FUNC_2 (int *,int *,int *) ;
 scalar_t__ FUNC_3 (struct ip_fw*,TYPE_1__*) ;
 int FUNC_4 (struct ip_fw_chain*,int ,int,int ) ;
 int FUNC_5 (struct ip_fw_chain*,int ,int,int ) ;
 int FUNC_6 (struct ip_fw_chain*,int ,int,int ) ;
 int FUNC_7 (struct ip_fw_chain*,int ,int,int ) ;

__attribute__((used)) static int
FUNC_8(struct ip_fw_chain *VAR_3, ipfw_range_tlv *VAR_4)
{
 struct opcode_obj_rewrite *VAR_5;
 struct ip_fw *VAR_6;
 ipfw_insn *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 uint16_t VAR_12;

 FUNC_1(VAR_3);


 for (VAR_11 = 0, VAR_9 = 0; VAR_9 < VAR_3->n_rules - 1; VAR_9++) {
  VAR_6 = VAR_3->map[VAR_9];
  if (FUNC_3(VAR_6, VAR_4) == 0)
   continue;
  if (VAR_6->set == VAR_4->new_set)
   continue;

  for (VAR_10 = VAR_6->cmd_len, VAR_8 = 0, VAR_7 = VAR_6->cmd;
      VAR_10 > 0; VAR_10 -= VAR_8, VAR_7 += VAR_8) {
   VAR_8 = FUNC_0(VAR_7);
   VAR_5 = FUNC_2(VAR_7, &VAR_12, ((void*)0));
   if (VAR_5 == ((void*)0) || VAR_5->manage_sets == ((void*)0))
    continue;






   if (VAR_5->manage_sets(VAR_3, VAR_12, 1, VAR_0) != 0)
    continue;
   VAR_11++;
  }
 }
 if (VAR_11 == 0)
  return (0);

 for (VAR_11 = 0, VAR_9 = 0; (VAR_9 < VAR_3->n_rules - 1) && VAR_11 == 0; VAR_9++) {
  VAR_6 = VAR_3->map[VAR_9];
  if (FUNC_3(VAR_6, VAR_4) == 0)
   continue;
  if (VAR_6->set == VAR_4->new_set)
   continue;

  for (VAR_10 = VAR_6->cmd_len, VAR_8 = 0, VAR_7 = VAR_6->cmd;
      VAR_10 > 0 && VAR_11 == 0; VAR_10 -= VAR_8, VAR_7 += VAR_8) {
   VAR_8 = FUNC_0(VAR_7);
   VAR_5 = FUNC_2(VAR_7, &VAR_12, ((void*)0));
   if (VAR_5 == ((void*)0) || VAR_5->manage_sets == ((void*)0))
    continue;

   VAR_11 = VAR_5->manage_sets(VAR_3, VAR_12,
       (uint8_t)VAR_4->new_set, VAR_2);
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->n_rules - 1; VAR_9++) {
  VAR_6 = VAR_3->map[VAR_9];
  if (FUNC_3(VAR_6, VAR_4) == 0)
   continue;
  if (VAR_6->set == VAR_4->new_set)
   continue;

  for (VAR_10 = VAR_6->cmd_len, VAR_8 = 0, VAR_7 = VAR_6->cmd;
      VAR_10 > 0; VAR_10 -= VAR_8, VAR_7 += VAR_8) {
   VAR_8 = FUNC_0(VAR_7);
   VAR_5 = FUNC_2(VAR_7, &VAR_12, ((void*)0));
   if (VAR_5 == ((void*)0) || VAR_5->manage_sets == ((void*)0))
    continue;

   VAR_5->manage_sets(VAR_3, VAR_12,
       0 , VAR_0);
   if (VAR_11 != 0)
    continue;

   VAR_5->manage_sets(VAR_3, VAR_12,
       (uint8_t)VAR_4->new_set, VAR_1);
  }
 }
 return (VAR_11);
}
