
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* disk; } ;
struct TYPE_3__ {int first_minor; int minors; int disk_name; int major; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(void)
{
 VAR_1.disk->major = VAR_2;
 VAR_1.disk->first_minor = 1;
 VAR_1.disk->minors = 1;
 FUNC_0(VAR_1.disk->disk_name, VAR_0);
}
