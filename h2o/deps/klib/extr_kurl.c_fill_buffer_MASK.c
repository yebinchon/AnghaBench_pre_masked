
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; long tv_usec; } ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_4__ {scalar_t__ p_buf; scalar_t__ l_buf; int done_reading; scalar_t__ m_buf; scalar_t__ buf; int multi; int curl; int fd; int off0; } ;
typedef TYPE_1__ kurl_t ;
typedef int fd_set ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *,int *,int *,int*) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (int ,long*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct timespec*,struct timespec*) ;
 int FUNC_8 (int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (int,int *,int *,int *,struct timeval*) ;

__attribute__((used)) static int FUNC_10(kurl_t *VAR_2)
{
 FUNC_1(VAR_2->p_buf == VAR_2->l_buf);
 VAR_2->off0 += VAR_2->l_buf;
 VAR_2->p_buf = VAR_2->l_buf = 0;
 if (VAR_2->done_reading) return 0;
 if (FUNC_6(VAR_2)) {



  while (VAR_2->l_buf < VAR_2->m_buf) {
   int VAR_3;
   VAR_3 = FUNC_8(VAR_2->fd, VAR_2->buf + VAR_2->l_buf, VAR_2->m_buf - VAR_2->l_buf);
   if (VAR_3 == 0) break;
   VAR_2->l_buf += VAR_3;
  }
  if (VAR_2->l_buf < VAR_2->m_buf) VAR_2->done_reading = 1;
 } else {
  int VAR_4, VAR_5;
  fd_set VAR_6, VAR_7, VAR_8;
  do {
   int VAR_9 = -1;
   long VAR_10 = -1;
   struct timeval VAR_11;

   VAR_11.tv_sec = 10, VAR_11.tv_usec = 0;
   FUNC_5(VAR_2->multi, &VAR_10);
   if (VAR_10 >= 0) {
    VAR_11.tv_sec = VAR_10 / 1000;
    if (VAR_11.tv_sec > 1) VAR_11.tv_sec = 1;
    else VAR_11.tv_usec = (VAR_10 % 1000) * 1000;
   }
   FUNC_0(&VAR_6); FUNC_0(&VAR_7); FUNC_0(&VAR_8);
   FUNC_3(VAR_2->multi, &VAR_6, &VAR_7, &VAR_8, &VAR_9);
   if (VAR_9 >= 0 && (VAR_5 = FUNC_9(VAR_9+1, &VAR_6, &VAR_7, &VAR_8, &VAR_11)) < 0) break;
   if (VAR_9 < 0) {
    struct timespec VAR_12, VAR_13;
    VAR_12.tv_sec = 0; VAR_12.tv_nsec = 100000000;
    FUNC_7(&VAR_12, &VAR_13);
   }
   FUNC_2(VAR_2->curl, VAR_0);
   VAR_5 = FUNC_4(VAR_2->multi, &VAR_4);
  } while (VAR_4 && VAR_2->l_buf < VAR_2->m_buf - VAR_1);
  if (VAR_2->l_buf < VAR_2->m_buf - VAR_1) VAR_2->done_reading = 1;
 }
 return VAR_2->l_buf;
}
