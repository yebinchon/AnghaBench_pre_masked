
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* fetch_lookup ) (char*,int) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2 (char *VAR_1, int VAR_2) {
  if (FUNC_1 (VAR_2) < 0) {
    return -1;
  }
  VAR_0->fetch_lookup (VAR_1, VAR_2);
  return VAR_2;
}
