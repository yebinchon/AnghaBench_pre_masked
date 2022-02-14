
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {int clk_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (size_t) ;

__attribute__((used)) static int FUNC_2(u32 VAR_3, char *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == 1) {
  FUNC_0(VAR_4, VAR_2[VAR_3].clk_name, VAR_1);
  return 0;
 }

 return VAR_5 == 0 ? -VAR_0 : VAR_5;
}
