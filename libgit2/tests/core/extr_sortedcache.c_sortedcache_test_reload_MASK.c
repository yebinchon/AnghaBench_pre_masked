
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int value; char smaller_value; } ;
typedef TYPE_1__ sortedcache_test_struct ;
typedef int git_sortedcache ;
struct TYPE_7__ {char* ptr; } ;
typedef TYPE_2__ git_buf ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (void**,int *,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char**,int ) ;

__attribute__((used)) static void FUNC_9(git_sortedcache *VAR_1)
{
 int VAR_2 = 0;
 git_buf VAR_3 = VAR_0;
 char *VAR_4, *VAR_5;
 sortedcache_test_struct *VAR_6;

 FUNC_0(FUNC_5(VAR_1, &VAR_3) > 0);

 FUNC_4(VAR_1, 0);

 for (VAR_4 = VAR_3.ptr; *VAR_4; VAR_4 = VAR_5 + 1) {
  int VAR_7 = FUNC_8(VAR_4, &VAR_5, 0);
  FUNC_0(VAR_5 > VAR_4);
  VAR_4 = VAR_5;

  for (VAR_4 = VAR_5; FUNC_2(*VAR_4); ++VAR_4) ;
  for (VAR_5 = VAR_4; *VAR_5 && *VAR_5 != '\n'; ++VAR_5) ;
  *VAR_5 = '\0';

  FUNC_1(FUNC_6((void **)&VAR_6, VAR_1, VAR_4));

  VAR_6->value = VAR_7;
  VAR_6->smaller_value = (char)(VAR_2++);
 }

 FUNC_7(VAR_1);

 FUNC_3(&VAR_3);
}
