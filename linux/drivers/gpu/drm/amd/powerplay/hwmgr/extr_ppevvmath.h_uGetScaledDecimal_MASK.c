
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int decimal; } ;
struct TYPE_5__ {TYPE_1__ partial; } ;
typedef TYPE_2__ fInt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1 (fInt VAR_2)
{
 int VAR_3[VAR_0];
 int VAR_4, VAR_5 = 0, VAR_6 = VAR_2.partial.decimal;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_3[VAR_4] = VAR_6 / (1 << VAR_1);
  VAR_6 = VAR_6 - ((1 << VAR_1)*VAR_3[VAR_4]);
  VAR_6 *= 10;
  VAR_5 = VAR_5 + VAR_3[VAR_4]*FUNC_0(10, VAR_0 - 1 -VAR_4);
 }

 return VAR_5;
}
