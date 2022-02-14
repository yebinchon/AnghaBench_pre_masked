
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int path; } ;
typedef TYPE_1__ git_index_entry ;
struct TYPE_7__ {int index; } ;
typedef TYPE_2__ checkout_data ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,TYPE_1__ const*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(
 checkout_data *VAR_1,
 const git_index_entry *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1->index, VAR_2->path, 0);

 if (VAR_3 == VAR_0)
  FUNC_0();
 else if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_1->index, VAR_2);
}
