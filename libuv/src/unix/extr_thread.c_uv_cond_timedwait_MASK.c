
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_mutex_t ;
typedef int uv_cond_t ;
typedef int uint64_t ;
struct timeval {int tv_sec; int tv_usec; } ;
struct timespec {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct timeval*,int *) ;
 int FUNC_2 (int *,int *,struct timespec*) ;
 int FUNC_3 (int *,int *,struct timespec*) ;
 int FUNC_4 (int *,int *,struct timespec*) ;
 scalar_t__ FUNC_5 (int ) ;

int FUNC_6(uv_cond_t* VAR_5, uv_mutex_t* VAR_6, uint64_t VAR_7) {
  int VAR_8;
  struct timespec VAR_9;
  VAR_7 += FUNC_5(VAR_2);

  VAR_9.tv_sec = VAR_7 / VAR_1;
  VAR_9.tv_nsec = VAR_7 % VAR_1;
  VAR_8 = FUNC_2(VAR_5, VAR_6, &VAR_9);




  if (VAR_8 == 0)
    return 0;

  if (VAR_8 == VAR_0)
    return VAR_4;

  FUNC_0();

  return VAR_3;

}
