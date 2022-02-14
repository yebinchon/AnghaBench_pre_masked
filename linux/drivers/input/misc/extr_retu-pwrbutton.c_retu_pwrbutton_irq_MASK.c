
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct retu_dev {int dummy; } ;
struct input_dev {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct retu_dev* FUNC_0 (struct input_dev*) ;
 int FUNC_1 (struct input_dev*,int ,int) ;
 int FUNC_2 (struct input_dev*) ;
 int FUNC_3 (struct retu_dev*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct input_dev *VAR_6 = VAR_5;
 struct retu_dev *VAR_7 = FUNC_0(VAR_6);
 bool VAR_8;

 VAR_8 = !(FUNC_3(VAR_7, VAR_2) & VAR_3);
 FUNC_1(VAR_6, VAR_1, VAR_8);
 FUNC_2(VAR_6);

 return VAR_0;
}
