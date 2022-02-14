
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct kone_device {int actual_profile; TYPE_1__* profiles; int actual_dpi; } ;
struct TYPE_2__ {int startup_dpi; } ;



__attribute__((used)) static void FUNC_0(struct kone_device *VAR_0, uint VAR_1)
{
 VAR_0->actual_profile = VAR_1;
 VAR_0->actual_dpi = VAR_0->profiles[VAR_1 - 1].startup_dpi;
}
