
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cyclic_views_entry {int ad_id; } ;
struct advert {scalar_t__ recent_views; } ;


 int FUNC_0 (int) ;
 struct advert* FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2 (struct cyclic_views_entry *VAR_0) {
  struct advert *VAR_1 = FUNC_1 (VAR_0->ad_id);
  FUNC_0 (!VAR_1 || --VAR_1->recent_views >= 0);
}
