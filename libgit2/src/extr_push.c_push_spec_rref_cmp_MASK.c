
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dst; } ;
struct TYPE_4__ {TYPE_1__ refspec; } ;
typedef TYPE_2__ push_spec ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const void *VAR_0, const void *VAR_1)
{
 const push_spec *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 return FUNC_0(VAR_2->refspec.dst, VAR_3->refspec.dst);
}
