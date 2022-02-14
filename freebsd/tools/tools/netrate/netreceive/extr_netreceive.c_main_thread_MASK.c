
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct timespec {int tv_sec; int tv_nsec; } ;
struct td_desc {int count; int byte_count; } ;
typedef int int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct timespec*) ;
 int FUNC_1 (int ,char*,int,int,...) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,int ,int) ;
 int VAR_1 ;
 int FUNC_4 (struct timespec*,struct timespec*) ;

__attribute__((used)) static void
FUNC_5(struct td_desc **VAR_2, int VAR_3, int VAR_4)
{
 uint64_t VAR_5, VAR_6, VAR_7, VAR_8;
 struct timespec VAR_9, VAR_10, VAR_11;

 VAR_5 = VAR_6 = VAR_7 = VAR_8 = 0;
 FUNC_0(VAR_0, &VAR_10);
 FUNC_1(VAR_1, "start at %d.%09d\n", VAR_10.tv_sec, VAR_10.tv_nsec);
 while (1) {
  int VAR_12, VAR_13 = VAR_3 * VAR_4;
  int64_t VAR_14;
  uint64_t VAR_15, VAR_16;

  if (FUNC_3(((void*)0), 0, 500) < 0)
   FUNC_2("poll");
  VAR_5 = VAR_7 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
   VAR_5 += VAR_2[VAR_12]->count;
   VAR_7 += VAR_2[VAR_12]->byte_count;
  }
  VAR_14 = VAR_5 - VAR_6;
  FUNC_0(VAR_0, &VAR_9);
  VAR_11 = VAR_9;
  FUNC_4(&VAR_11, &VAR_10);
  VAR_10 = VAR_9;
  VAR_15 = VAR_14;
  VAR_15 = (VAR_15 * 1000000000) / (VAR_11.tv_sec*1000000000 + VAR_11.tv_nsec + 1);
  VAR_16 = ((VAR_7 - VAR_8) * 8000000000) / (VAR_11.tv_sec*1000000000 + VAR_11.tv_nsec + 1);
  FUNC_1(VAR_1, " %9d pps %8.3d Mbps", (long)VAR_15, .000001*VAR_16);
  FUNC_1(VAR_1, " - %d pkts in %d.%09d ns\n",
   (int)VAR_14, VAR_11.tv_sec, VAR_11.tv_nsec);
  VAR_6 = VAR_5;
  VAR_8 = VAR_7;
 }
}
