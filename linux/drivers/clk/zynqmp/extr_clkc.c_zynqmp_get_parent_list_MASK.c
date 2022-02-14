
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct device_node {int dummy; } ;
struct clock_topology {size_t type; } ;
struct clock_parent {int flag; char* name; } ;
struct TYPE_2__ {size_t num_parents; struct clock_parent* parent; struct clock_topology* node; } ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct device_node*,char*,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_3, u32 VAR_4,
      const char **VAR_5, u32 *VAR_6)
{
 int VAR_7 = 0, VAR_8;
 u32 VAR_9 = VAR_2[VAR_4].num_parents;
 struct clock_topology *VAR_10;
 struct clock_parent *VAR_11;

 VAR_10 = VAR_2[VAR_4].node;
 VAR_11 = VAR_2[VAR_4].parent;

 for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++) {
  if (!VAR_11[VAR_7].flag) {
   VAR_5[VAR_7] = VAR_11[VAR_7].name;
  } else if (VAR_11[VAR_7].flag == VAR_0) {
   VAR_8 = FUNC_0(VAR_3, "clock-names",
             VAR_11[VAR_7].name);
   if (VAR_8 < 0)
    FUNC_2(VAR_11[VAR_7].name, "dummy_name");
   VAR_5[VAR_7] = VAR_11[VAR_7].name;
  } else {
   FUNC_1(VAR_11[VAR_7].name,
          VAR_1[VAR_10[VAR_11[VAR_7].flag - 1].
          type]);
   VAR_5[VAR_7] = VAR_11[VAR_7].name;
  }
 }

 *VAR_6 = VAR_9;
 return 0;
}
