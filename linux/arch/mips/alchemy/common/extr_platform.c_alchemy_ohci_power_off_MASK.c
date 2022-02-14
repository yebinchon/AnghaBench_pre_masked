
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct platform_device *VAR_2)
{
 int VAR_3;

 VAR_3 = (VAR_2->id == 1) ?
  VAR_1 : VAR_0;

 FUNC_0(VAR_3, 0);
}
