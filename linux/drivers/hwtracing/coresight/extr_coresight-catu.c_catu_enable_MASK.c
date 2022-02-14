
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coresight_device {int dummy; } ;
struct catu_drvdata {int base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct catu_drvdata*,void*) ;
 struct catu_drvdata* FUNC_3 (struct coresight_device*) ;

__attribute__((used)) static int FUNC_4(struct coresight_device *VAR_0, void *VAR_1)
{
 int VAR_2;
 struct catu_drvdata *VAR_3 = FUNC_3(VAR_0);

 FUNC_1(VAR_3->base);
 VAR_2 = FUNC_2(VAR_3, VAR_1);
 FUNC_0(VAR_3->base);
 return VAR_2;
}
