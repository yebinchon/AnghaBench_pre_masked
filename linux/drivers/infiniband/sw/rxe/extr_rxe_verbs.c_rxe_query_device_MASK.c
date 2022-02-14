
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_device_attr {int dummy; } ;
struct rxe_dev {struct ib_device_attr attr; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 struct rxe_dev* FUNC_0 (struct ib_device*) ;

__attribute__((used)) static int FUNC_1(struct ib_device *VAR_1,
       struct ib_device_attr *VAR_2,
       struct ib_udata *VAR_3)
{
 struct rxe_dev *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->inlen || VAR_3->outlen)
  return -VAR_0;

 *VAR_2 = VAR_4->attr;
 return 0;
}
