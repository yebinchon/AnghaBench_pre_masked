
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {size_t hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_3 (struct hfi1_devdata*,int *) ;
 int FUNC_4 (struct hfi1_devdata*,int *) ;
 int FUNC_5 (struct hfi1_devdata*,int ) ;
 scalar_t__ FUNC_6 (struct hfi1_devdata*,int) ;
 int FUNC_7 (struct hfi1_devdata*) ;
 int FUNC_8 (struct hfi1_devdata*,int ,int ,int ,int ) ;
 int FUNC_9 (struct hfi1_devdata*,int ) ;

int FUNC_10(struct hfi1_devdata *VAR_11)
{
 int VAR_12;

 if (VAR_10) {
  VAR_12 = FUNC_0(VAR_11, VAR_0, VAR_2);
  if (VAR_12)
   return VAR_12;

  FUNC_7(VAR_11);

  FUNC_8(VAR_11, VAR_4,
         VAR_6[VAR_11->hfi1_id],
         VAR_5[VAR_11->hfi1_id],
         VAR_1);
  FUNC_9(VAR_11, VAR_3);
  do {
   VAR_12 = FUNC_4(VAR_11, &VAR_9);
  } while (FUNC_6(VAR_11, VAR_12));

  FUNC_1(VAR_11);
  FUNC_5(VAR_11, VAR_0);
  if (VAR_12)
   return VAR_12;
 }

 if (VAR_8) {
  do {
   VAR_12 = FUNC_3(VAR_11, &VAR_7);
  } while (FUNC_6(VAR_11, VAR_12));
  if (VAR_12)
   return VAR_12;
 }

 FUNC_2(VAR_11);
 return 0;
}
