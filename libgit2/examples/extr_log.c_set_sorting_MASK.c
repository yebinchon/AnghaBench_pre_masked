
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_state {char* repodir; unsigned int sorting; int walker; int repo; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,char*,int ,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct log_state *VAR_1, unsigned int VAR_2)
{

 if (!VAR_1->repo) {
  if (!VAR_1->repodir) VAR_1->repodir = ".";
  FUNC_0(FUNC_1(&VAR_1->repo, VAR_1->repodir, 0, ((void*)0)),
   "Could not open repository", VAR_1->repodir);
 }


 if (!VAR_1->walker)
  FUNC_0(FUNC_2(&VAR_1->walker, VAR_1->repo),
   "Could not create revision walker", ((void*)0));

 if (VAR_2 == VAR_0)
  VAR_1->sorting = VAR_1->sorting ^ VAR_0;
 else
  VAR_1->sorting = VAR_2 | (VAR_1->sorting & VAR_0);

 FUNC_3(VAR_1->walker, VAR_1->sorting);
}
