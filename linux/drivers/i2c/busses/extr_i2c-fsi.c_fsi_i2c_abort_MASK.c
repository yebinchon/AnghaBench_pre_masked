
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_i2c_port {int port; struct fsi_i2c_master* master; } ;
struct fsi_i2c_master {struct fsi_device* fsi; } ;
struct fsi_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct fsi_device*,int ,int*) ;
 int FUNC_1 (struct fsi_i2c_master*,struct fsi_i2c_port*) ;
 int FUNC_2 (struct fsi_i2c_master*,int ) ;
 int FUNC_3 (struct fsi_device*,int ,int*) ;
 unsigned long VAR_12 ;
 scalar_t__ FUNC_4 (scalar_t__,unsigned long) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct fsi_i2c_port *VAR_13, u32 VAR_14)
{
 int VAR_15;
 unsigned long VAR_16;
 u32 VAR_17 = VAR_4;
 u32 VAR_18;
 struct fsi_i2c_master *VAR_19 = VAR_13->master;
 struct fsi_device *VAR_20 = VAR_19->fsi;

 VAR_15 = FUNC_2(VAR_19, VAR_13->port);
 if (VAR_15)
  return VAR_15;

 VAR_15 = FUNC_0(VAR_20, VAR_6, &VAR_18);
 if (VAR_15)
  return VAR_15;


 if (!(VAR_18 & VAR_10)) {
  VAR_15 = FUNC_1(VAR_19, VAR_13);
  if (VAR_15)
   return VAR_15;
 }


 if (VAR_14 & (VAR_9 | VAR_8 | VAR_11))
  return 0;


 VAR_15 = FUNC_3(VAR_20, VAR_5, &VAR_17);
 if (VAR_15)
  return VAR_15;


 VAR_16 = VAR_12;

 do {
  VAR_15 = FUNC_0(VAR_20, VAR_6, &VAR_14);
  if (VAR_15)
   return VAR_15;

  if (VAR_14 & VAR_7)
   return 0;

  FUNC_5(VAR_3, VAR_2);
 } while (FUNC_4(VAR_16 + VAR_1, VAR_12));

 return -VAR_0;
}
