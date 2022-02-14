
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timer_group_priv {int flags; int timerfreq; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct device_node* FUNC_0 (int *,int *,char*) ;
 int FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_3,
   struct timer_group_priv *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->flags & VAR_1) {
  struct device_node *VAR_6;

  VAR_6 = FUNC_0(((void*)0), ((void*)0), "fsl,mpic");
  if (VAR_6) {
   FUNC_2(VAR_6, "clock-frequency",
     &VAR_4->timerfreq);
   FUNC_1(VAR_6);
  }
 }

 if (VAR_4->timerfreq <= 0)
  return -VAR_0;

 if (VAR_4->flags & VAR_1) {
  VAR_5 = (1 << (VAR_2 >> 8)) * 8;
  VAR_4->timerfreq /= VAR_5;
 }

 return 0;
}
