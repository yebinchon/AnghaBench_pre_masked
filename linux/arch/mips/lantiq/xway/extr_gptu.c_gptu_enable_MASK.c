
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {size_t bits; } ;
struct TYPE_2__ {int start; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (size_t) ;
 int VAR_4 ;
 int FUNC_2 (size_t) ;
 int FUNC_3 (size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ) ;
 TYPE_1__* VAR_8 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,int ,char*,int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_8(struct clk *VAR_10)
{
 int VAR_11 = FUNC_7(VAR_8[VAR_10->bits].start, VAR_9,
  VAR_5, "gtpu", ((void*)0));
 if (VAR_11) {
  FUNC_6("gptu: failed to request irq\n");
  return VAR_11;
 }

 FUNC_5(VAR_1 | VAR_2 | VAR_3 | VAR_0,
  FUNC_1(VAR_10->bits));
 FUNC_5(1, FUNC_2(VAR_10->bits));
 FUNC_5(FUNC_4(VAR_4) | FUNC_0(VAR_10->bits), VAR_4);
 FUNC_5(VAR_7 | VAR_6, FUNC_3(VAR_10->bits));
 return 0;
}
