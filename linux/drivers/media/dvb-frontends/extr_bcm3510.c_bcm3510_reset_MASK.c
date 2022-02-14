
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct bcm3510_state {int dummy; } ;
struct TYPE_6__ {scalar_t__ RESET; } ;
struct TYPE_7__ {int RESET; } ;
struct TYPE_8__ {TYPE_1__ APSTAT1_a2; TYPE_2__ HCTL1_a0; } ;
typedef TYPE_3__ bcm3510_register_value ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm3510_state*,int,TYPE_3__*) ;
 int FUNC_1 (struct bcm3510_state*,int,TYPE_3__) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct bcm3510_state *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 bcm3510_register_value VAR_6;

 FUNC_0(VAR_3,0xa0,&VAR_6); VAR_6.HCTL1_a0.RESET = 1;
 if ((VAR_4 = FUNC_1(VAR_3,0xa0,VAR_6)) < 0)
  return VAR_4;

 VAR_5 = VAR_2 + 3*VAR_1;
 while (FUNC_4(VAR_2, VAR_5)) {
  FUNC_3(10);
  if ((VAR_4 = FUNC_0(VAR_3,0xa2,&VAR_6)) < 0)
   return VAR_4;

  if (VAR_6.APSTAT1_a2.RESET)
   return 0;
 }
 FUNC_2("reset timed out\n");
 return -VAR_0;
}
