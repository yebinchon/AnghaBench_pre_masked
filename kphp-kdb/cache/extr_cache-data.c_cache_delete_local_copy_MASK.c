
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct cache_uri {int dummy; } ;
struct cache_local_copy {int flags; int location; } ;
struct TYPE_8__ {int location; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (struct cache_uri*,TYPE_1__*,int,int,int*) ;
 int FUNC_2 (struct cache_uri*,struct cache_local_copy*) ;
 int FUNC_3 (struct cache_uri*,TYPE_1__*) ;
 int FUNC_4 (struct cache_uri*,TYPE_1__*) ;
 int FUNC_5 (struct cache_uri*,TYPE_1__*,int,int) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7 (struct cache_uri *VAR_3, struct cache_local_copy *VAR_4) {
  int VAR_5, VAR_6, VAR_7;
  VAR_6 = FUNC_1 (VAR_3, VAR_2, VAR_1, 1, &VAR_7);
  if (VAR_6 < 0 || VAR_6 >= VAR_1) {
    return -1;
  }
  if (VAR_4->flags & VAR_0) {
    FUNC_2 (VAR_3, VAR_4);
  }
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
    if (!FUNC_6 (VAR_2[VAR_5].location, VAR_4->location)) {
      break;
    }
  }
  if (VAR_5 >= VAR_6) {
    return -1;
  }




  FUNC_4 (VAR_3, VAR_2 + VAR_5);

  VAR_6--;
  if (VAR_5 != VAR_6) {
    FUNC_0 (&VAR_2[VAR_5], &VAR_2[VAR_6]);
  }
  return FUNC_5 (VAR_3, VAR_2, VAR_6, VAR_7);
}
