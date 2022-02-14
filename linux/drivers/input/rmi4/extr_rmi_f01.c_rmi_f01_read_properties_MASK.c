
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rmi_device {int dev; } ;
struct f01_basic_properties {int manufacturer_id; int has_lts; int has_adjustable_doze; int has_adjustable_doze_holdoff; char* product_id; int productinfo; int firmware_id; int package_id; int dom; } ;
typedef int __le64 ;


 int FUNC_0 (int) ;
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
 size_t VAR_10 ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (char*,int*,size_t) ;
 int FUNC_4 (struct rmi_device*,int,int*) ;
 int FUNC_5 (struct rmi_device*,int,int*,int) ;
 int FUNC_6 (int ,int,char*,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct rmi_device *VAR_11,
       u16 VAR_12,
       struct f01_basic_properties *VAR_13)
{
 u8 VAR_14[VAR_0];
 int VAR_15;
 int VAR_16 = VAR_12;
 bool VAR_17 = 0;
 bool VAR_18 = 0;
 bool VAR_19 = 0;
 bool VAR_20 = 0;
 bool VAR_21 = 0;
 u16 VAR_22;
 u8 VAR_23;

 VAR_15 = FUNC_5(VAR_11, VAR_16,
          VAR_14, VAR_0);
 if (VAR_15) {
  FUNC_1(&VAR_11->dev,
   "Failed to read device query registers: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_22 = VAR_16 + 17;
 VAR_16 += VAR_0;


 VAR_13->manufacturer_id = VAR_14[0];

 VAR_13->has_lts = VAR_14[1] & VAR_3;
 VAR_13->has_adjustable_doze =
   VAR_14[1] & VAR_1;
 VAR_13->has_adjustable_doze_holdoff =
   VAR_14[1] & VAR_2;
 VAR_18 = VAR_14[1] & VAR_4;
 VAR_19 = VAR_14[1] & VAR_5;

 FUNC_6(VAR_13->dom, sizeof(VAR_13->dom), "20%02d/%02d/%02d",
   VAR_14[5] & VAR_7,
   VAR_14[6] & VAR_8,
   VAR_14[7] & VAR_9);

 FUNC_3(VAR_13->product_id, &VAR_14[11],
  VAR_10);
 VAR_13->product_id[VAR_10] = '\0';

 VAR_13->productinfo =
   ((VAR_14[2] & VAR_6) << 7) |
   (VAR_14[3] & VAR_6);

 if (VAR_19)
  VAR_16++;

 if (VAR_18) {
  VAR_15 = FUNC_4(VAR_11, VAR_16, VAR_14);
  if (VAR_15) {
   FUNC_1(&VAR_11->dev,
    "Failed to read query 42 register: %d\n", VAR_15);
   return VAR_15;
  }

  VAR_17 = !!(VAR_14[0] & FUNC_0(0));
  VAR_16++;
 }

 if (VAR_17) {
  VAR_15 = FUNC_4(VAR_11, VAR_16, &VAR_23);
  if (VAR_15) {
   FUNC_1(&VAR_11->dev,
    "Failed to read DS4 queries length: %d\n", VAR_15);
   return VAR_15;
  }
  VAR_16++;

  if (VAR_23 > 0) {
   VAR_15 = FUNC_4(VAR_11, VAR_16, VAR_14);
   if (VAR_15) {
    FUNC_1(&VAR_11->dev,
     "Failed to read DS4 queries: %d\n",
     VAR_15);
    return VAR_15;
   }

   VAR_20 = !!(VAR_14[0] & FUNC_0(0));
   VAR_21 = !!(VAR_14[0] & FUNC_0(1));
  }

  if (VAR_20) {
   VAR_15 = FUNC_5(VAR_11, VAR_22,
          VAR_14, sizeof(__le64));
   if (VAR_15) {
    FUNC_1(&VAR_11->dev,
     "Failed to read package info: %d\n",
     VAR_15);
    return VAR_15;
   }

   VAR_13->package_id = FUNC_2(VAR_14);
   VAR_22++;
  }

  if (VAR_21) {
   VAR_15 = FUNC_5(VAR_11, VAR_22, VAR_14,
         3);
   if (VAR_15) {
    FUNC_1(&VAR_11->dev,
     "Failed to read product info: %d\n",
     VAR_15);
    return VAR_15;
   }

   VAR_13->firmware_id = VAR_14[1] << 8 | VAR_14[0];
   VAR_13->firmware_id += VAR_14[2] * 65536;
  }
 }

 return 0;
}
