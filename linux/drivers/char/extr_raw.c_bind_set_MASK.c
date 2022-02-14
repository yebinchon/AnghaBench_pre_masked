
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct raw_device_data {int * binding; scalar_t__ inuse; } ;
typedef scalar_t__ dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,scalar_t__,int *,char*,int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_8 ;
 struct raw_device_data* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_12(int VAR_11, u64 VAR_12, u64 VAR_13)
{
 dev_t VAR_14 = FUNC_2(VAR_12, VAR_13);
 struct raw_device_data *VAR_15;
 int VAR_16 = 0;

 if (VAR_11 <= 0 || VAR_11 >= VAR_7)
  return -VAR_2;

 if (FUNC_0(VAR_14) != VAR_12 || FUNC_1(VAR_14) != VAR_13)
  return -VAR_2;

 VAR_15 = &VAR_9[VAR_11];





 if (!FUNC_6(VAR_0))
  return -VAR_4;
 if (FUNC_0(VAR_14) == 0 && VAR_14 != 0)
  return -VAR_2;

 FUNC_10(&VAR_10);
 if (VAR_15->inuse) {
  FUNC_11(&VAR_10);
  return -VAR_1;
 }
 if (VAR_15->binding) {
  FUNC_5(VAR_15->binding);
  FUNC_9(VAR_6);
 }
 if (!VAR_14) {

  VAR_15->binding = ((void*)0);
  FUNC_8(VAR_8, FUNC_2(VAR_5, VAR_11));
 } else {
  VAR_15->binding = FUNC_4(VAR_14);
  if (VAR_15->binding == ((void*)0)) {
   VAR_16 = -VAR_3;
  } else {
   dev_t VAR_17 = FUNC_2(VAR_5, VAR_11);
   FUNC_3(VAR_6);
   FUNC_8(VAR_8, VAR_17);
   FUNC_7(VAR_8, ((void*)0), VAR_17, ((void*)0),
          "raw%d", VAR_11);
  }
 }
 FUNC_11(&VAR_10);
 return VAR_16;
}
