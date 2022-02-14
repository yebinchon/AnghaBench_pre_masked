
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {struct nct6683_sio_data* platform_data; } ;
struct platform_device {struct device dev; } ;
struct nct6683_sio_data {size_t kind; int sioreg; } ;
struct nct6683_data {size_t kind; int customer_id; struct attribute_group** groups; scalar_t__ temp_num; scalar_t__ have_fan; scalar_t__ in_num; scalar_t__ have_pwm; int update_lock; int addr; int sioreg; } ;
struct attribute_group {int dummy; } ;
typedef int build ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct attribute_group*) ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct attribute_group*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*,int ,int ,int ,char*) ;
 struct device* FUNC_4 (struct device*,int ,struct nct6683_data*,struct attribute_group**) ;
 struct nct6683_data* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_13 ;
 int FUNC_8 (int *) ;
 int * VAR_14 ;
 struct attribute_group* FUNC_9 (struct device*,int *,scalar_t__) ;
 int * VAR_15 ;
 int VAR_16 ;
 struct attribute_group VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (struct nct6683_data*) ;
 int VAR_19 ;
 int FUNC_11 (struct nct6683_data*,int ) ;
 int FUNC_12 (struct nct6683_data*,int ) ;
 int FUNC_13 (struct nct6683_data*) ;
 int FUNC_14 (struct nct6683_data*) ;
 int VAR_20 ;
 struct resource* FUNC_15 (struct platform_device*,int ,int ) ;
 int FUNC_16 (struct platform_device*,struct nct6683_data*) ;
 int FUNC_17 (char*,int,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_21)
{
 struct device *VAR_22 = &VAR_21->dev;
 struct nct6683_sio_data *VAR_23 = VAR_22->platform_data;
 struct attribute_group *VAR_24;
 struct nct6683_data *VAR_25;
 struct device *VAR_26;
 struct resource *VAR_27;
 int VAR_28 = 0;
 char VAR_29[16];

 VAR_27 = FUNC_15(VAR_21, VAR_6, 0);
 if (!FUNC_6(VAR_22, VAR_27->start, VAR_5, VAR_0))
  return -VAR_1;

 VAR_25 = FUNC_5(VAR_22, sizeof(struct nct6683_data), VAR_4);
 if (!VAR_25)
  return -VAR_3;

 VAR_25->kind = VAR_23->kind;
 VAR_25->sioreg = VAR_23->sioreg;
 VAR_25->addr = VAR_27->start;
 FUNC_8(&VAR_25->update_lock);
 FUNC_16(VAR_21, VAR_25);

 VAR_25->customer_id = FUNC_12(VAR_25, VAR_10);


 switch (VAR_25->customer_id) {
 case 129:
  break;
 case 128:
  break;
 default:
  if (!VAR_13)
   return -VAR_2;
 }

 FUNC_10(VAR_25);
 FUNC_13(VAR_25);
 FUNC_14(VAR_25);



 if (VAR_25->have_pwm) {
  VAR_24 = FUNC_9(VAR_22,
        &VAR_19,
        FUNC_7(VAR_25->have_pwm));
  if (FUNC_0(VAR_24))
   return FUNC_1(VAR_24);
  VAR_25->groups[VAR_28++] = VAR_24;
 }

 if (VAR_25->in_num) {
  VAR_24 = FUNC_9(VAR_22,
        &VAR_18,
        VAR_25->in_num);
  if (FUNC_0(VAR_24))
   return FUNC_1(VAR_24);
  VAR_25->groups[VAR_28++] = VAR_24;
 }

 if (VAR_25->have_fan) {
  VAR_24 = FUNC_9(VAR_22,
        &VAR_16,
        FUNC_7(VAR_25->have_fan));
  if (FUNC_0(VAR_24))
   return FUNC_1(VAR_24);
  VAR_25->groups[VAR_28++] = VAR_24;
 }

 if (VAR_25->temp_num) {
  VAR_24 = FUNC_9(VAR_22,
        &VAR_20,
        VAR_25->temp_num);
  if (FUNC_0(VAR_24))
   return FUNC_1(VAR_24);
  VAR_25->groups[VAR_28++] = VAR_24;
 }
 VAR_25->groups[VAR_28++] = &VAR_17;

 if (VAR_25->customer_id == 129)
  FUNC_17(VAR_29, sizeof(VAR_29), "%02x/%02x/%02x",
     FUNC_11(VAR_25, VAR_8),
     FUNC_11(VAR_25, VAR_7),
     FUNC_11(VAR_25, VAR_9));
 else
  FUNC_17(VAR_29, sizeof(VAR_29), "%02d/%02d/%02d",
     FUNC_11(VAR_25, VAR_8),
     FUNC_11(VAR_25, VAR_7),
     FUNC_11(VAR_25, VAR_9));

 FUNC_3(VAR_22, "%s EC firmware version %d.%d build %s\n",
   VAR_14[VAR_25->kind],
   FUNC_11(VAR_25, VAR_11),
   FUNC_11(VAR_25, VAR_12),
   VAR_29);

 VAR_26 = FUNC_4(VAR_22,
   VAR_15[VAR_25->kind], VAR_25, VAR_25->groups);
 return FUNC_2(VAR_26);
}
