
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cancel; int read_flags; int is_connected; int ls; int free; int close; int push; int download_pack; int negotiate_fetch; int connect; int set_callbacks; int version; } ;
struct TYPE_7__ {int * owner; int refs; TYPE_1__ parent; } ;
typedef TYPE_2__ transport_local ;
typedef int git_transport ;
typedef int git_remote ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (void*) ;
 TYPE_2__* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int ,int *) ;
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

int FUNC_5(git_transport **VAR_12, git_remote *VAR_13, void *VAR_14)
{
 int VAR_15;
 transport_local *VAR_16;

 FUNC_1(VAR_14);

 VAR_16 = FUNC_2(1, sizeof(transport_local));
 FUNC_0(VAR_16);

 VAR_16->parent.version = VAR_0;
 VAR_16->parent.set_callbacks = VAR_11;
 VAR_16->parent.connect = VAR_3;
 VAR_16->parent.negotiate_fetch = VAR_8;
 VAR_16->parent.download_pack = VAR_4;
 VAR_16->parent.push = VAR_9;
 VAR_16->parent.close = VAR_2;
 VAR_16->parent.free = VAR_5;
 VAR_16->parent.ls = VAR_7;
 VAR_16->parent.is_connected = VAR_6;
 VAR_16->parent.read_flags = VAR_10;
 VAR_16->parent.cancel = VAR_1;

 if ((VAR_15 = FUNC_4(&VAR_16->refs, 0, ((void*)0))) < 0) {
  FUNC_3(VAR_16);
  return VAR_15;
 }

 VAR_16->owner = VAR_13;

 *VAR_12 = (git_transport *) VAR_16;

 return 0;
}
