
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ api_major; scalar_t__ api_minor; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(u8 VAR_1, u8 VAR_2)
{
 if (VAR_0->api_major > VAR_1)
  return 1;
 if (VAR_0->api_major == VAR_1 && VAR_0->api_minor >= VAR_2)
  return 1;
 return 0;
}
