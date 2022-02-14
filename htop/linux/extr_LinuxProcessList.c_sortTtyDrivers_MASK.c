
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ major; int minorFrom; } ;
typedef TYPE_1__ TtyDriver ;



__attribute__((used)) static int FUNC_0(const void* VAR_0, const void* VAR_1) {
   TtyDriver* VAR_2 = (TtyDriver*) VAR_0;
   TtyDriver* VAR_3 = (TtyDriver*) VAR_1;
   return (VAR_2->major == VAR_3->major) ? (VAR_2->minorFrom - VAR_3->minorFrom) : (VAR_2->major - VAR_3->major);
}
