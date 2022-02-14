
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct walker {scalar_t__ get_verbosely; } ;
struct alt_base {int got_indices; char* base; int packs; } ;




 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct walker *VAR_1, struct alt_base *VAR_2)
{
 int VAR_3;

 if (VAR_2->got_indices)
  return 0;

 if (VAR_1->get_verbosely)
  FUNC_0(VAR_0, "Getting pack list for %s\n", VAR_2->base);

 switch (FUNC_1(VAR_2->base, &VAR_2->packs)) {
 case 128:
 case 129:
  VAR_2->got_indices = 1;
  VAR_3 = 0;
  break;
 default:
  VAR_2->got_indices = 0;
  VAR_3 = -1;
 }

 return VAR_3;
}
