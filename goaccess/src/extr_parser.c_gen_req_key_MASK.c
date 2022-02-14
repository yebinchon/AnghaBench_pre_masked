
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ req; int req_key; scalar_t__ qstr; } ;
typedef TYPE_1__ GLogItem ;
typedef int GKeyData ;


 int FUNC_0 (scalar_t__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_3 (GKeyData * VAR_0, GLogItem * VAR_1)
{
  if (VAR_1->req && VAR_1->qstr)
    FUNC_0 (&VAR_1->req, VAR_1->qstr);
  VAR_1->req_key = FUNC_1 (VAR_1);

  FUNC_2 (VAR_0, VAR_1->req_key, VAR_1->req);

  return 0;
}
