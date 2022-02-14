
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt_data {int dummy; } ;
struct namedobj_instance {int dummy; } ;
struct dump_args {scalar_t__ tcount; int* bmask; } ;


 int VAR_0 ;
 int FUNC_0 (struct namedobj_instance*,int,struct sockopt_data*) ;

__attribute__((used)) static int
FUNC_1(struct namedobj_instance *VAR_1, struct dump_args *VAR_2,
    struct sockopt_data *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0 && VAR_2->tcount > 0; VAR_5++) {
  if ((VAR_2->bmask[VAR_5 / 32] & (1 << (VAR_5 % 32))) == 0)
   continue;
  if ((VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_3)) != 0)
   return (VAR_4);
  VAR_2->tcount--;
 }
 return (0);
}
