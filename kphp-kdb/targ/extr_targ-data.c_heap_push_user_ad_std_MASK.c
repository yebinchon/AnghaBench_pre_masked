
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intree_node {int x; int z; } ;
struct advert {int flags; scalar_t__ recent_views; scalar_t__ recent_views_limit; scalar_t__ price; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 double FUNC_0 (struct advert*,int,int ) ;
 struct advert* FUNC_1 (int) ;
 int FUNC_2 (double,struct advert*,int) ;

int FUNC_3 (struct intree_node *VAR_6) {
  int VAR_7 = VAR_6->x;
  if (VAR_7 == VAR_2) {
    return 1;
  }
  int VAR_8 = VAR_6->z;
  struct advert *VAR_9 = FUNC_1 (VAR_7);
  if ((VAR_9->flags ^ VAR_5) & VAR_1) {
    return 1;
  }
  if (VAR_3 && VAR_9->recent_views >= VAR_9->recent_views_limit) {
    return 1;
  }
  if ((VAR_9->flags & VAR_0) && VAR_9->price <= 0 && VAR_8 >= 100) {
    return 1;
  }
  double VAR_10 = FUNC_0 (VAR_9, VAR_8, VAR_4);
  FUNC_2 (VAR_10, VAR_9, VAR_8);
  return 1;
}
