
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda9950_glue {int (* init ) (int ) ;int data; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int (*) (struct tda9950_glue*),struct tda9950_glue*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tda9950_glue*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct tda9950_glue *VAR_1)
{
 int VAR_2;

 if (VAR_1 && VAR_1->init) {
  VAR_2 = VAR_1->init(VAR_1->data);
  if (VAR_2)
   return VAR_2;
 }

 VAR_2 = FUNC_0(VAR_0, FUNC_2, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_1);

 return VAR_2;
}
