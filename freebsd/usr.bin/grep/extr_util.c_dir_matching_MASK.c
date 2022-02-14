
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mode; int pat; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (int ,char const*,int ) ;

__attribute__((used)) static inline bool
FUNC_1(const char *VAR_4)
{
 bool VAR_5;

 VAR_5 = VAR_1 ? 0 : 1;

 for (unsigned int VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
  if (VAR_4 != ((void*)0) && FUNC_0(VAR_2[VAR_6].pat, VAR_4, 0) == 0)




   VAR_5 = (VAR_2[VAR_6].mode != VAR_0);
 }
 return (VAR_5);
}
