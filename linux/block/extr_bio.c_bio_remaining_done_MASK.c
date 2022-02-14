
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int __bi_remaining; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*,int ) ;

__attribute__((used)) static inline bool FUNC_5(struct bio *VAR_1)
{




 if (!FUNC_4(VAR_1, VAR_0))
  return 1;

 FUNC_0(FUNC_2(&VAR_1->__bi_remaining) <= 0);

 if (FUNC_1(&VAR_1->__bi_remaining)) {
  FUNC_3(VAR_1, VAR_0);
  return 1;
 }

 return 0;
}
