
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_msg {int dummy; } ;
struct fsi_master_acf {int lock; int dev; } ;
struct fsi_master {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsi_master_acf*,struct fsi_msg*,int ,int ,size_t,int *) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (struct fsi_master_acf*,int ,struct fsi_msg*,size_t,void*) ;
 int FUNC_3 (struct fsi_master_acf*,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct fsi_master_acf* FUNC_6 (struct fsi_master*) ;

__attribute__((used)) static int FUNC_7(struct fsi_master *VAR_1, int VAR_2,
          uint8_t VAR_3, uint32_t VAR_4, void *VAR_5,
          size_t VAR_6)
{
 struct fsi_master_acf *VAR_7 = FUNC_6(VAR_1);
 struct fsi_msg VAR_8;
 int VAR_9;

 if (VAR_2 != 0)
  return -VAR_0;

 FUNC_4(&VAR_7->lock);
 FUNC_1(VAR_7->dev, "read id %d addr %x size %zd\n", VAR_3, VAR_4, VAR_6);
 FUNC_0(VAR_7, &VAR_8, VAR_3, VAR_4, VAR_6, ((void*)0));
 VAR_9 = FUNC_2(VAR_7, VAR_3, &VAR_8, VAR_6, VAR_5);
 FUNC_3(VAR_7, VAR_3, VAR_9 == 0, VAR_4);
 if (VAR_9)
  FUNC_1(VAR_7->dev, "read id %d addr 0x%08x err: %d\n",
   VAR_3, VAR_4, VAR_9);
 FUNC_5(&VAR_7->lock);

 return VAR_9;
}
