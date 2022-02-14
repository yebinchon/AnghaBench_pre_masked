
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct hfi1_devdata {int eprom_available; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct hfi1_devdata*,int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_2 (struct hfi1_devdata*,void**,scalar_t__*) ;
 int FUNC_3 (struct hfi1_devdata*,scalar_t__*,void**,scalar_t__*) ;
 int FUNC_4 (struct hfi1_devdata*,int ) ;

int FUNC_5(struct hfi1_devdata *VAR_8, void **VAR_9, u32 *VAR_10)
{
 u32 VAR_11[VAR_4];
 int VAR_12;

 if (!VAR_8->eprom_available)
  return -VAR_2;

 VAR_12 = FUNC_0(VAR_8, VAR_0, VAR_3);
 if (VAR_12)
  return -VAR_1;


 VAR_12 = FUNC_1(VAR_8, VAR_7 - VAR_5, VAR_5, VAR_11);
 if (VAR_12)
  goto done;


 if (VAR_11[VAR_4 - 1] == VAR_6) {

  VAR_12 = FUNC_3(VAR_8, VAR_11, VAR_9, VAR_10);
 } else {

  VAR_12 = FUNC_2(VAR_8, VAR_9, VAR_10);
 }

done:
 FUNC_4(VAR_8, VAR_0);
 return VAR_12;
}
