
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct panfrost_device*,int ) ;
 int FUNC_1 (struct panfrost_device*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct panfrost_device *VAR_6 = VAR_5;

 if (!FUNC_0(VAR_6, VAR_3))
  return VAR_0;

 FUNC_1(VAR_6, VAR_2, 0);
 return VAR_1;
}
