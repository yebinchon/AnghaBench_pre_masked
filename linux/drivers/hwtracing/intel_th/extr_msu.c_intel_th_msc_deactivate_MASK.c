
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc {int buf_mutex; int user_count; scalar_t__ enabled; } ;
struct intel_th_device {int dev; } ;


 int FUNC_0 (int *) ;
 struct msc* FUNC_1 (int *) ;
 int FUNC_2 (struct msc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct intel_th_device *VAR_0)
{
 struct msc *VAR_1 = FUNC_1(&VAR_0->dev);

 FUNC_3(&VAR_1->buf_mutex);
 if (VAR_1->enabled) {
  FUNC_2(VAR_1);
  FUNC_0(&VAR_1->user_count);
 }
 FUNC_4(&VAR_1->buf_mutex);
}
