
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_3__ {scalar_t__ left; int r_left; size_t id; int buf; int ptr; scalar_t__ buf_len; } ;
typedef TYPE_1__ dl_zin ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int* VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ,size_t) ;

__attribute__((used)) static inline int FUNC_4 (dl_zin *VAR_2) {
  FUNC_0 (VAR_2->left == 0);
  if (FUNC_1(VAR_2->r_left)) {
    int VAR_3 = (int) FUNC_2 ((off_t)VAR_2->buf_len, VAR_2->r_left);
    FUNC_0 (FUNC_3 (VAR_0[VAR_2->id], VAR_2->buf, (size_t)VAR_3) == VAR_3);
    VAR_1[VAR_2->id] += VAR_3;
    VAR_2->r_left -= VAR_3;
    VAR_2->left = VAR_3;
    VAR_2->ptr = VAR_2->buf;
    return VAR_3;
  } else {
    return 0;
  }
}
