
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_6__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char*) ;
 TYPE_1__* FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;

void FUNC_8(void)
{
 const git_index_entry *VAR_4;

 FUNC_2(FUNC_5("defer",
  &VAR_3.base));

 FUNC_3(VAR_1, "merge.default", "defer");
 FUNC_7();

 FUNC_0((VAR_4 = FUNC_4(VAR_2, "automergeable.txt", 0)));
 FUNC_1(&VAR_0, &VAR_4->id);

 FUNC_6("defer");
}
