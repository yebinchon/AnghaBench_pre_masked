
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_dev {int sb; int has_dirty; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct cached_dev*,int *) ;
 int FUNC_5 (struct cached_dev*) ;

__attribute__((used)) static inline void FUNC_6(struct cached_dev *VAR_1)
{
 if (!FUNC_2(&VAR_1->has_dirty) &&
     !FUNC_3(&VAR_1->has_dirty, 1)) {
  if (FUNC_0(&VAR_1->sb) != VAR_0) {
   FUNC_1(&VAR_1->sb, VAR_0);

   FUNC_4(VAR_1, ((void*)0));
  }

  FUNC_5(VAR_1);
 }
}
