
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cdn_dp_device {int dev; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
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
 int FUNC_1 (struct cdn_dp_device*,int ,int ,int,int*) ;
 int FUNC_2 (struct cdn_dp_device*,int ,int ) ;

int FUNC_3(struct cdn_dp_device *VAR_16, u8 VAR_17, bool VAR_18)
{
 u8 VAR_19[8];
 int VAR_20;

 VAR_19[0] = VAR_1;
 VAR_19[1] = VAR_17 | VAR_14;
 VAR_19[2] = VAR_15;
 VAR_19[3] = VAR_9;
 VAR_19[4] = VAR_10 | VAR_11 | VAR_12 | VAR_13;
 VAR_19[5] = VAR_5;
 VAR_19[6] = VAR_18 ? VAR_6 : VAR_7;
 VAR_19[7] = VAR_4;

 VAR_20 = FUNC_1(VAR_16, VAR_8,
      VAR_2,
      sizeof(VAR_19), VAR_19);
 if (VAR_20)
  goto err_set_host_cap;

 VAR_20 = FUNC_2(VAR_16, VAR_3,
          VAR_0);

err_set_host_cap:
 if (VAR_20)
  FUNC_0(VAR_16->dev, "set host cap failed: %d\n", VAR_20);
 return VAR_20;
}
