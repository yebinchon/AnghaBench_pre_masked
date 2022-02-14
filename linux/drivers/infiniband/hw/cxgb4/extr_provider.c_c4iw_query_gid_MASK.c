
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


union ib_gid {int * raw; } ;
typedef int u8 ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {TYPE_1__** ports; } ;
struct TYPE_6__ {TYPE_2__ lldi; } ;
struct c4iw_dev {TYPE_3__ rdev; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (char*,struct ib_device*,int,int,union ib_gid*) ;
 struct c4iw_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_1, u8 VAR_2, int VAR_3,
     union ib_gid *VAR_4)
{
 struct c4iw_dev *VAR_5;

 FUNC_2("ibdev %p, port %d, index %d, gid %p\n",
   VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_2)
  return -VAR_0;
 VAR_5 = FUNC_3(VAR_1);
 FUNC_1(&(VAR_4->raw[0]), 0, sizeof(VAR_4->raw));
 FUNC_0(&(VAR_4->raw[0]), VAR_5->rdev.lldi.ports[VAR_2-1]->dev_addr, 6);
 return 0;
}
