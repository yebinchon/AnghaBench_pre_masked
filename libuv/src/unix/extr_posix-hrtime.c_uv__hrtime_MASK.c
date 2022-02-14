
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_clocktype_t ;
typedef int uint64_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct timespec*) ;

uint64_t FUNC_1(uv_clocktype_t VAR_2) {
  struct timespec VAR_3;
  FUNC_0(VAR_0, &VAR_3);
  return (((uint64_t) VAR_3.tv_sec) * VAR_1 + VAR_3.tv_nsec);
}
