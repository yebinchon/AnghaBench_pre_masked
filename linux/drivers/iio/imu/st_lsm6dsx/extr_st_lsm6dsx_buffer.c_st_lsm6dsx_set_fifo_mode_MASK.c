
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_lsm6dsx_hw {int fifo_mode; } ;
typedef enum st_lsm6dsx_fifo_mode { ____Placeholder_st_lsm6dsx_fifo_mode } st_lsm6dsx_fifo_mode ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct st_lsm6dsx_hw*,int ,int ,unsigned int) ;

int FUNC_2(struct st_lsm6dsx_hw *VAR_2,
        enum st_lsm6dsx_fifo_mode VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_0, VAR_3);
 VAR_5 = FUNC_1(VAR_2, VAR_1,
         VAR_0, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_2->fifo_mode = VAR_3;

 return 0;
}
