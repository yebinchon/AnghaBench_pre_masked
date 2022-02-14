
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int homedir; } ;
typedef TYPE_1__ uv_passwd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,char*,size_t*) ;

int FUNC_5(char* VAR_2, size_t* VAR_3) {
  uv_passwd_t VAR_4;
  size_t VAR_5;
  int VAR_6;




  VAR_6 = FUNC_4("HOME", VAR_2, VAR_3);

  if (VAR_6 != VAR_1)
    return VAR_6;


  VAR_6 = FUNC_2(&VAR_4);

  if (VAR_6 != 0) {
    return VAR_6;
  }

  VAR_5 = FUNC_1(VAR_4.homedir);

  if (VAR_5 >= *VAR_3) {
    *VAR_3 = VAR_5 + 1;
    FUNC_3(&VAR_4);
    return VAR_0;
  }

  FUNC_0(VAR_2, VAR_4.homedir, VAR_5 + 1);
  *VAR_3 = VAR_5;
  FUNC_3(&VAR_4);

  return 0;
}
