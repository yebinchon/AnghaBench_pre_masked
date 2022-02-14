
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* uma_zone_t ;
struct TYPE_5__ {int * ta_func; } ;
struct TYPE_4__ {TYPE_3__ uz_maxaction; } ;


 int FUNC_0 (int ,TYPE_3__*) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(uma_zone_t VAR_1)
{

 if (VAR_1->uz_maxaction.ta_func != ((void*)0))
  FUNC_0(VAR_0, &VAR_1->uz_maxaction);
}
