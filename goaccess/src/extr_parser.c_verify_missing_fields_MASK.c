
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * errstr; int * req; int * date; int * host; } ;
typedef TYPE_1__ GLogItem ;


 void* FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1 (GLogItem * VAR_0)
{

  if (VAR_0->host == ((void*)0))
    VAR_0->errstr = FUNC_0 ("IPv4/6 is required.");
  else if (VAR_0->date == ((void*)0))
    VAR_0->errstr = FUNC_0 ("A valid date is required.");
  else if (VAR_0->req == ((void*)0))
    VAR_0->errstr = FUNC_0 ("A request is required.");

  return VAR_0->errstr != ((void*)0);
}
