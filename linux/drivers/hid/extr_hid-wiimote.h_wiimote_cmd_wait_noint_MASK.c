
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cmd; int ready; } ;
struct wiimote_data {TYPE_1__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (int *,int ) ;

__attribute__((used)) static inline int FUNC_1(struct wiimote_data *VAR_3)
{
 unsigned long VAR_4;


 VAR_4 = FUNC_0(&VAR_3->state.ready, VAR_1);
 if (!VAR_4)
  return -VAR_0;
 else if (VAR_3->state.cmd != VAR_2)
  return -VAR_0;
 else
  return 0;
}
