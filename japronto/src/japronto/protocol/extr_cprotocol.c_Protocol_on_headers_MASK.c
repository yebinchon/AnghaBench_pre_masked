
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* Request_from_raw ) (int *,char*,size_t,char*,size_t,int,void*,size_t) ;int RequestType; } ;
struct TYPE_5__ {int static_request; } ;
typedef TYPE_1__ Protocol ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (int *,char*,size_t,char*,size_t,int,void*,size_t) ;

Protocol*
FUNC_3(Protocol* VAR_1, char* VAR_2, size_t VAR_3,
                    char* VAR_4, size_t VAR_5, int VAR_6,
                    void* VAR_7, size_t VAR_8)
{
  Protocol* VAR_9 = VAR_1;

  FUNC_0(&VAR_1->static_request);
  FUNC_1(VAR_0->RequestType, &VAR_1->static_request);

  VAR_0->Request_from_raw(
    &VAR_1->static_request, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
    VAR_7, VAR_8);

  goto finally;

  finally:
  return VAR_9;
}
