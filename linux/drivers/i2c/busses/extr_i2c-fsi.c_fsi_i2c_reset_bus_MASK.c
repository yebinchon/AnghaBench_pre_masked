
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_i2c_port {int adapter; } ;
struct fsi_i2c_master {int fsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fsi_i2c_master*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct fsi_i2c_master *VAR_6,
        struct fsi_i2c_port *VAR_7)
{
 int VAR_8;
 u32 VAR_9, VAR_10 = 0;


 FUNC_3(&VAR_7->adapter);


 VAR_8 = FUNC_2(VAR_6->fsi, VAR_0, &VAR_10);
 if (VAR_8)
  return VAR_8;


 FUNC_4(VAR_4, VAR_3);

 VAR_8 = FUNC_1(VAR_6->fsi, VAR_2, &VAR_9);
 if (VAR_8)
  return VAR_8;

 if (VAR_9 & VAR_5)
  return 0;


 VAR_8 = FUNC_2(VAR_6->fsi, VAR_1, &VAR_10);
 if (VAR_8)
  return VAR_8;


 return FUNC_0(VAR_6);
}
