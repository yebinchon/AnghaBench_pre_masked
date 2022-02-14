
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int flags; scalar_t__ disabled_since; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline int FUNC_0 (struct advert *VAR_3) {
  return !(VAR_3->flags & VAR_0) && VAR_3->disabled_since <= VAR_2 - VAR_1;
}
