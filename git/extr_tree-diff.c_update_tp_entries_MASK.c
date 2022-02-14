
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct tree_desc {TYPE_1__ entry; } ;


 int VAR_0 ;
 int FUNC_0 (struct tree_desc*) ;

__attribute__((used)) static inline void FUNC_1(struct tree_desc *VAR_1, int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  if (!(VAR_1[VAR_3].entry.mode & VAR_0))
   FUNC_0(&VAR_1[VAR_3]);
}
