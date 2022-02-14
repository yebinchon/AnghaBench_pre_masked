
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long double uint64_t ;
typedef int total_time_ts ;
typedef int total_time_bt ;
typedef int total_dma_ts ;
typedef int total_dma_bt ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct ctl_io_stats {int * dma_time; int * time; scalar_t__* dmas; scalar_t__* operations; scalar_t__* bytes; } ;
struct bintime {int tv_sec; int tv_nsec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timespec*,struct timespec*) ;
 int FUNC_1 (struct timespec*,int *) ;
 int FUNC_2 (struct timespec*,int *) ;
 int FUNC_3 (struct timespec*,int) ;

__attribute__((used)) static void
FUNC_4(struct ctl_io_stats *VAR_1,
       struct ctl_io_stats *VAR_2, long double VAR_3,
       long double *VAR_4, long double *VAR_5,
       long double *VAR_6, long double *VAR_7,
       long double *VAR_8, long double *VAR_9)
{
 uint64_t VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 struct bintime VAR_13, VAR_14;
 struct timespec VAR_15, VAR_16;
 int VAR_17;

 FUNC_3(&VAR_13, sizeof(VAR_13));
 FUNC_3(&VAR_14, sizeof(VAR_14));
 FUNC_3(&VAR_15, sizeof(VAR_15));
 FUNC_3(&VAR_16, sizeof(VAR_16));
 for (VAR_17 = 0; VAR_17 < VAR_0; VAR_17++) {
  VAR_10 += VAR_1->bytes[VAR_17];
  VAR_11 += VAR_1->operations[VAR_17];
  VAR_12 += VAR_1->dmas[VAR_17];
  FUNC_1(&VAR_13, &VAR_1->time[VAR_17]);
  FUNC_1(&VAR_14, &VAR_1->dma_time[VAR_17]);
  if (VAR_2 != ((void*)0)) {
   VAR_10 -= VAR_2->bytes[VAR_17];
   VAR_11 -= VAR_2->operations[VAR_17];
   VAR_12 -= VAR_2->dmas[VAR_17];
   FUNC_2(&VAR_13, &VAR_2->time[VAR_17]);
   FUNC_2(&VAR_14, &VAR_2->dma_time[VAR_17]);
  }
 }

 *VAR_4 = VAR_10;
 *VAR_4 /= 1024 * 1024;
 if (VAR_3 > 0.0)
  *VAR_4 /= VAR_3;
 else
  *VAR_4 = 0;
 *VAR_5 = VAR_10;
 *VAR_5 /= 1024;
 if (VAR_11 > 0)
  *VAR_5 /= VAR_11;
 else
  *VAR_5 = 0;
 *VAR_6 = VAR_11;
 *VAR_9 = VAR_12;
 if (VAR_3 > 0.0) {
  *VAR_6 /= VAR_3;
  *VAR_9 /= VAR_3;
 } else {
  *VAR_6 = 0;
  *VAR_9 = 0;
 }

 FUNC_0(&VAR_13, &VAR_15);
 FUNC_0(&VAR_14, &VAR_16);
 if (VAR_11 > 0) {



  *VAR_7 = VAR_15.tv_sec * 1000;
  *VAR_7 += VAR_15.tv_nsec / 1000000;
  *VAR_7 /= VAR_11;
 } else
  *VAR_7 = 0;

 if (VAR_12 > 0) {



  *VAR_8 = VAR_16.tv_sec * 1000;
  *VAR_8 += VAR_16.tv_nsec / 1000000;
  *VAR_8 /= VAR_12;
 } else
  *VAR_8 = 0;
}
