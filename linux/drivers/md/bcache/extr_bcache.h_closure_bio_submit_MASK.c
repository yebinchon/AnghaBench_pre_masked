
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct closure {int dummy; } ;
struct cache_set {int flags; } ;
struct bio {int bi_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct closure*) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static inline void FUNC_5(struct cache_set *VAR_2,
          struct bio *VAR_3,
          struct closure *VAR_4)
{
 FUNC_1(VAR_4);
 if (FUNC_4(FUNC_3(VAR_1, &VAR_2->flags))) {
  VAR_3->bi_status = VAR_0;
  FUNC_0(VAR_3);
  return;
 }
 FUNC_2(VAR_3);
}
