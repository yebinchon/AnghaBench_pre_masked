
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int release_str; int repeat_str; int press_str; } ;
struct TYPE_4__ {TYPE_1__ kbd; } ;
struct logical_input {int rise_time; int fall_time; int list; TYPE_2__ u; int state; int type; int value; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,int *,int *,int *,int *) ;
 int FUNC_1 (struct logical_input*) ;
 struct logical_input* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,char const*,int) ;

__attribute__((used)) static struct logical_input *FUNC_5(const char *VAR_6, const char *VAR_7,
         const char *VAR_8,
         const char *VAR_9)
{
 struct logical_input *VAR_10;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_0);
 if (!VAR_10)
  return ((void*)0);

 if (!FUNC_0(VAR_6, &VAR_10->mask, &VAR_10->value, &VAR_4,
        &VAR_5)) {
  FUNC_1(VAR_10);
  return ((void*)0);
 }

 VAR_10->type = VAR_2;
 VAR_10->state = VAR_1;
 VAR_10->rise_time = 1;
 VAR_10->fall_time = 1;

 FUNC_4(VAR_10->u.kbd.press_str, VAR_7, sizeof(VAR_10->u.kbd.press_str));
 FUNC_4(VAR_10->u.kbd.repeat_str, VAR_8, sizeof(VAR_10->u.kbd.repeat_str));
 FUNC_4(VAR_10->u.kbd.release_str, VAR_9,
  sizeof(VAR_10->u.kbd.release_str));
 FUNC_3(&VAR_10->list, &VAR_3);
 return VAR_10;
}
