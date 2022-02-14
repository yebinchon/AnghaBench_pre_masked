
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int git_status_list ;
struct TYPE_3__ {int status; } ;
typedef TYPE_1__ git_status_entry ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,size_t) ;
 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_2 (int *,size_t) ;
 size_t FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(git_status_list *VAR_2)
{
 size_t VAR_3, VAR_4 = FUNC_3(VAR_2);
 FUNC_1(VAR_0, VAR_4);
 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  const git_status_entry *VAR_5 = FUNC_2(VAR_2, VAR_3);
  FUNC_0(VAR_1[VAR_3], VAR_5->status);
 }
}
