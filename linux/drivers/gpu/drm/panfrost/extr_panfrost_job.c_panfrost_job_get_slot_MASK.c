
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct panfrost_job {int requirements; TYPE_2__* pfdev; } ;
struct TYPE_3__ {int nr_core_groups; } ;
struct TYPE_4__ {TYPE_1__ features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_1(struct panfrost_job *VAR_4)
{




 if (VAR_4->requirements & VAR_2)
  return 0;
 return 1;
}
