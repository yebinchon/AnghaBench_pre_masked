
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ignore_statics; scalar_t__ ignore_qstr; } ;
struct TYPE_5__ {int req; int status; int site; int agent; } ;
typedef TYPE_1__ GLogItem ;
typedef int GLog ;


 int VAR_0 ;
 TYPE_4__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6 (GLog * VAR_2, GLogItem * VAR_3)
{
  if (FUNC_0 (VAR_2, VAR_3) == 0)
    return VAR_0;
  if (FUNC_1 (VAR_3->agent) == 0)
    return VAR_0;
  if (FUNC_2 (VAR_3->site))
    return VAR_0;
  if (FUNC_4 (VAR_3->status))
    return VAR_0;
  if (FUNC_3 (VAR_3->req))
    return VAR_1.ignore_statics;


  if (VAR_1.ignore_qstr)
    FUNC_5 (VAR_3->req);

  return 0;
}
