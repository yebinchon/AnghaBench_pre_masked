
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsi_master_acf {int lock; int dev; scalar_t__ external_mode; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct fsi_master_acf*,int ) ;
 int FUNC_2 (struct fsi_master_acf*,int ,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct fsi_master_acf* FUNC_5 (struct fsi_master*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct fsi_master *VAR_3, int VAR_4)
{
 struct fsi_master_acf *VAR_5 = FUNC_5(VAR_3);
 int VAR_6;

 if (VAR_4 != 0)
  return -VAR_2;

 FUNC_3(&VAR_5->lock);
 if (VAR_5->external_mode) {
  FUNC_4(&VAR_5->lock);
  return -VAR_1;
 }
 FUNC_0(VAR_5->dev, "sending BREAK\n");
 VAR_6 = FUNC_1(VAR_5, VAR_0);
 FUNC_2(VAR_5, 0, 0, 0);
 FUNC_4(&VAR_5->lock);


 FUNC_6(200);

 return VAR_6;
}
