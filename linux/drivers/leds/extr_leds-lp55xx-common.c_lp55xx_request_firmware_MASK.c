
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp55xx_chip {TYPE_1__* cl; } ;
struct device {int dummy; } ;
struct TYPE_2__ {char* name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char const*,struct device*,int ,struct lp55xx_chip*,int ) ;

__attribute__((used)) static int FUNC_1(struct lp55xx_chip *VAR_3)
{
 const char *VAR_4 = VAR_3->cl->name;
 struct device *VAR_5 = &VAR_3->cl->dev;

 return FUNC_0(VAR_1, 0, VAR_4, VAR_5,
    VAR_0, VAR_3, VAR_2);
}
