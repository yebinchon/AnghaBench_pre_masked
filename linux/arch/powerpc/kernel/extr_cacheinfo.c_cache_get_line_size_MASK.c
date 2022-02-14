
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cache {size_t type; int ofnode; } ;
typedef int __be32 ;
struct TYPE_2__ {char** line_size_props; } ;


 int FUNC_0 (char**) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * FUNC_1 (int ,char const*,int *) ;
 unsigned int FUNC_2 (int const*,int) ;

__attribute__((used)) static int FUNC_3(const struct cache *VAR_2, unsigned int *VAR_3)
{
 const __be32 *VAR_4;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_0(VAR_1[VAR_2->type].line_size_props);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  const char *VAR_7;

  VAR_7 = VAR_1[VAR_2->type].line_size_props[VAR_5];
  VAR_4 = FUNC_1(VAR_2->ofnode, VAR_7, ((void*)0));
  if (VAR_4)
   break;
 }

 if (!VAR_4)
  return -VAR_0;

 *VAR_3 = FUNC_2(VAR_4, 1);
 return 0;
}
