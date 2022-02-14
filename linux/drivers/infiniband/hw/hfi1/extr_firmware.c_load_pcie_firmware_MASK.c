
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {size_t hfi1_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (struct hfi1_devdata*,char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct hfi1_devdata*,int *) ;
 int FUNC_3 (struct hfi1_devdata*,int *) ;
 int * VAR_7 ;
 int * VAR_8 ;
 scalar_t__ FUNC_4 (struct hfi1_devdata*,int) ;
 int FUNC_5 (struct hfi1_devdata*) ;
 int FUNC_6 (struct hfi1_devdata*,int ,int ,int ,int ) ;
 int FUNC_7 (struct hfi1_devdata*,int ) ;

int FUNC_8(struct hfi1_devdata *VAR_9)
{
 int VAR_10 = 0;


 FUNC_5(VAR_9);

 if (VAR_6) {
  FUNC_7(VAR_9, VAR_1);
  do {
   VAR_10 = FUNC_3(VAR_9, &VAR_5);
  } while (FUNC_4(VAR_9, VAR_10));
  if (VAR_10)
   goto done;
 }

 if (VAR_4) {
  FUNC_1(VAR_9, "Setting PCIe SerDes broadcast\n");
  FUNC_6(VAR_9, VAR_2,
         VAR_8[VAR_9->hfi1_id],
         VAR_7[VAR_9->hfi1_id],
         VAR_0);
  do {
   VAR_10 = FUNC_2(VAR_9, &VAR_3);
  } while (FUNC_4(VAR_9, VAR_10));
  if (VAR_10)
   goto done;
 }

done:
 FUNC_0(VAR_9);

 return VAR_10;
}
