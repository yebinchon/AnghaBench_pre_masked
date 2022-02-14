
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {int user_count; int buf_mutex; int iter_list; } ;
struct intel_th_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct msc* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct msc*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct intel_th_device *VAR_2)
{
 struct msc *VAR_3 = FUNC_2(&VAR_2->dev);
 int VAR_4 = -VAR_0;

 if (!FUNC_1(&VAR_3->user_count))
  return -VAR_1;

 FUNC_5(&VAR_3->buf_mutex);


 if (FUNC_3(&VAR_3->iter_list))
  VAR_4 = FUNC_4(VAR_3);

 FUNC_6(&VAR_3->buf_mutex);

 if (VAR_4)
  FUNC_0(&VAR_3->user_count);

 return VAR_4;
}
