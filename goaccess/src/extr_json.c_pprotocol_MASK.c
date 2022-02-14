
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ append_protocol; } ;
struct TYPE_4__ {scalar_t__ protocol; } ;
typedef TYPE_1__ GMetrics ;
typedef int GJSON ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,int,int ) ;

__attribute__((used)) static void
FUNC_1 (GJSON * VAR_1, GMetrics * VAR_2, int VAR_3)
{

  if (VAR_0.append_protocol && VAR_2->protocol) {
    FUNC_0 (VAR_1, "protocol", VAR_2->protocol, VAR_3, 0);
  }
}
