
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {scalar_t__ tv_nsec; scalar_t__ member_1; scalar_t__ tv_sec; scalar_t__ member_0; } ;



__attribute__((used)) static __inline struct timespec
FUNC_0(struct timespec VAR_0, struct timespec VAR_1)
{
 struct timespec VAR_2 = { VAR_0.tv_sec - VAR_1.tv_sec, VAR_0.tv_nsec - VAR_1.tv_nsec };
 if (VAR_2.tv_nsec < 0) {
  VAR_2.tv_sec--;
  VAR_2.tv_nsec += 1000000000;
 }
 return VAR_2;
}
