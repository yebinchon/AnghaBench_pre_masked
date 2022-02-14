
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_3__ {int buf_len; int id; scalar_t__ r_left; scalar_t__ left; int buf; int ptr; } ;
typedef TYPE_1__ dl_zin ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int ) ;

void FUNC_3 (dl_zin *VAR_4, int VAR_5, int VAR_6) {
  VAR_4->buf_len = VAR_6;
  VAR_4->id = VAR_5;

  FUNC_0 ("Too small buffer for input" && VAR_4->buf_len > 8);
  VAR_4->ptr = VAR_4->buf = FUNC_1 ((size_t)VAR_4->buf_len);
  VAR_4->left = 0;

  off_t VAR_7 = FUNC_2 (VAR_3[VAR_4->id], 0, VAR_0),
        VAR_8 = FUNC_2 (VAR_3[VAR_4->id], 0, VAR_1);
  FUNC_2 (VAR_3[VAR_4->id], VAR_7, VAR_2);
  VAR_4->r_left = VAR_8 - VAR_7;
}
