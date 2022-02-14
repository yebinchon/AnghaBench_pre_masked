
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efa_com_dev {int efa_dev; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (struct efa_com_dev*,int ) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(struct efa_com_dev *VAR_15)
{
 u32 VAR_16;
 u32 VAR_17;
 u32 VAR_18;





 VAR_18 = FUNC_0(VAR_15, VAR_11);
 VAR_17 = FUNC_0(VAR_15,
          VAR_6);

 FUNC_1(VAR_15->efa_dev, "efa device version: %d.%d\n",
    (VAR_18 & VAR_8) >>
     VAR_9,
    VAR_18 & VAR_10);

 if (VAR_18 < VAR_14) {
  FUNC_2(VAR_15->efa_dev,
     "EFA version is lower than the minimal version the driver supports\n");
  return -VAR_12;
 }

 FUNC_1(VAR_15->efa_dev,
    "efa controller version: %d.%d.%d implementation version %d\n",
    (VAR_17 & VAR_2) >>
     VAR_3,
    (VAR_17 & VAR_4) >>
     VAR_5,
    (VAR_17 & VAR_7),
    (VAR_17 & VAR_0) >>
     VAR_1);

 VAR_16 =
  (VAR_17 & VAR_2) |
  (VAR_17 & VAR_4) |
  (VAR_17 & VAR_7);


 if (VAR_16 < VAR_13) {
  FUNC_2(VAR_15->efa_dev,
     "EFA ctrl version is lower than the minimal ctrl version the driver supports\n");
  return -VAR_12;
 }

 return 0;
}
