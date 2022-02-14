
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * type; } ;


 int FUNC_0 (struct device*,void*) ;
 int FUNC_1 (struct device*,void*,int (*) (struct device*,void*)) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, void *VAR_2)
{
 int VAR_3;

 if (VAR_1->type == &VAR_0)
  VAR_3 = FUNC_1(VAR_1, VAR_2,
      FUNC_2);
 else
  VAR_3 = FUNC_0(VAR_1, VAR_2);

 return VAR_3;
}
