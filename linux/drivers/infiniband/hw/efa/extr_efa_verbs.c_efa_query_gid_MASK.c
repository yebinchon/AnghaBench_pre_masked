
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {int raw; } ;
typedef int u8 ;
struct ib_device {int dummy; } ;
struct efa_dev {int addr; } ;


 int FUNC_0 (int ,int ,int) ;
 struct efa_dev* FUNC_1 (struct ib_device*) ;

int FUNC_2(struct ib_device *VAR_0, u8 VAR_1, int VAR_2,
    union ib_gid *VAR_3)
{
 struct efa_dev *VAR_4 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->raw, VAR_4->addr, sizeof(VAR_4->addr));

 return 0;
}
