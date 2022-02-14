
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ flags; } ;
typedef TYPE_1__ xpparam_t ;
typedef int xecfg ;
struct TYPE_12__ {int ctxlen; } ;
typedef TYPE_2__ xdemitconf_t ;
struct TYPE_13__ {int * priv; int out_line; int * out_hunk; } ;
typedef TYPE_3__ xdemitcb_t ;
struct merge_list {int dummy; } ;
struct TYPE_14__ {unsigned long size; int ptr; } ;
typedef TYPE_4__ mmfile_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (struct merge_list*,unsigned long*) ;
 int FUNC_4 (struct merge_list*,unsigned long*) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (TYPE_4__*,TYPE_4__*,TYPE_1__*,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(struct merge_list *VAR_1)
{
 unsigned long VAR_2;
 mmfile_t VAR_3, VAR_4;
 xpparam_t VAR_5;
 xdemitconf_t VAR_6;
 xdemitcb_t VAR_7;

 VAR_5.flags = 0;
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.ctxlen = 3;
 VAR_7.out_hunk = ((void*)0);
 VAR_7.out_line = VAR_0;
 VAR_7.priv = ((void*)0);

 VAR_3.ptr = FUNC_3(VAR_1, &VAR_2);
 if (!VAR_3.ptr)
  VAR_2 = 0;
 VAR_3.size = VAR_2;
 VAR_4.ptr = FUNC_4(VAR_1, &VAR_2);
 if (!VAR_4.ptr)
  VAR_2 = 0;
 VAR_4.size = VAR_2;
 if (FUNC_5(&VAR_3, &VAR_4, &VAR_5, &VAR_6, &VAR_7))
  FUNC_0("unable to generate diff");
 FUNC_1(VAR_3.ptr);
 FUNC_1(VAR_4.ptr);
}
