
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int emfile_fd; } ;
typedef TYPE_1__ uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(uv_loop_t* VAR_3, int VAR_4) {
  int VAR_5;
  int VAR_6;

  if (VAR_3->emfile_fd == -1)
    return VAR_2;

  FUNC_1(VAR_3->emfile_fd);
  VAR_3->emfile_fd = -1;

  do {
    VAR_5 = FUNC_0(VAR_4);
    if (VAR_5 >= 0)
      FUNC_1(VAR_5);
  } while (VAR_5 >= 0 || VAR_5 == VAR_1);

  VAR_6 = FUNC_2("/", VAR_0);
  if (VAR_6 >= 0)
    VAR_3->emfile_fd = VAR_6;

  return VAR_5;
}
