
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* ptr; size_t size; } ;
typedef TYPE_1__ mmfile_t ;
struct TYPE_7__ {scalar_t__ blob; } ;
typedef TYPE_2__ git_blame__origin ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void FUNC_3(git_blame__origin *VAR_0, mmfile_t *VAR_1)
{
 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 if (VAR_0->blob) {
  VAR_1->ptr = (char*)FUNC_0(VAR_0->blob);
  VAR_1->size = (size_t)FUNC_1(VAR_0->blob);
 }
}
