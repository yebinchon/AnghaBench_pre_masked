
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fsi_msg {int dummy; } ;
struct fsi_master_acf {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct fsi_master_acf*,int ,size_t,void*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct fsi_master_acf*,struct fsi_msg*,size_t) ;

__attribute__((used)) static int FUNC_5(struct fsi_master_acf *VAR_4, uint8_t VAR_5,
          struct fsi_msg *VAR_6, size_t VAR_7, void *VAR_8)
{
 int VAR_9 = -VAR_0, VAR_10 = 0;

 VAR_7 <<= 3;
 while ((VAR_10++) < VAR_3) {
  VAR_9 = FUNC_4(VAR_4, VAR_6, VAR_7);
  if (VAR_9) {
   if (VAR_9 != -VAR_2)
    FUNC_1(VAR_4->dev, "Error %d sending command\n", VAR_9);
   break;
  }
  VAR_9 = FUNC_2(VAR_4, VAR_5, VAR_7, VAR_8);
  if (VAR_9 != -VAR_0)
   break;
  VAR_9 = -VAR_1;
  FUNC_0(VAR_4->dev, "ECRC retry %d\n", VAR_10);


  FUNC_3(1);
 }

 return VAR_9;
}
