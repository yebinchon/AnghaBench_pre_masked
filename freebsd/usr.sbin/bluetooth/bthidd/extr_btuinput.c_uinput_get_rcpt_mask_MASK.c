
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {scalar_t__ tv_sec; scalar_t__ tv_nsec; int member_1; int member_0; } ;
typedef int mask ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct timespec*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int ,int*,size_t*,int *,int ) ;

__attribute__((used)) static int32_t
FUNC_2(void)
{
 static struct timespec VAR_7 = { 0, 0 };
 struct timespec VAR_8;
 static int32_t VAR_9 = 0;
 size_t VAR_10;
 time_t VAR_11;

 if (FUNC_0(VAR_0, &VAR_8) == -1)
  return VAR_9;

 VAR_11 = VAR_8.tv_sec - VAR_7.tv_sec;
 if (VAR_8.tv_nsec < VAR_7.tv_nsec)
  VAR_11--;

 if (VAR_11 >= VAR_4) {
  VAR_10 = sizeof(VAR_9);
  if (FUNC_1(VAR_5, &VAR_9, &VAR_10, ((void*)0), 0) < 0) {
   if (VAR_6 == VAR_1)

    VAR_9 = VAR_3 | VAR_2;
   else
    VAR_9 = 0;
  }
  VAR_7 = VAR_8;
 }
 return VAR_9;
}
