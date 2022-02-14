
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1111_dev {scalar_t__ devid; } ;
struct sa1111 {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sa1111*) ;
 int FUNC_1 (scalar_t__) ;
 struct sa1111* FUNC_2 (struct sa1111_dev*) ;

int FUNC_3(struct sa1111_dev *VAR_3)
{
 struct sa1111 *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 if (VAR_3->devid != VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_4->base + VAR_2) + 1;

 return FUNC_0(VAR_4) / (256 * VAR_5);
}
