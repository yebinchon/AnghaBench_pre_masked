
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pip_fixed_info {int family_id; int silicon_id_high; } ;
struct cyapa {int state; int gen; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int FUNC_0 (struct cyapa*,int *,int *,int *) ;
 int FUNC_1 (struct cyapa*,struct pip_fixed_info*,int) ;
 int FUNC_2 (struct cyapa*,int*,int,int*,int*,int,int ,int) ;
 int FUNC_3 (struct cyapa*,int ) ;
 int VAR_13 ;
 int FUNC_4 (struct pip_fixed_info*,int ,int) ;

int FUNC_5(struct cyapa *VAR_14, u8 *VAR_15, int VAR_16)
{
 u8 VAR_17[] = { 0x01, 0x00};
 struct pip_fixed_info VAR_18;
 u8 VAR_19[VAR_11];
 int VAR_20;
 bool VAR_21;
 int VAR_22;

 VAR_14->state = VAR_6;


 FUNC_3(VAR_14, VAR_8);


 FUNC_0(VAR_14, ((void*)0), ((void*)0), ((void*)0));





 VAR_20 = VAR_11;
 VAR_22 = FUNC_2(VAR_14,
   VAR_17, sizeof(VAR_17),
   VAR_19, &VAR_20,
   300,
   VAR_13,
   0);
 if (VAR_22)
  return VAR_22;

 if (VAR_19[VAR_12] == VAR_10)
  VAR_21 = 1;
 else if (VAR_19[VAR_12] == VAR_9)
  VAR_21 = 0;
 else
  return -VAR_7;


 FUNC_4(&VAR_18, 0, sizeof(struct pip_fixed_info));
 VAR_22 = FUNC_1(VAR_14, &VAR_18, VAR_21);
 if (VAR_22)
  return VAR_22;

 if (VAR_18.family_id == 0x9B && VAR_18.silicon_id_high == 0x0B) {
  VAR_14->gen = VAR_1;
  VAR_14->state = VAR_21 ? VAR_5
          : VAR_4;
 } else if (VAR_18.family_id == 0x91 &&
     VAR_18.silicon_id_high == 0x02) {
  VAR_14->gen = VAR_0;
  VAR_14->state = VAR_21 ? VAR_3
          : VAR_2;
 }

 return 0;
}
