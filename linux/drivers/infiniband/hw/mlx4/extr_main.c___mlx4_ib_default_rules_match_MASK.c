
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_flow_spec {int type; int size; } ;
typedef scalar_t__ u8 ;
struct ib_qp {int device; } ;
struct ib_flow_attr {int num_of_specs; int port; } ;
struct default_rules {scalar_t__ link_layer; int* mandatory_fields; scalar_t__* mandatory_not_fields; } ;
typedef int field_types ;
typedef int __u32 ;


 int FUNC_0 (struct default_rules*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct default_rules* VAR_2 ;
 int FUNC_1 (int **,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ib_qp *VAR_3,
      struct ib_flow_attr *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 void *VAR_8;
 const struct default_rules *VAR_9 = VAR_2;
 u8 VAR_10 = FUNC_2(VAR_3->device, VAR_4->port);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++, VAR_9++) {
  __u32 VAR_11[VAR_1];
  FUNC_1(&VAR_11, 0, sizeof(VAR_11));

  if (VAR_10 != VAR_9->link_layer)
   continue;

  VAR_8 = VAR_4 + 1;

  for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_1 &&
       VAR_6 < VAR_4->num_of_specs; VAR_7++) {
   union ib_flow_spec *VAR_12 =
    (union ib_flow_spec *)VAR_8;


   if (((VAR_12->type & VAR_0) ==
        (VAR_9->mandatory_fields[VAR_7] &
         VAR_0)) &&
       (VAR_12->type !=
        VAR_9->mandatory_fields[VAR_7]))
    goto out;


   if (VAR_12->type ==
       VAR_9->mandatory_fields[VAR_7]) {
    VAR_6++;
    VAR_8 +=
     ((union ib_flow_spec *)VAR_8)->size;
   }
  }

  VAR_8 = VAR_4 + 1;
  for (VAR_6 = 0; VAR_6 < VAR_4->num_of_specs;
       VAR_6++, VAR_8 += ((union ib_flow_spec *)VAR_8)->size)
   for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)

    if (((union ib_flow_spec *)VAR_8)->type ==
        VAR_9->mandatory_not_fields[VAR_7])
     goto out;

  return VAR_5;
 }
out:
 return -1;
}
