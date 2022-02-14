
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct coresight_device {int dev; } ;




 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct coresight_device*,void*) ;
 int FUNC_2 (struct coresight_device*) ;

__attribute__((used)) static int FUNC_3(struct coresight_device *VAR_1, u32 VAR_2, void *VAR_3)
{
 int VAR_4;

 switch (VAR_2) {
 case 128:
  VAR_4 = FUNC_2(VAR_1);
  break;
 case 129:
  VAR_4 = FUNC_1(VAR_1, VAR_3);
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_1->dev, "ETB enabled\n");
 return 0;
}
