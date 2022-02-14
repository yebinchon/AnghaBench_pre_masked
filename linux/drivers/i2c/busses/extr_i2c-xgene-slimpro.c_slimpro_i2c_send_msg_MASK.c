
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct slimpro_i2c_dev {int * resp_msg; int mbox_chan; int rd_complete; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct slimpro_i2c_dev*,int *) ;
 int FUNC_4 (struct slimpro_i2c_dev*) ;

__attribute__((used)) static int FUNC_5(struct slimpro_i2c_dev *VAR_1,
    u32 *VAR_2,
    u32 *VAR_3)
{
 int VAR_4;

 VAR_1->resp_msg = VAR_3;

 if (!VAR_0) {
  FUNC_2(&VAR_1->rd_complete);
  FUNC_3(VAR_1, VAR_2);
 }

 VAR_4 = FUNC_1(VAR_1->mbox_chan, VAR_2);
 if (VAR_4 < 0)
  goto err;

 VAR_4 = FUNC_4(VAR_1);

err:
 if (!VAR_0)
  FUNC_0(VAR_1->mbox_chan, 0);

 VAR_1->resp_msg = ((void*)0);

 return VAR_4;
}
