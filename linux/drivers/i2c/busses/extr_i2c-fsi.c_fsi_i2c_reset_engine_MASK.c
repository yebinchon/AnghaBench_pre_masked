
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct fsi_i2c_master {int fsi; } ;


 int FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct fsi_i2c_master*) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct fsi_i2c_master *VAR_5, u16 VAR_6)
{
 int VAR_7;
 u32 VAR_8, VAR_9 = 0;


 VAR_7 = FUNC_3(VAR_5->fsi, VAR_2, &VAR_9);
 if (VAR_7)
  return VAR_7;


 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_5->fsi, VAR_0, &VAR_8);
 if (VAR_7)
  return VAR_7;


 if (VAR_6) {
  VAR_8 &= ~VAR_3;
  VAR_8 |= FUNC_0(VAR_3, VAR_6);
  VAR_7 = FUNC_3(VAR_5->fsi, VAR_0, &VAR_8);
  if (VAR_7)
   return VAR_7;
 }


 VAR_9 = VAR_4;
 VAR_7 = FUNC_3(VAR_5->fsi, VAR_1, &VAR_9);
 if (VAR_7)
  return VAR_7;

 return 0;
}
