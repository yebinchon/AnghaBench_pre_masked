
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_chip {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {scalar_t__ model_id; } ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (unsigned long) ;
 struct macio_chip* FUNC_4 (struct device_node*,int ) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static long
FUNC_5(struct device_node *VAR_7, long VAR_8, long VAR_9)
{
 struct macio_chip* VAR_10;
 unsigned long VAR_11;

 VAR_10 = FUNC_4(VAR_7, 0);
 if (!VAR_10)
  return -VAR_0;





 if (VAR_6.model_id == VAR_4 ||
     VAR_6.model_id == VAR_5) {
  FUNC_0(VAR_11);
  if (VAR_9)
   FUNC_2(VAR_3,
    VAR_2 |
    VAR_1);
  else
   FUNC_2(VAR_3,
    VAR_2);
  (void)FUNC_1(VAR_3);
  FUNC_3(VAR_11);
 }
 return 0;
}
