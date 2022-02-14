
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xz_dec {int allow_buf_error; int mode; } ;
struct xz_buf {size_t in_pos; size_t out_pos; size_t in_size; } ;
typedef enum xz_ret { ____Placeholder_xz_ret } xz_ret ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct xz_dec*,struct xz_buf*) ;
 int FUNC_2 (struct xz_dec*) ;

enum xz_ret FUNC_3(struct xz_dec *VAR_4, struct xz_buf *VAR_5)
{
 size_t VAR_6;
 size_t VAR_7;
 enum xz_ret VAR_8;

 if (FUNC_0(VAR_4->mode))
  FUNC_2(VAR_4);

 VAR_6 = VAR_5->in_pos;
 VAR_7 = VAR_5->out_pos;
 VAR_8 = FUNC_1(VAR_4, VAR_5);

 if (FUNC_0(VAR_4->mode)) {
  if (VAR_8 == VAR_2)
   VAR_8 = VAR_5->in_pos == VAR_5->in_size
     ? VAR_1 : VAR_0;

  if (VAR_8 != VAR_3) {
   VAR_5->in_pos = VAR_6;
   VAR_5->out_pos = VAR_7;
  }

 } else if (VAR_8 == VAR_2 && VAR_6 == VAR_5->in_pos
   && VAR_7 == VAR_5->out_pos) {
  if (VAR_4->allow_buf_error)
   VAR_8 = VAR_0;

  VAR_4->allow_buf_error = 1;
 } else {
  VAR_4->allow_buf_error = 0;
 }

 return VAR_8;
}
