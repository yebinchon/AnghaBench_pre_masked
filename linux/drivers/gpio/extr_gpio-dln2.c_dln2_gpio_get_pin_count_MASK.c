
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
typedef int count ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct platform_device*,int ,int *,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 int VAR_3;
 __le16 VAR_4;
 int VAR_5 = sizeof(VAR_4);

 VAR_3 = FUNC_0(VAR_2, VAR_0, &VAR_4, &VAR_5);
 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_5 < sizeof(VAR_4))
  return -VAR_1;

 return FUNC_1(VAR_4);
}
