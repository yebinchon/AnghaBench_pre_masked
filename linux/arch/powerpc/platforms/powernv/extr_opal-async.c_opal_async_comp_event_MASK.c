
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint64_t ;
struct opal_msg {int * params; } ;
struct notifier_block {int dummy; } ;
typedef enum opal_async_token_state { ____Placeholder_opal_async_token_state } opal_async_token_state ;
struct TYPE_2__ {int state; int response; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,struct opal_msg*,int) ;
 int VAR_3 ;
 int FUNC_2 (size_t) ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_6,
  unsigned long VAR_7, void *VAR_8)
{
 struct opal_msg *VAR_9 = VAR_8;
 enum opal_async_token_state VAR_10;
 unsigned long VAR_11;
 uint64_t VAR_12;

 if (VAR_7 != VAR_2)
  return 0;

 VAR_12 = FUNC_0(VAR_9->params[0]);
 FUNC_3(&VAR_3, VAR_11);
 VAR_10 = VAR_4[VAR_12].state;
 VAR_4[VAR_12].state = VAR_1;
 FUNC_4(&VAR_3, VAR_11);

 if (VAR_10 == VAR_0) {

  FUNC_2(VAR_12);
  return 0;
 }
 FUNC_1(&VAR_4[VAR_12].response, VAR_9, sizeof(*VAR_9));
 FUNC_5(&VAR_5);

 return 0;
}
