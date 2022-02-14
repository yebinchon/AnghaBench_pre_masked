
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apply_state {int prefix; int root; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *,char const*,int *,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static int FUNC_6(struct apply_state *VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 int VAR_4 = -1;

 if (FUNC_3(VAR_1))
  return -1;
 VAR_2 = FUNC_1(&VAR_0->root, VAR_1, ((void*)0), 0);
 if (!VAR_2)
  return -1;
 VAR_3 = FUNC_5(VAR_2, '/');
 if (!VAR_3)
  VAR_4 = 0;
 else if (VAR_0->prefix) {




  if (FUNC_4(VAR_2, VAR_0->prefix))
   VAR_4 = FUNC_0(VAR_0->prefix);
  else {
   VAR_3++;
   if (FUNC_4(VAR_3, VAR_0->prefix))
    VAR_4 = FUNC_0(VAR_0->prefix) + 1;
  }
 }
 FUNC_2(VAR_2);
 return VAR_4;
}
