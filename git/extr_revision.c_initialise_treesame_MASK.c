
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treesame_state {unsigned int nparents; } ;
struct rev_info {int treesame; } ;
struct commit {int object; int parents; } ;


 int FUNC_0 (int *,int *,struct treesame_state*) ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (int,unsigned int) ;
 struct treesame_state* FUNC_3 (int,int ) ;

__attribute__((used)) static struct treesame_state *FUNC_4(struct rev_info *VAR_0, struct commit *VAR_1)
{
 unsigned VAR_2 = FUNC_1(VAR_1->parents);
 struct treesame_state *VAR_3 = FUNC_3(1, FUNC_2(sizeof(*VAR_3), VAR_2));
 VAR_3->nparents = VAR_2;
 FUNC_0(&VAR_0->treesame, &VAR_1->object, VAR_3);
 return VAR_3;
}
