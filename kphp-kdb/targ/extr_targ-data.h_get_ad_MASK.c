
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int ad_id; struct advert* hash_next; } ;


 int VAR_0 ;
 struct advert** VAR_1 ;

__attribute__((used)) static inline struct advert *FUNC_0 (int VAR_2) {
  struct advert *VAR_3;
  for (VAR_3 = VAR_1[VAR_2 & (VAR_0 - 1)]; VAR_3 && VAR_3->ad_id != VAR_2; VAR_3 = VAR_3->hash_next);
  return VAR_3;
}
