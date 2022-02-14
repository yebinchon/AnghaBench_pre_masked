
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fsi_msg {int dummy; } ;
struct fsi_master_acf {int lock; int dev; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_msg*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct fsi_master_acf*,int ,struct fsi_msg*,int ,int *) ;
 int FUNC_3 (struct fsi_master_acf*,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fsi_master_acf* FUNC_6 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_7(struct fsi_master *VAR_1,
          int VAR_2, uint8_t VAR_3)
{
 struct fsi_master_acf *VAR_4 = FUNC_6(VAR_1);
 struct fsi_msg VAR_5;
 int VAR_6;

 if (VAR_2 != 0)
  return -VAR_0;

 FUNC_4(&VAR_4->lock);
 FUNC_0(&VAR_5, VAR_3);
 FUNC_1(VAR_4->dev, "term id %d\n", VAR_3);
 VAR_6 = FUNC_2(VAR_4, VAR_3, &VAR_5, 0, ((void*)0));
 FUNC_3(VAR_4, VAR_3, 0, 0);
 FUNC_5(&VAR_4->lock);

 return VAR_6;
}
