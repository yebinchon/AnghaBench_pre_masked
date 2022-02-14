
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ addr_t ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {scalar_t__ vdso; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;

__attribute__((used)) static addr_t FUNC_2(const char *VAR_1) {
    addr_t VAR_2 = FUNC_1(VAR_1);
    if (VAR_2 == 0) {
        FUNC_0("sigreturn not found in vdso, this should never happen");
    }
    return VAR_0->mm->vdso + VAR_2;
}
