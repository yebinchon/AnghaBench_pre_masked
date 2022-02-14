
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {struct apply_state* value; } ;
struct apply_state {int root; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(const struct option *VAR_0,
     const char *VAR_1, int VAR_2)
{
 struct apply_state *VAR_3 = VAR_0->value;

 FUNC_0(VAR_2);

 FUNC_3(&VAR_3->root);
 FUNC_1(&VAR_3->root, VAR_1);
 FUNC_2(&VAR_3->root, '/');
 return 0;
}
