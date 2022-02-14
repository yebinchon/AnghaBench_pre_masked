
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devfreq {int lock; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct devfreq*) ;

__attribute__((used)) static int FUNC_3(struct devfreq *VAR_1,
    unsigned int VAR_2, void *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_2 == VAR_0) {
  FUNC_0(&VAR_1->lock);
  VAR_4 = FUNC_2(VAR_1);
  FUNC_1(&VAR_1->lock);
 }

 return VAR_4;
}
