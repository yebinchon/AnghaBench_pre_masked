
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsi_i2c_master {int fsi; scalar_t__ fifo_size; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(struct fsi_i2c_master *VAR_12)
{
 int VAR_13;
 u32 VAR_14 = VAR_9, VAR_15, VAR_16;
 u32 VAR_17 = 0;


 VAR_13 = FUNC_3(VAR_12->fsi, VAR_5, &VAR_17);
 if (VAR_13)
  return VAR_13;

 VAR_14 |= FUNC_1(VAR_8, VAR_0);
 VAR_13 = FUNC_3(VAR_12->fsi, VAR_6, &VAR_14);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_2(VAR_12->fsi, VAR_4, &VAR_15);
 if (VAR_13)
  return VAR_13;

 VAR_12->fifo_size = FUNC_0(VAR_1, VAR_15);
 VAR_16 = FUNC_1(VAR_10,
          VAR_12->fifo_size - VAR_2);
 VAR_16 |= FUNC_1(VAR_11, VAR_3);

 return FUNC_3(VAR_12->fsi, VAR_7, &VAR_16);
}
