
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ ignore_ip_idx; } ;
struct TYPE_7__ {int excluded_ip; } ;
struct TYPE_6__ {int host; } ;
typedef TYPE_1__ GLogItem ;
typedef TYPE_2__ GLog ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (GLog * VAR_1, GLogItem * VAR_2)
{
  if (VAR_0.ignore_ip_idx && FUNC_1 (VAR_2->host)) {
    VAR_1->excluded_ip++;



    return 0;
  }
  return 1;
}
