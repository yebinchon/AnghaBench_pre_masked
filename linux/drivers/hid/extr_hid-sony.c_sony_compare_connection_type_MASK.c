
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int quirks; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct sony_sc *VAR_1,
      struct sony_sc *VAR_2)
{
 const int VAR_3 = !(VAR_1->quirks & VAR_0);
 const int VAR_4 = !(VAR_2->quirks & VAR_0);

 return VAR_3 == VAR_4;
}
