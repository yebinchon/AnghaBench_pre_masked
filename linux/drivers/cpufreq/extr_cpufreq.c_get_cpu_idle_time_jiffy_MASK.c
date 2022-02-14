
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
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 TYPE_1__ FUNC_3 (unsigned int) ;

__attribute__((used)) static inline u64 FUNC_4(unsigned int VAR_7, u64 *VAR_8)
{
 u64 VAR_9;
 u64 VAR_10;
 u64 VAR_11;

 VAR_10 = FUNC_2(FUNC_1());

 VAR_11 = FUNC_3(VAR_7).cpustat[VAR_5];
 VAR_11 += FUNC_3(VAR_7).cpustat[VAR_4];
 VAR_11 += FUNC_3(VAR_7).cpustat[VAR_0];
 VAR_11 += FUNC_3(VAR_7).cpustat[VAR_2];
 VAR_11 += FUNC_3(VAR_7).cpustat[VAR_3];
 VAR_11 += FUNC_3(VAR_7).cpustat[VAR_1];

 VAR_9 = VAR_10 - VAR_11;
 if (VAR_8)
  *VAR_8 = FUNC_0(VAR_10, VAR_6);

 return FUNC_0(VAR_9, VAR_6);
}
