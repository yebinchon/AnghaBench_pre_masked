
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t readsp; TYPE_1__* readstack; } ;
struct TYPE_3__ {int lastchar; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (char*,int,int) ;

__attribute__((used)) static void
FUNC_1(void)
{
 int VAR_1 = VAR_0.readstack[VAR_0.readsp].lastchar;
 FUNC_0("%c (0%o) is unimplemented", VAR_1, VAR_1);
}
