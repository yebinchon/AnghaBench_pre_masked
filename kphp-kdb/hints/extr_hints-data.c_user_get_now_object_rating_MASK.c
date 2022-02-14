
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
typedef TYPE_1__ user ;
typedef double rating ;


 scalar_t__ FUNC_0 (int ) ;
 double VAR_0 ;
 double FUNC_1 (double) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 double* FUNC_2 (TYPE_1__*,int,int) ;

rating FUNC_3 (user *VAR_4, int VAR_5, int VAR_6) {
  if (FUNC_0(VAR_4->flags) == 0) {
    return 0.0;
  }

  rating VAR_7 = *FUNC_2 (VAR_4, VAR_5, VAR_6);
  if (VAR_1) {
    VAR_7 *= FUNC_1 (((rating)(VAR_3 - VAR_2)) / VAR_0);
  }
  return VAR_7;
}
