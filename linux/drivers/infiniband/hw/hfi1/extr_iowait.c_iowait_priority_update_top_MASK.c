
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef scalar_t__ u8 ;
struct iowait {int priority; scalar_t__ starved_cnt; } ;


 int VAR_0 ;

uint FUNC_0(struct iowait *VAR_1,
    struct iowait *VAR_2,
    uint VAR_3, uint VAR_4)
{
 u8 VAR_5, VAR_6;


 VAR_5 = (VAR_1->priority << VAR_0) + VAR_1->starved_cnt;
 VAR_6 = (VAR_2->priority << VAR_0) +
  VAR_2->starved_cnt;
 if (VAR_5 > VAR_6)
  return VAR_3;
 else
  return VAR_4;
}
