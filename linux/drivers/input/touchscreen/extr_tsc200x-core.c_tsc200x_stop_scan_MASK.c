
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc200x {int dev; int (* tsc200x_cmd ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct tsc200x *VAR_1)
{
 VAR_1->tsc200x_cmd(VAR_1->dev, VAR_0);
}
