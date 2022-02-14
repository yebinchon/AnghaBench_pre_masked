
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int ctxlen; scalar_t__ flags; } ;
typedef TYPE_1__ xpparam_t ;
typedef int xpp ;
typedef int xecfg ;
typedef TYPE_1__ xdemitconf_t ;
struct TYPE_13__ {int out_line; int * out_hunk; } ;
typedef TYPE_3__ xdemitcb_t ;
struct TYPE_14__ {int ptr; } ;
typedef TYPE_4__ mmfile_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,char const*,char const*) ;
 scalar_t__ FUNC_4 (TYPE_4__*,char const*) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_4__*,TYPE_4__*,TYPE_1__*,TYPE_1__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_2, const char *VAR_3,
  const char *VAR_4, const char *VAR_5)
{
 xpparam_t VAR_6;
 xdemitconf_t VAR_7;
 xdemitcb_t VAR_8;
 mmfile_t VAR_9, VAR_10;
 int VAR_11;

 if (FUNC_4(&VAR_9, VAR_2) || FUNC_4(&VAR_10, VAR_4))
  return -1;

 FUNC_3("--- a/%s\n+++ b/%s\n", VAR_3, VAR_5);
 FUNC_0(VAR_1);
 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.flags = 0;
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.ctxlen = 3;
 VAR_8.out_hunk = ((void*)0);
 VAR_8.out_line = VAR_0;
 VAR_11 = FUNC_5(&VAR_9, &VAR_10, &VAR_6, &VAR_7, &VAR_8);

 FUNC_1(VAR_9.ptr);
 FUNC_1(VAR_10.ptr);
 return VAR_11;
}
