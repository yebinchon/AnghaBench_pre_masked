
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pm860x_chip*,int ) ;
 int FUNC_1 (struct pm860x_chip*,int ) ;

__attribute__((used)) static int FUNC_2(struct pm860x_chip *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = -VAR_0;

 switch (VAR_4) {
 case 0:
 case 1:
 case 2:
  VAR_6 = VAR_5 ? FUNC_1(VAR_3, VAR_1) :
   FUNC_0(VAR_3, VAR_1);
  break;
 case 3:
 case 4:
 case 5:
  VAR_6 = VAR_5 ? FUNC_1(VAR_3, VAR_2) :
   FUNC_0(VAR_3, VAR_2);
  break;
 }
 return VAR_6;
}
