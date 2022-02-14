
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_th_device {int dev; } ;
struct gth_device {int* master; int gth_lock; TYPE_1__* output; } ;
struct TYPE_2__ {int master; } ;


 unsigned int VAR_0 ;
 struct gth_device* FUNC_0 (int *) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(struct intel_th_device *VAR_1, unsigned int VAR_2)
{
 struct gth_device *VAR_3 = FUNC_0(&VAR_1->dev);
 int VAR_4 = 0;





 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 FUNC_2(&VAR_3->gth_lock);
 if (VAR_3->master[VAR_2] == -1) {
  FUNC_1(VAR_2, VAR_3->output[VAR_4].master);
  VAR_3->master[VAR_2] = VAR_4;
 }
 FUNC_3(&VAR_3->gth_lock);

 return 0;
}
