
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int out_line; int out_name; } ;
struct TYPE_4__ {TYPE_1__ myutmp; int myhost; } ;


 TYPE_2__* FUNC_0 (void const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, const void *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(FUNC_0(VAR_0)->myutmp.out_name, FUNC_0(VAR_1)->myutmp.out_name,
     sizeof(FUNC_0(VAR_1)->myutmp.out_name));
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_2 = FUNC_1(FUNC_0(VAR_0)->myhost, FUNC_0(VAR_1)->myhost);
 if (VAR_2 != 0)
  return (VAR_2);
 return (FUNC_2(FUNC_0(VAR_0)->myutmp.out_line,
     FUNC_0(VAR_1)->myutmp.out_line, sizeof(FUNC_0(VAR_1)->myutmp.out_line)));
}
