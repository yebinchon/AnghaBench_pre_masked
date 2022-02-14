
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expected_entry {int seen; scalar_t__ name; } ;
typedef int git_config_backend ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,struct expected_entry*) ;

__attribute__((used)) static void FUNC_3(git_config_backend *VAR_1,
 struct expected_entry *VAR_2)
{
 int VAR_3;

 FUNC_1(FUNC_2(VAR_1, VAR_0, VAR_2));

 for (VAR_3 = 0; VAR_2[VAR_3].name; VAR_3++)
  FUNC_0(VAR_2[VAR_3].seen);
}
