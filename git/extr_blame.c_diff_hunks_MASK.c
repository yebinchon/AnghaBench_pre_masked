
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int member_0; } ;
typedef TYPE_1__ xpparam_t ;
typedef int xdl_emit_hunk_consume_func_t ;
struct TYPE_8__ {int hunk_func; int member_0; } ;
typedef TYPE_2__ xdemitconf_t ;
struct TYPE_9__ {void* priv; int * member_0; } ;
typedef TYPE_3__ xdemitcb_t ;
typedef int mmfile_t ;


 int FUNC_0 (int *,int *,TYPE_1__*,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(mmfile_t *VAR_0, mmfile_t *VAR_1,
        xdl_emit_hunk_consume_func_t VAR_2, void *VAR_3, int VAR_4)
{
 xpparam_t VAR_5 = {0};
 xdemitconf_t VAR_6 = {0};
 xdemitcb_t VAR_7 = {((void*)0)};

 VAR_5.flags = VAR_4;
 VAR_6.hunk_func = VAR_2;
 VAR_7.priv = VAR_3;
 return FUNC_0(VAR_0, VAR_1, &VAR_5, &VAR_6, &VAR_7);
}
