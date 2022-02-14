
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char const* name; int mode; } ;
struct TYPE_3__ {int show; TYPE_2__ attr; } ;
struct powercap_attr {int handle; TYPE_1__ attr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(int VAR_1, const char *VAR_2,
         struct powercap_attr *VAR_3)
{
 VAR_3->handle = VAR_1;
 FUNC_0(&VAR_3->attr.attr);
 VAR_3->attr.attr.name = VAR_2;
 VAR_3->attr.attr.mode = 0444;
 VAR_3->attr.show = VAR_0;
}
