
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g2d_runqueue_node {scalar_t__ async; int complete; struct drm_file* filp; } ;
struct g2d_data {int runqueue_mutex; struct g2d_runqueue_node* runqueue_node; struct device* dev; } ;
struct drm_file {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct g2d_data*,struct g2d_runqueue_node*) ;
 int FUNC_3 (struct g2d_data*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;

__attribute__((used)) static void FUNC_9(struct g2d_data *VAR_0, struct drm_file *VAR_1)
{
 struct device *VAR_2 = VAR_0->dev;

 struct g2d_runqueue_node *VAR_3 = ((void*)0);
 unsigned int VAR_4 = 10;

 FUNC_5(&VAR_0->runqueue_mutex);


 if (!VAR_0->runqueue_node)
  goto out;

 VAR_3 = VAR_0->runqueue_node;


 if (VAR_1 && VAR_3->filp != VAR_1)
  goto out;

 FUNC_6(&VAR_0->runqueue_mutex);


 while (VAR_4-- && (VAR_0->runqueue_node == VAR_3))
  FUNC_4(10);

 FUNC_5(&VAR_0->runqueue_mutex);

 if (VAR_0->runqueue_node != VAR_3)
  goto out;

 FUNC_1(VAR_2, "wait timed out, resetting engine...\n");
 FUNC_3(VAR_0);






 FUNC_7(VAR_2);
 FUNC_8(VAR_2);

 FUNC_0(&VAR_3->complete);
 if (VAR_3->async)
  FUNC_2(VAR_0, VAR_3);

out:
 FUNC_6(&VAR_0->runqueue_mutex);
}
