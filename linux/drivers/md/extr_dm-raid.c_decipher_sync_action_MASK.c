
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ reshape_position; int ro; } ;
typedef enum sync_state { ____Placeholder_sync_state } sync_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_0 (int ,unsigned long*) ;

__attribute__((used)) static enum sync_state FUNC_1(struct mddev *VAR_17, unsigned long VAR_18)
{
 if (FUNC_0(VAR_2, &VAR_18))
  return VAR_11;


 if (!FUNC_0(VAR_1, &VAR_18) &&
     (FUNC_0(VAR_7, &VAR_18) ||
      (!VAR_17->ro && FUNC_0(VAR_3, &VAR_18)))) {
  if (FUNC_0(VAR_6, &VAR_18))
   return VAR_15;

  if (FUNC_0(VAR_8, &VAR_18)) {
   if (!FUNC_0(VAR_5, &VAR_18))
    return VAR_16;
   if (FUNC_0(VAR_0, &VAR_18))
    return VAR_10;
   return VAR_14;
  }

  if (FUNC_0(VAR_4, &VAR_18))
   return VAR_13;

  if (VAR_17->reshape_position != VAR_9)
   return VAR_15;
 }

 return VAR_12;
}
