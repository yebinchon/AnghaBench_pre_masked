
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct timer_group_priv {TYPE_1__* timer; int idle; } ;
struct device_node {int dummy; } ;
typedef int all_timer ;
struct TYPE_2__ {unsigned int irq; unsigned int num; } ;


 int VAR_0 ;
 unsigned int const VAR_1 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (struct device_node*,unsigned int) ;
 unsigned int* FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (char*,struct device_node*) ;

__attribute__((used)) static int FUNC_4(struct device_node *VAR_2,
  struct timer_group_priv *VAR_3)
{
 const u32 VAR_4[] = { 0, VAR_1 };
 const u32 *VAR_5;
 u32 VAR_6;
 u32 VAR_7;

 unsigned int VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10 = 0;
 unsigned int VAR_11;
 int VAR_12;

 VAR_5 = FUNC_2(VAR_2, "fsl,available-ranges", &VAR_12);
 if (VAR_5 && VAR_12 % (2 * sizeof(u32)) != 0) {
  FUNC_3("%pOF: malformed available-ranges property.\n", VAR_2);
  return -VAR_0;
 }

 if (!VAR_5) {
  VAR_5 = VAR_4;
  VAR_12 = sizeof(VAR_4);
 }

 VAR_12 /= 2 * sizeof(u32);

 for (VAR_8 = 0; VAR_8 < VAR_12; VAR_8++) {
  VAR_6 = VAR_5[VAR_8 * 2];
  VAR_7 = VAR_5[VAR_8 * 2 + 1];
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
   VAR_11 = FUNC_1(VAR_2, VAR_10);
   if (!VAR_11) {
    FUNC_3("%pOF: irq parse and map failed.\n", VAR_2);
    return -VAR_0;
   }


   VAR_3->idle |= FUNC_0((VAR_6 + VAR_9));
   VAR_3->timer[VAR_6 + VAR_9].irq = VAR_11;
   VAR_3->timer[VAR_6 + VAR_9].num = VAR_6 + VAR_9;
   VAR_10++;
  }
 }

 return 0;
}
