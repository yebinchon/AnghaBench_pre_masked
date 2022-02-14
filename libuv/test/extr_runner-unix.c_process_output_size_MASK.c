
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_3__ {int stdout_file; } ;
typedef TYPE_1__ process_info_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct stat*) ;

long int FUNC_2(process_info_t *VAR_0) {

  struct stat VAR_1;

  int VAR_2 = FUNC_1(FUNC_0(VAR_0->stdout_file), &VAR_1);
  if (VAR_2 < 0) {
    return -1;
  }

  return (long)VAR_1.st_size;
}
