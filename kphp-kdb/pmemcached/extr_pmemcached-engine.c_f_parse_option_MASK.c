
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* mc_check_perm; } ;
struct TYPE_3__ {void* rpc_check_perm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

int FUNC_1 (int VAR_14) {
  switch (VAR_14) {
  case 'f':
    VAR_11 = 1;
    break;
  case 'i':
    VAR_2 = 1;
    break;
  case 'D':
    VAR_0 ++;
    break;
  case 'm':
    VAR_3 = 1024 * 1024 * (long long) FUNC_0 (VAR_8);
    break;
  case 'P':
    VAR_9 = VAR_8;
    break;
  case 'M':
    VAR_7 = 1024 * FUNC_0 (VAR_8);
    if (VAR_7 > 1024 * 1024)
      VAR_7 = 1024 * 1024;
    break;
  case 'S':
    VAR_5.mc_check_perm = VAR_4;
    VAR_6.rpc_check_perm = VAR_12;
    break;
  case 'R':
    VAR_5.mc_check_perm = VAR_4;
    VAR_6.rpc_check_perm = VAR_12;
    VAR_10 ++;
    VAR_1 ++;
    break;
  case 'w':
    VAR_1 ++;
    break;
  case 'Q':
    VAR_13 = 1;
    break;
  default:
    return -1;
  }
  return 0;
}
