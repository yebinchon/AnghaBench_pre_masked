
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_step {int (* fn ) (struct opal_dev*,int ) ;int data; } ;
struct opal_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,int (*) (struct opal_dev*,int ),int,int ) ;
 int FUNC_2 (struct opal_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_0,
   const struct opal_step *VAR_1, size_t VAR_2)
{
 int VAR_3 = VAR_1->fn(VAR_0, VAR_1->data);

 if (VAR_3) {
  FUNC_1("Step %zu (%pS) failed with error %d: %s\n",
    VAR_2, VAR_1->fn, VAR_3,
    FUNC_0(VAR_3));
 }

 return VAR_3;
}
