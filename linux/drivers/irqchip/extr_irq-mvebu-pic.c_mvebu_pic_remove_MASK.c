
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mvebu_pic {int domain; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct mvebu_pic*,int) ;
 struct mvebu_pic* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct mvebu_pic *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_0, VAR_2, 1);
 FUNC_0(VAR_2->domain);

 return 0;
}
