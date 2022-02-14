
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct foreach_state {int dummy; } ;
typedef int git_buf ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct foreach_state*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, git_buf *VAR_2)
{
 struct foreach_state *VAR_3 = (struct foreach_state *) VAR_1;


 if (!FUNC_2(FUNC_0(VAR_2)))
  return 0;

 return FUNC_1(VAR_2, 0, VAR_0, VAR_3);
}
