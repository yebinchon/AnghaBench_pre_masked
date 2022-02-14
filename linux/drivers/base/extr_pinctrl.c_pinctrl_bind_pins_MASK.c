
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {TYPE_1__* pins; scalar_t__ of_node_reused; } ;
struct TYPE_3__ {void* p; void* idle_state; void* sleep_state; void* init_state; void* default_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (void*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (struct device*,int,int ) ;
 void* FUNC_5 (struct device*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (void*,int ) ;
 int FUNC_8 (void*,void*) ;

int FUNC_9(struct device *VAR_8)
{
 int VAR_9;

 if (VAR_8->of_node_reused)
  return 0;

 VAR_8->pins = FUNC_4(VAR_8, sizeof(*(VAR_8->pins)), VAR_3);
 if (!VAR_8->pins)
  return -VAR_1;

 VAR_8->pins->p = FUNC_5(VAR_8);
 if (FUNC_0(VAR_8->pins->p)) {
  FUNC_2(VAR_8, "no pinctrl handle\n");
  VAR_9 = FUNC_1(VAR_8->pins->p);
  goto cleanup_alloc;
 }

 VAR_8->pins->default_state = FUNC_7(VAR_8->pins->p,
     VAR_4);
 if (FUNC_0(VAR_8->pins->default_state)) {
  FUNC_2(VAR_8, "no default pinctrl state\n");
  VAR_9 = 0;
  goto cleanup_get;
 }

 VAR_8->pins->init_state = FUNC_7(VAR_8->pins->p,
     VAR_6);
 if (FUNC_0(VAR_8->pins->init_state)) {

  FUNC_2(VAR_8, "no init pinctrl state\n");

  VAR_9 = FUNC_8(VAR_8->pins->p,
        VAR_8->pins->default_state);
 } else {
  VAR_9 = FUNC_8(VAR_8->pins->p, VAR_8->pins->init_state);
 }

 if (VAR_9) {
  FUNC_2(VAR_8, "failed to activate initial pinctrl state\n");
  goto cleanup_get;
 }
 return 0;






cleanup_get:
 FUNC_6(VAR_8->pins->p);
cleanup_alloc:
 FUNC_3(VAR_8, VAR_8->pins);
 VAR_8->pins = ((void*)0);


 if (VAR_9 == -VAR_2)
  return VAR_9;

 if (VAR_9 == -VAR_0)
  return VAR_9;


 return 0;
}
