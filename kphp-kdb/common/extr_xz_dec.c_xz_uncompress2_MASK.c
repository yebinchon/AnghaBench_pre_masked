
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xz_dec {int dummy; } ;
struct xz_buf {int in_size; int out_pos; int out_size; void* out; scalar_t__ in_pos; void* in; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xz_dec*) ;
 struct xz_dec* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct xz_dec*,struct xz_buf*) ;

int FUNC_3 (void *VAR_2, int *VAR_3, void *VAR_4, int VAR_5) {
  struct xz_dec *VAR_6 = FUNC_1 (VAR_0, 0);
  if (VAR_6 == ((void*)0)) {
    return -1;
  }
  struct xz_buf VAR_7;
  VAR_7.in = VAR_4;
  VAR_7.in_pos = 0;
  VAR_7.in_size = VAR_5;
  VAR_7.out = VAR_2;
  VAR_7.out_pos = 0;
  VAR_7.out_size = *VAR_3;
  enum xz_ret VAR_8 = FUNC_2 (VAR_6, &VAR_7);
  FUNC_0 (VAR_6);
  if (VAR_8 != VAR_1) {
    return -1;
  }
  *VAR_3 = VAR_7.out_pos;
  return 0;
}
