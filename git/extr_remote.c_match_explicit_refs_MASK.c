
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec {int nr; int * items; } ;
struct ref {int dummy; } ;


 scalar_t__ FUNC_0 (struct ref*,struct ref*,struct ref***,int *) ;

__attribute__((used)) static int FUNC_1(struct ref *VAR_0, struct ref *VAR_1,
          struct ref ***VAR_2, struct refspec *VAR_3)
{
 int VAR_4, VAR_5;
 for (VAR_4 = VAR_5 = 0; VAR_4 < VAR_3->nr; VAR_4++)
  VAR_5 += FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->items[VAR_4]);
 return VAR_5;
}
