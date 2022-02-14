
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t pszind_t ;
struct TYPE_3__ {int * nbytes; int * nextents; } ;
typedef TYPE_1__ eset_t ;


 int VAR_0 ;
 size_t FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,size_t,int ) ;

__attribute__((used)) static void
FUNC_2(eset_t *VAR_1, pszind_t VAR_2, size_t VAR_3) {
 size_t VAR_4 = FUNC_0(&VAR_1->nextents[VAR_2], VAR_0);
 FUNC_1(&VAR_1->nextents[VAR_2], VAR_4 - 1, VAR_0);
 VAR_4 = FUNC_0(&VAR_1->nbytes[VAR_2], VAR_0);
 FUNC_1(&VAR_1->nbytes[VAR_2], VAR_4 - VAR_3, VAR_0);
}
