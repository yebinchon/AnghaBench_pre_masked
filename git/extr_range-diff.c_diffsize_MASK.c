
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int member_0; } ;
typedef TYPE_1__ xpparam_t ;
struct TYPE_9__ {int ctxlen; int member_0; } ;
typedef TYPE_2__ xdemitconf_t ;
struct TYPE_10__ {char* ptr; void* size; } ;
typedef TYPE_3__ mmfile_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int ,int ,int*,TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, const char *VAR_4)
{
 xpparam_t VAR_5 = { 0 };
 xdemitconf_t VAR_6 = { 0 };
 mmfile_t VAR_7, VAR_8;
 int VAR_9 = 0;

 VAR_7 = (char *)VAR_3;
 VAR_7 = FUNC_2(VAR_3);
 VAR_8 = (char *)VAR_4;
 VAR_8 = FUNC_2(VAR_4);

 VAR_6.ctxlen = 3;
 if (!FUNC_3(&VAR_7, &VAR_8,
      VAR_2, VAR_1, &VAR_9,
      &VAR_5, &VAR_6))
  return VAR_9;

 FUNC_1(FUNC_0("failed to generate diff"));
 return VAR_0;
}
