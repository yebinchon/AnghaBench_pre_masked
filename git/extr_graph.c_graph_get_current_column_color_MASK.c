
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct git_graph {unsigned short default_column_color; TYPE_2__* revs; } ;
struct TYPE_3__ {int use_color; } ;
struct TYPE_4__ {TYPE_1__ diffopt; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned short FUNC_1(const struct git_graph *VAR_1)
{
 if (!FUNC_0(VAR_1->revs->diffopt.use_color))
  return VAR_0;
 return VAR_1->default_column_color;
}
