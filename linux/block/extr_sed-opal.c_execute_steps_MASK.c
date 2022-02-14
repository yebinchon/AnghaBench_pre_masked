
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opal_step {int dummy; } ;
struct opal_dev {int dummy; } ;


 int FUNC_0 (struct opal_dev*) ;
 int FUNC_1 (struct opal_dev*,struct opal_step const*,size_t) ;
 int FUNC_2 (struct opal_dev*) ;

__attribute__((used)) static int FUNC_3(struct opal_dev *VAR_0,
    const struct opal_step *VAR_1, size_t VAR_2)
{
 size_t VAR_3 = 0;
 int VAR_4;


 VAR_4 = FUNC_2(VAR_0);
 if (VAR_4)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_1(VAR_0, &VAR_1[VAR_3], VAR_3);
  if (VAR_4)
   goto out_error;
 }

 return 0;

out_error:
 if (VAR_3 > 0)
  FUNC_0(VAR_0);

 return VAR_4;
}
