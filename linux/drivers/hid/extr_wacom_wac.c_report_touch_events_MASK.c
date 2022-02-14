
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom_wac {TYPE_1__* shared; } ;
struct TYPE_2__ {int stylus_in_proximity; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct wacom_wac *VAR_1)
{
 return (VAR_0 ? !VAR_1->shared->stylus_in_proximity : 1);
}
