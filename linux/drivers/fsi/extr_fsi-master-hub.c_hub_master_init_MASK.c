
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_hub {struct fsi_device* upstream; } ;
struct fsi_device {int dummy; } ;
typedef int reg ;
typedef int __be32 ;


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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fsi_device*,int ,int *,int) ;
 int FUNC_2 (struct fsi_device*,int ,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct fsi_master_hub *VAR_22)
{
 struct fsi_device *VAR_23 = VAR_22->upstream;
 __be32 VAR_24;
 int VAR_25;

 VAR_24 = FUNC_0(VAR_18 | VAR_17
   | VAR_19 | VAR_20);
 VAR_25 = FUNC_2(VAR_23, VAR_16, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;


 VAR_24 = FUNC_0(VAR_18 | VAR_17
   | VAR_19 | VAR_20);
 VAR_25 = FUNC_2(VAR_23, VAR_16, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_24 = FUNC_0(VAR_5 | VAR_6);
 VAR_25 = FUNC_2(VAR_23, VAR_4, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_24 = FUNC_0(VAR_10 | VAR_9 | VAR_11
   | FUNC_3(1) | FUNC_4(1)
   | VAR_12);
 VAR_25 = FUNC_2(VAR_23, VAR_8, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_24 = FUNC_0(0xffff0000);
 VAR_25 = FUNC_2(VAR_23, VAR_3, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_24 = FUNC_0(~0);
 VAR_25 = FUNC_2(VAR_23, VAR_21, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;


 FUNC_5(VAR_0);

 VAR_25 = FUNC_2(VAR_23, VAR_2, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_1(VAR_23, VAR_1, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_24 = FUNC_0(VAR_18 | VAR_17);
 VAR_25 = FUNC_2(VAR_23, VAR_16, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_1(VAR_23, VAR_7, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;


 VAR_24 = FUNC_0(VAR_15);
 VAR_25 = FUNC_2(VAR_23, VAR_13, &VAR_24, sizeof(VAR_24));
 if (VAR_25)
  return VAR_25;

 VAR_24 = FUNC_0(VAR_14);
 return FUNC_2(VAR_23, VAR_13, &VAR_24, sizeof(VAR_24));
}
