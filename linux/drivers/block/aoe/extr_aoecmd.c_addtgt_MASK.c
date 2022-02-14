
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct aoetgt {int nframes; int maxout; int ffree; int ifs; int ifp; int addr; struct aoedev* d; } ;
struct aoedev {int ntargets; struct aoetgt** targets; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct aoetgt*) ;
 struct aoetgt** FUNC_2 (struct aoedev*) ;
 struct aoetgt* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct aoetgt *
FUNC_6(struct aoedev *VAR_1, char *VAR_2, ulong VAR_3)
{
 struct aoetgt *VAR_4, **VAR_5, **VAR_6;

 VAR_5 = VAR_1->targets;
 VAR_6 = VAR_5 + VAR_1->ntargets;
 for (; VAR_5 < VAR_6 && *VAR_5; VAR_5++)
  ;

 if (VAR_5 == VAR_6) {
  VAR_5 = FUNC_2(VAR_1);
  if (!VAR_5)
   goto nomem;
 }
 VAR_4 = FUNC_3(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  goto nomem;
 VAR_4->nframes = VAR_3;
 VAR_4->d = VAR_1;
 FUNC_4(VAR_4->addr, VAR_2, sizeof VAR_4->addr);
 VAR_4->ifp = VAR_4->ifs;
 FUNC_1(VAR_4);
 VAR_4->maxout = VAR_4->nframes / 2;
 FUNC_0(&VAR_4->ffree);
 return *VAR_5 = VAR_4;

 nomem:
 FUNC_5("aoe: cannot allocate memory to add target\n");
 return ((void*)0);
}
