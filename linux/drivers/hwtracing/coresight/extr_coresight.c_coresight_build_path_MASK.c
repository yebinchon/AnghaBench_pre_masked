
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct coresight_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct list_head* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (struct coresight_device*,struct coresight_device*,struct list_head*) ;
 int FUNC_3 (struct list_head*) ;
 struct list_head* FUNC_4 (int,int ) ;

struct list_head *FUNC_5(struct coresight_device *VAR_3,
           struct coresight_device *VAR_4)
{
 struct list_head *VAR_5;
 int VAR_6;

 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_4(sizeof(struct list_head), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);

 FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_5);
  return FUNC_0(VAR_6);
 }

 return VAR_5;
}
