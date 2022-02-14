
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char Key; int Up; } ;
typedef TYPE_1__ uiAreaKeyEvent ;
typedef int uiAreaHandler ;
typedef int uiArea ;



__attribute__((used)) static int FUNC_0(uiAreaHandler *VAR_0, uiArea *VAR_1, uiAreaKeyEvent *VAR_2)
{
 if (VAR_2->Key == 'h' && !VAR_2->Up) {

  return 1;
 }
 return 0;
}
