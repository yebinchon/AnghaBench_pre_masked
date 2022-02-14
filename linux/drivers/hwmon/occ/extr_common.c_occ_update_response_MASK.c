
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occ {int last_error; int lock; scalar_t__ last_update; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct occ*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

int FUNC_4(struct occ *VAR_2)
{
 int VAR_3 = FUNC_0(&VAR_2->lock);

 if (VAR_3)
  return VAR_3;


 if (FUNC_3(VAR_1, VAR_2->last_update + VAR_0)) {
  VAR_3 = FUNC_2(VAR_2);
  VAR_2->last_update = VAR_1;
 } else {
  VAR_3 = VAR_2->last_error;
 }

 FUNC_1(&VAR_2->lock);
 return VAR_3;
}
