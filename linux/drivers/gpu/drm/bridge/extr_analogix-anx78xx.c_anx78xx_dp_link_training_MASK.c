
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int rate; } ;
struct anx78xx {int* dpcd; int * map; TYPE_1__ link; int aux; } ;


 int VAR_0 ;
 int VAR_1 ;



 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (int *,int ,int**,int ) ;
 int FUNC_6 (int *,int ,int*) ;
 int FUNC_7 (int *,int ,int ) ;
 scalar_t__ FUNC_8 (int*) ;
 int FUNC_9 (int *,TYPE_1__*) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct anx78xx *VAR_25)
{
 u8 VAR_26, VAR_27;
 int VAR_28;

 VAR_28 = FUNC_13(VAR_25->map[VAR_8], VAR_18,
      0x0);
 if (VAR_28)
  return VAR_28;

 VAR_28 = FUNC_3(VAR_25->map[VAR_10],
     VAR_20,
     VAR_21);
 if (VAR_28)
  return VAR_28;

 VAR_28 = FUNC_6(&VAR_25->aux, VAR_4, &VAR_26);
 if (VAR_28 < 0)
  return VAR_28;

 switch (VAR_26) {
 case 130:
 case 129:
 case 128:
  break;

 default:
  FUNC_1("DP bandwidth (%#02x) not supported\n", VAR_26);
  return -VAR_7;
 }

 VAR_28 = FUNC_4(VAR_25->map[VAR_10], VAR_24,
          VAR_23);
 if (VAR_28)
  return VAR_28;

 VAR_28 = FUNC_3(VAR_25->map[VAR_10],
     VAR_24, VAR_22);
 if (VAR_28)
  return VAR_28;


 VAR_28 = FUNC_5(&VAR_25->aux, VAR_1,
          &VAR_25->dpcd, VAR_5);
 if (VAR_28 < 0) {
  FUNC_2("Failed to read DPCD: %d\n", VAR_28);
  return VAR_28;
 }


 VAR_28 = FUNC_3(VAR_25->map[VAR_9],
     VAR_12, VAR_11);
 if (VAR_28)
  return VAR_28;


 VAR_28 = FUNC_11(&VAR_25->aux, &VAR_25->link);
 if (VAR_28 < 0) {
  FUNC_2("Failed to probe link capabilities: %d\n", VAR_28);
  return VAR_28;
 }


 VAR_28 = FUNC_10(&VAR_25->aux, &VAR_25->link);
 if (VAR_28 < 0) {
  FUNC_2("Failed to power up DisplayPort link: %d\n", VAR_28);
  return VAR_28;
 }


 VAR_28 = FUNC_13(VAR_25->map[VAR_9],
      VAR_13, 0);
 if (VAR_28)
  return VAR_28;

 if (VAR_25->dpcd[VAR_2] & VAR_3) {
  FUNC_0("Enable downspread on the sink\n");

  VAR_28 = FUNC_13(VAR_25->map[VAR_9],
       VAR_13, 8);
  if (VAR_28)
   return VAR_28;

  VAR_28 = FUNC_7(&VAR_25->aux, VAR_0,
      VAR_6);
  if (VAR_28 < 0)
   return VAR_28;
 } else {
  VAR_28 = FUNC_7(&VAR_25->aux, VAR_0, 0);
  if (VAR_28 < 0)
   return VAR_28;
 }


 if (FUNC_8(VAR_25->dpcd))
  VAR_28 = FUNC_4(VAR_25->map[VAR_9],
           VAR_16 + 4,
           VAR_17);
 else
  VAR_28 = FUNC_3(VAR_25->map[VAR_9],
      VAR_16 + 4,
      VAR_17);
 if (VAR_28)
  return VAR_28;

 VAR_27 = FUNC_12(VAR_25->link.rate);
 VAR_28 = FUNC_13(VAR_25->map[VAR_9],
      VAR_15, VAR_27);
 if (VAR_28)
  return VAR_28;

 VAR_28 = FUNC_9(&VAR_25->aux, &VAR_25->link);
 if (VAR_28 < 0) {
  FUNC_2("Failed to configure DisplayPort link: %d\n", VAR_28);
  return VAR_28;
 }


 VAR_28 = FUNC_13(VAR_25->map[VAR_9], VAR_14,
      VAR_19);
 if (VAR_28)
  return VAR_28;

 return 0;
}
