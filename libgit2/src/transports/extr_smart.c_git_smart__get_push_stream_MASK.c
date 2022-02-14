
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ direction; int buffer_data; int buffer; int * current_stream; scalar_t__ rpc; int url; TYPE_2__* wrapped; } ;
typedef TYPE_1__ transport_smart ;
typedef int git_smart_subtransport_stream ;
struct TYPE_7__ {int (* action ) (int **,TYPE_2__*,int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int *,int ,int,int ,TYPE_1__*) ;
 int FUNC_4 (int **,TYPE_2__*,int ,int ) ;

int FUNC_5(transport_smart *VAR_4, git_smart_subtransport_stream **VAR_5)
{
 int VAR_6;

 if (VAR_4->rpc && FUNC_2(VAR_4, 0) < 0)
  return -1;

 if (VAR_0 != VAR_4->direction) {
  FUNC_1(VAR_1, "this operation is only valid for push");
  return -1;
 }

 if ((VAR_6 = VAR_4->wrapped->action(VAR_5, VAR_4->wrapped, VAR_4->url, VAR_2)) < 0)
  return VAR_6;


 FUNC_0(VAR_4->rpc || VAR_4->current_stream == *VAR_5);


 VAR_4->current_stream = *VAR_5;

 FUNC_3(&VAR_4->buffer, VAR_4->buffer_data, sizeof(VAR_4->buffer_data), VAR_3, VAR_4);

 return 0;
}
