
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dock_station {int last_dock_time; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_0(struct dock_station *VAR_2)
{
 VAR_2->flags &= ~(VAR_0);
 VAR_2->last_dock_time = VAR_1;
}
