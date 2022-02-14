
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ git_index_entry ;
typedef int git_index ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (size_t*,int *,char const*) ;
 TYPE_1__* FUNC_6 (int *,size_t) ;
 int FUNC_7 (int *,char const*) ;

__attribute__((used)) static void FUNC_8(git_index *VAR_1, const char *VAR_2, const char *VAR_3)
{
 size_t VAR_4;
 const git_index_entry *VAR_5;

 FUNC_0(VAR_2, VAR_0);
 FUNC_3(FUNC_4(VAR_1, VAR_2));

 FUNC_1(!FUNC_5(&VAR_4, VAR_1, VAR_2));

 VAR_5 = FUNC_6(VAR_1, VAR_4);
 FUNC_2(0, FUNC_7(&VAR_5->id, VAR_3));
}
