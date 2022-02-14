
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int off_t ;
struct TYPE_7__ {int off0; int p_buf; int l_buf; void* err; scalar_t__ done_reading; int fd; } ;
typedef TYPE_1__ kurl_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,int,int) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int) ;

off_t FUNC_5(kurl_t *VAR_6, off_t VAR_7, int VAR_8)
{
 off_t VAR_9 = -1, VAR_10;
 int VAR_11 = 0, VAR_12 = 0;
 if (VAR_6 == 0) return -1;
 VAR_10 = VAR_6->off0 + VAR_6->p_buf;
 if (VAR_8 == VAR_5) VAR_9 = VAR_7;
 else if (VAR_8 == VAR_3) VAR_9 += VAR_10 + VAR_7;
 else if (VAR_8 == VAR_4 && FUNC_1(VAR_6)) VAR_9 = FUNC_3(VAR_6->fd, VAR_7, VAR_4), VAR_12 = 1;
 else {
  VAR_6->err = VAR_0;
  return -1;
 }
 if (VAR_9 < 0) {
  VAR_6->err = VAR_1;
  return -1;
 }
 if (!VAR_12 && VAR_9 >= VAR_10 && VAR_9 - VAR_10 + VAR_6->p_buf < VAR_6->l_buf) {
  VAR_6->p_buf += VAR_9 - VAR_10;
  return VAR_6->off0 + VAR_6->p_buf;
 }
 if (VAR_12 || VAR_9 < VAR_10 || VAR_9 - VAR_10 > VAR_2) {
  VAR_6->off0 = VAR_9;
  VAR_6->done_reading = 0;
  if (FUNC_4(VAR_6, 1) < 0 || FUNC_0(VAR_6) <= 0) VAR_11 = 1;
 } else {
  off_t VAR_13;
  VAR_13 = FUNC_2(VAR_6, 0, VAR_9 - VAR_10);
  if (VAR_13 + VAR_10 != VAR_9) VAR_11 = 1;
 }
 if (VAR_11) VAR_6->err = VAR_1, VAR_6->l_buf = VAR_6->p_buf = 0, VAR_9 = -1;
 return VAR_9;
}
