
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct cyapa_pip_cmd_states {scalar_t__* empty_buf; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {void* state; void* gen; TYPE_1__ cmd_states; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct cyapa*,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct cyapa *VAR_15, u8 *VAR_16)
{
 struct cyapa_pip_cmd_states *VAR_17 = &VAR_15->cmd_states.pip;
 int VAR_18;
 int VAR_19;






 VAR_18 = FUNC_1(&VAR_16[VAR_9]);
 VAR_19 = FUNC_0(VAR_15, VAR_17->empty_buf, VAR_18);
 if (VAR_19 != VAR_18)
  return VAR_19 < 0 ? VAR_19 : -VAR_4;

 if (VAR_18 == VAR_10) {

  if (VAR_16[VAR_11] ==
    VAR_6) {

   VAR_15->gen = VAR_0;
   VAR_15->state = VAR_2;
  } else {

   VAR_15->gen = VAR_0;
   VAR_15->state = VAR_1;
  }
 } else if ((VAR_17->empty_buf[VAR_11] ==
    VAR_6) &&
   (VAR_17->empty_buf[VAR_13] ==
    VAR_12) &&
   (VAR_17->empty_buf[VAR_8] ==
    VAR_14) &&
   (VAR_17->empty_buf[VAR_18 - 1] ==
    VAR_7)) {

  VAR_15->gen = VAR_0;
  VAR_15->state = VAR_2;
 } else if (VAR_17->empty_buf[VAR_11] ==
    VAR_5 &&
   VAR_17->empty_buf[VAR_13] ==
    VAR_12) {

  VAR_15->gen = VAR_0;
  VAR_15->state = VAR_1;
 } else {

  VAR_15->state = VAR_3;
 }

 return 0;
}
