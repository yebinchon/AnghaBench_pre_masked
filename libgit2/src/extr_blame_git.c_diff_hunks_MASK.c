
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int member_0; } ;
typedef TYPE_1__ xpparam_t ;
struct TYPE_15__ {int hunk_func; int member_0; } ;
typedef TYPE_2__ xdemitconf_t ;
struct TYPE_16__ {void* priv; int member_0; } ;
typedef TYPE_3__ xdemitcb_t ;
struct TYPE_17__ {scalar_t__ size; } ;
typedef TYPE_4__ mmfile_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_4__*,TYPE_1__*,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(mmfile_t VAR_3, mmfile_t VAR_4, void *VAR_5)
{
 xpparam_t VAR_6 = {0};
 xdemitconf_t VAR_7 = {0};
 xdemitcb_t VAR_8 = {0};

 VAR_7.hunk_func = VAR_2;
 VAR_8.priv = VAR_5;

 FUNC_1(&VAR_3, &VAR_4, 0);

 if (VAR_3.size > VAR_1 ||
  VAR_4.size > VAR_1) {
  FUNC_0(VAR_0, "file too large to blame");
  return -1;
 }

 return FUNC_2(&VAR_3, &VAR_4, &VAR_6, &VAR_7, &VAR_8);
}
