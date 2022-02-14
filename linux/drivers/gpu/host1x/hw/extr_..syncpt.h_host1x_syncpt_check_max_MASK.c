
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct host1x_syncpt {scalar_t__ client_managed; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct host1x_syncpt*) ;

__attribute__((used)) static inline bool FUNC_1(struct host1x_syncpt *VAR_0, u32 VAR_1)
{
 u32 VAR_2;
 if (VAR_0->client_managed)
  return 1;
 VAR_2 = FUNC_0(VAR_0);
 return (s32)(VAR_2 - VAR_1) >= 0;
}
