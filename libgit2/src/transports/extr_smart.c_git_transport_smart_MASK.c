
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int cancel; int read_flags; int is_connected; int ls; int push; int download_pack; int negotiate_fetch; int free; int close; int connect; int set_custom_headers; int set_callbacks; int version; } ;
struct TYPE_7__ {TYPE_3__ parent; int wrapped; int heads; int refs; int rpc; int * owner; } ;
typedef TYPE_1__ transport_smart ;
typedef int git_transport ;
struct TYPE_8__ {scalar_t__ (* callback ) (int *,TYPE_3__*,int ) ;int param; int rpc; } ;
typedef TYPE_2__ git_smart_subtransport_definition ;
typedef int git_remote ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_4 (int *,TYPE_3__*,int ) ;

int FUNC_5(git_transport **VAR_14, git_remote *VAR_15, void *VAR_16)
{
 transport_smart *VAR_17;
 git_smart_subtransport_definition *VAR_18 = (git_smart_subtransport_definition *)VAR_16;

 if (!VAR_16)
  return -1;

 VAR_17 = FUNC_1(1, sizeof(transport_smart));
 FUNC_0(VAR_17);

 VAR_17->parent.version = VAR_0;
 VAR_17->parent.set_callbacks = VAR_11;
 VAR_17->parent.set_custom_headers = VAR_12;
 VAR_17->parent.connect = VAR_3;
 VAR_17->parent.close = VAR_2;
 VAR_17->parent.free = VAR_5;
 VAR_17->parent.negotiate_fetch = VAR_8;
 VAR_17->parent.download_pack = VAR_4;
 VAR_17->parent.push = VAR_9;
 VAR_17->parent.ls = VAR_7;
 VAR_17->parent.is_connected = VAR_6;
 VAR_17->parent.read_flags = VAR_10;
 VAR_17->parent.cancel = VAR_1;

 VAR_17->owner = VAR_15;
 VAR_17->rpc = VAR_18->rpc;

 if (FUNC_3(&VAR_17->refs, 16, VAR_13) < 0) {
  FUNC_2(VAR_17);
  return -1;
 }

 if (FUNC_3(&VAR_17->heads, 16, VAR_13) < 0) {
  FUNC_2(VAR_17);
  return -1;
 }

 if (VAR_18->callback(&VAR_17->wrapped, &VAR_17->parent, VAR_18->param) < 0) {
  FUNC_2(VAR_17);
  return -1;
 }

 *VAR_14 = (git_transport *) VAR_17;
 return 0;
}
