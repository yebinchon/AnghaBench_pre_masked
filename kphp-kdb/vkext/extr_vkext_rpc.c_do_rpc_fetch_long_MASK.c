
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,long long*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 char* FUNC_5 (char*) ;

long long FUNC_6 (char **VAR_3) {
  FUNC_0 (VAR_1);
  FUNC_2 (VAR_1);
  if (!VAR_2) {
    *VAR_3 = FUNC_5 ("Trying to fetch from empty buffer\n");
    return 0;
  }
  FUNC_3 (VAR_2->magic == VAR_0);

  long long VAR_4;
  if (FUNC_4 (VAR_2, &VAR_4) < 0) {
    *VAR_3 = FUNC_5 ("Can not fetch long from inbuf");
    FUNC_1 (VAR_1);
    return 0;
  } else {
    FUNC_1 (VAR_1);
    *VAR_3 = 0;
    return VAR_4;
  }
}
