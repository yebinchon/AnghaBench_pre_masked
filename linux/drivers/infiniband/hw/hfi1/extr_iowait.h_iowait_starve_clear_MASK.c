
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iowait {scalar_t__ starved_cnt; } ;



__attribute__((used)) static inline void FUNC_0(bool VAR_0, struct iowait *VAR_1)
{
 if (VAR_0)
  VAR_1->starved_cnt = 0;
}
