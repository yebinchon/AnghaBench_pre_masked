
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stu300_dev {scalar_t__ virtbase; int adapter; } ;
struct platform_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct stu300_dev* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct stu300_dev *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_2->adapter);

 FUNC_2(0x00, VAR_2->virtbase + VAR_0);
 return 0;
}
