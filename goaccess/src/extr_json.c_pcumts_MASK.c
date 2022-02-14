
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int serve_usecs; } ;
struct TYPE_5__ {int nts; } ;
struct TYPE_6__ {TYPE_1__ cumts; } ;
typedef TYPE_2__ GMetrics ;
typedef int GJSON ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_1 (GJSON * VAR_1, GMetrics * VAR_2, int VAR_3)
{
  if (!VAR_0.serve_usecs)
    return;
  FUNC_0 (VAR_1, "cumts", VAR_2->cumts.nts, VAR_3, 0);
}
