
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct object_id {int dummy; } ;
struct TYPE_2__ {int hexsz; } ;


 int FUNC_0 (char const*,struct object_id*) ;
 TYPE_1__* VAR_0 ;

int FUNC_1(const char *VAR_1, struct object_id *VAR_2, const char **VAR_3)
{
 int VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4)
  *VAR_3 = VAR_1 + VAR_0->hexsz;
 return VAR_4;
}
