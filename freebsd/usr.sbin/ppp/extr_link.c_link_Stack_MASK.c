
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {int nlayers; struct layer** layer; int name; } ;
struct layer {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;

int
FUNC_1(struct link *VAR_1, struct layer *VAR_2)
{
  if (VAR_1->nlayers == sizeof VAR_1->layer / sizeof VAR_1->layer[0]) {
    FUNC_0(VAR_0, "%s: Oops, cannot stack a %s layer...\n",
               VAR_1->name, VAR_2->name);
    return 0;
  }
  VAR_1->layer[VAR_1->nlayers++] = VAR_2;
  return 1;
}
