
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfjail {int * dep; } ;
struct cfdepend {unsigned int flags; struct cfjail** j; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,struct cfdepend*,int ) ;
 struct cfdepend* FUNC_1 (int) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct cfjail *VAR_3, struct cfjail *VAR_4, unsigned VAR_5)
{
 struct cfdepend *VAR_6;

 VAR_6 = FUNC_1(sizeof(struct cfdepend));
 VAR_6->flags = VAR_5;
 VAR_6->j[VAR_0] = VAR_3;
 VAR_6->j[VAR_1] = VAR_4;
 FUNC_0(&VAR_3->dep[VAR_0], VAR_6, VAR_2[VAR_0]);
 FUNC_0(&VAR_4->dep[VAR_1], VAR_6, VAR_2[VAR_1]);
}
