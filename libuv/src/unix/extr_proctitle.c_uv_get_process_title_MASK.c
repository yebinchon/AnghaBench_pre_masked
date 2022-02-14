
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t len; int str; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

int FUNC_4(char* VAR_6, size_t VAR_7) {
  if (VAR_6 == ((void*)0) || VAR_7 == 0)
    return VAR_0;

  FUNC_3(&VAR_5, VAR_2);
  FUNC_1(&VAR_4);

  if (VAR_7 <= VAR_3.len) {
    FUNC_2(&VAR_4);
    return VAR_1;
  }

  if (VAR_3.len != 0)
    FUNC_0(VAR_6, VAR_3.str, VAR_3.len + 1);

  VAR_6[VAR_3.len] = '\0';

  FUNC_2(&VAR_4);

  return 0;
}
