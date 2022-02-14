
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int sync_speed_max; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct mddev *VAR_1)
{
 return VAR_1->sync_speed_max ?
  VAR_1->sync_speed_max : VAR_0;
}
