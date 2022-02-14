
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fsi_slave {int link; int dev; int id; struct fsi_master* master; } ;
struct fsi_master {int dummy; } ;
typedef int stat ;
typedef int irq ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (struct fsi_master*,int,int ,scalar_t__,int *,int) ;
 int FUNC_3 (struct fsi_master*,int,int ,scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_4(struct fsi_slave *VAR_3)
{
 struct fsi_master *VAR_4 = VAR_3->master;
 __be32 VAR_5, VAR_6;
 int VAR_7, VAR_8;
 uint8_t VAR_9;

 VAR_8 = VAR_3->link;
 VAR_9 = VAR_3->id;

 VAR_7 = FUNC_2(VAR_4, VAR_8, VAR_9, VAR_1 + VAR_0,
   &VAR_5, sizeof(VAR_5));
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_8, VAR_9, VAR_1 + VAR_2,
   &VAR_6, sizeof(VAR_6));
 if (VAR_7)
  return VAR_7;

 FUNC_1(&VAR_3->dev, "status: 0x%08x, sisc: 0x%08x\n",
   FUNC_0(VAR_6), FUNC_0(VAR_5));


 return FUNC_3(VAR_4, VAR_8, VAR_9, VAR_1 + VAR_0,
   &VAR_5, sizeof(VAR_5));
}
