
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ptr; int path; } ;
typedef TYPE_1__ uv_fs_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static ssize_t FUNC_4(uv_fs_t* VAR_2) {
  char* VAR_3;






  ssize_t VAR_4;

  VAR_4 = FUNC_2(VAR_2->path);
  VAR_3 = FUNC_3(VAR_4 + 1);

  if (VAR_3 == ((void*)0)) {
    VAR_1 = VAR_0;
    return -1;
  }

  if (FUNC_0(VAR_2->path, VAR_3) == ((void*)0)) {
    FUNC_1(VAR_3);
    return -1;
  }


  VAR_2->ptr = VAR_3;

  return 0;
}
