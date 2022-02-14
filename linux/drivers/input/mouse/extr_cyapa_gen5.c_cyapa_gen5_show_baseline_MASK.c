
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cyapa {int electrodes_x; int electrodes_y; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*,int*,int*,int*,int*,int*,int*) ;
 int FUNC_2 (struct cyapa*,int ,int ,int,int*,int*,int*,int *) ;
 int FUNC_3 (struct cyapa*,int*,int*,int*,int*,int*) ;
 int FUNC_4 (struct cyapa*) ;
 int FUNC_5 (struct cyapa*) ;
 int FUNC_6 (struct cyapa*) ;
 struct cyapa* FUNC_7 (struct device*) ;
 int FUNC_8 (char*,scalar_t__,char*,int,int,int,int,int,int,int,int,int,int,int,...) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_9,
       struct device_attribute *VAR_10, char *VAR_11)
{
 struct cyapa *VAR_12 = FUNC_7(VAR_9);
 int VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28, VAR_29;
 int VAR_30, VAR_31, VAR_32;
 int VAR_33, VAR_34, VAR_35;
 int VAR_36, VAR_37, VAR_38;
 int VAR_39, VAR_40, VAR_41;
 int VAR_42, VAR_43;
 int VAR_44;

 if (!FUNC_4(VAR_12))
  return -VAR_0;


 VAR_42 = FUNC_6(VAR_12);
 if (VAR_42)
  return VAR_42;


 VAR_19 = VAR_20 = 0;
 VAR_42 = FUNC_1(VAR_12,
    &VAR_13, &VAR_14,
    &VAR_15, &VAR_16,
    &VAR_17, &VAR_18);
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_3(VAR_12,
    &VAR_19, &VAR_20,
    &VAR_21, &VAR_22,
    &VAR_23);
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_0(VAR_12);
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_2(VAR_12,
    VAR_1,
    VAR_4,
    VAR_12->electrodes_x * VAR_12->electrodes_y,
    &VAR_24, &VAR_25,
    &VAR_26,
    ((void*)0));
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_2(VAR_12,
    VAR_1,
    VAR_7,
    VAR_12->electrodes_x + VAR_12->electrodes_y,
    &VAR_27, &VAR_28,
    &VAR_29,
    ((void*)0));
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_2(VAR_12,
    VAR_1,
    VAR_3,
    VAR_12->electrodes_x * VAR_12->electrodes_y,
    &VAR_30, &VAR_31,
    &VAR_32,
    ((void*)0));
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_2(VAR_12,
    VAR_1,
    VAR_6,
    VAR_12->electrodes_x + VAR_12->electrodes_y,
    &VAR_33, &VAR_34,
    &VAR_35,
    ((void*)0));
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_2(VAR_12,
    VAR_1,
    VAR_2,
    VAR_12->electrodes_x * VAR_12->electrodes_y,
    &VAR_36, &VAR_37,
    &VAR_38,
    ((void*)0));
 if (VAR_42)
  goto resume_scanning;


 VAR_42 = FUNC_2(VAR_12,
    VAR_1,
    VAR_5,
    VAR_12->electrodes_x + VAR_12->electrodes_y,
    &VAR_39, &VAR_40,
    &VAR_41,
    ((void*)0));
 if (VAR_42)
  goto resume_scanning;

resume_scanning:

 VAR_43 = FUNC_5(VAR_12);
 if (VAR_43 || VAR_42)
  return VAR_43 ? VAR_43 : VAR_42;


 VAR_44 = FUNC_8(VAR_11, VAR_8, "%d %d %d %d %d %d %d %d %d %d %d ",
  VAR_14, VAR_13, VAR_15,
  VAR_17, VAR_16, VAR_18,
  VAR_19, VAR_20,
  VAR_22, VAR_21, VAR_23);
 VAR_44 += FUNC_8(VAR_11 + VAR_44, VAR_8 - VAR_44,
  "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
  VAR_25, VAR_24, VAR_26,
  VAR_28, VAR_27, VAR_29,
  VAR_31, VAR_30, VAR_32,
  VAR_34, VAR_33, VAR_35,
  VAR_37, VAR_36, VAR_38,
  VAR_40, VAR_39, VAR_41);
 return VAR_44;
}
