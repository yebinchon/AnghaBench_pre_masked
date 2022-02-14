
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c24xx_i2c {int msg_idx; int quirks; int wait; scalar_t__ msg_num; int * msg; scalar_t__ msg_ptr; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct s3c24xx_i2c *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1->dev, "master_complete %d\n", VAR_2);

 VAR_1->msg_ptr = 0;
 VAR_1->msg = ((void*)0);
 VAR_1->msg_idx++;
 VAR_1->msg_num = 0;
 if (VAR_2)
  VAR_1->msg_idx = VAR_2;

 if (!(VAR_1->quirks & VAR_0))
  FUNC_1(&VAR_1->wait);
}
