
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serio {int dummy; } ;
struct device {int dummy; } ;
typedef struct atkbd atkbd ;
typedef int ssize_t ;


 struct atkbd* FUNC_0 (struct serio*) ;
 struct serio* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, char *VAR_1,
    ssize_t (*VAR_2)(struct atkbd *, char *))
{
 struct serio *VAR_3 = FUNC_1(VAR_0);
 struct atkbd *VAR_4 = FUNC_0(VAR_3);

 return VAR_2(VAR_4, VAR_1);
}
