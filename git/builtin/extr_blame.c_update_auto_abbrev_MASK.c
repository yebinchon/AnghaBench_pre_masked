
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blame_origin {TYPE_2__* commit; } ;
struct TYPE_3__ {int oid; } ;
struct TYPE_4__ {TYPE_1__ object; } ;


 char* FUNC_0 (int *,int) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct blame_origin *VAR_1)
{
 const char *VAR_2 = FUNC_0(&VAR_1->commit->object.oid,
           VAR_0);
 int VAR_3 = FUNC_1(VAR_2);
 if (VAR_0 < VAR_3)
  return VAR_3;
 return VAR_0;
}
