
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5p_aes_dev {int busy; int tasklet; int lock; int queue; } ;
struct ablkcipher_request {int dummy; } ;


 int FUNC_0 (int *,struct ablkcipher_request*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct s5p_aes_dev *VAR_0,
         struct ablkcipher_request *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_3 = FUNC_0(&VAR_0->queue, VAR_1);
 if (VAR_0->busy) {
  FUNC_2(&VAR_0->lock, VAR_2);
  return VAR_3;
 }
 VAR_0->busy = 1;

 FUNC_2(&VAR_0->lock, VAR_2);

 FUNC_3(&VAR_0->tasklet);

 return VAR_3;
}
