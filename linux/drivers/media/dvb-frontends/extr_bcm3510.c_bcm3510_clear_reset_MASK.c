
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bcm3510_state {int dummy; } ;
struct TYPE_5__ {int RESET; } ;
struct TYPE_6__ {TYPE_1__ APSTAT1_a2; scalar_t__ raw; } ;
typedef TYPE_2__ bcm3510_register_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm3510_state*,int,TYPE_2__*) ;
 int FUNC_1 (struct bcm3510_state*,int,TYPE_2__) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct bcm3510_state *VAR_3)
{
 bcm3510_register_value VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 VAR_4.raw = 0;
 if ((VAR_5 = FUNC_1(VAR_3,0xa0,VAR_4)) < 0)
  return VAR_5;

 VAR_6 = VAR_2 + 3*VAR_1;
 while (FUNC_4(VAR_2, VAR_6)) {
  FUNC_3(10);
  if ((VAR_5 = FUNC_0(VAR_3,0xa2,&VAR_4)) < 0)
   return VAR_5;


  if (!VAR_4.APSTAT1_a2.RESET)
   return 0;
 }
 FUNC_2("reset clear timed out\n");
 return -VAR_0;
}
