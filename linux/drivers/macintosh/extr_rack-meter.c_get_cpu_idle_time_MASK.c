
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__* cpustat; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ FUNC_0 (unsigned int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static inline u64 FUNC_1(unsigned int VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_4).cpustat[VAR_0] +
   FUNC_0(VAR_4).cpustat[VAR_1];

 if (VAR_3)
  VAR_5 += FUNC_0(VAR_4).cpustat[VAR_2];

 return VAR_5;
}
