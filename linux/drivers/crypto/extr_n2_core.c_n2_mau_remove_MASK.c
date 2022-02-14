
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct n2_mau {int mau_list; } ;


 struct n2_mau* FUNC_0 (int *) ;
 int FUNC_1 (struct n2_mau*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct n2_mau *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_3(&VAR_1->mau_list);

 FUNC_2();

 FUNC_1(VAR_1);

 return 0;
}
