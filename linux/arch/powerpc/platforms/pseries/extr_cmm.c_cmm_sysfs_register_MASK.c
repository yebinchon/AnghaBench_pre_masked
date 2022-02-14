
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int * bus; scalar_t__ id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int *,int *) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2)
{
 int VAR_3, VAR_4;

 if ((VAR_4 = FUNC_6(&VAR_1, ((void*)0))))
  return VAR_4;

 VAR_2->id = 0;
 VAR_2->bus = &VAR_1;

 if ((VAR_4 = FUNC_3(VAR_2)))
  goto subsys_unregister;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if ((VAR_4 = FUNC_2(VAR_2, VAR_0[VAR_3])))
   goto fail;
 }

 return 0;

fail:
 while (--VAR_3 >= 0)
  FUNC_4(VAR_2, VAR_0[VAR_3]);
 FUNC_5(VAR_2);
subsys_unregister:
 FUNC_1(&VAR_1);
 return VAR_4;
}
