
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct orc_entry {scalar_t__ sp_reg; int end; } ;


 scalar_t__ VAR_0 ;
 int const* VAR_1 ;
 struct orc_entry* VAR_2 ;
 unsigned long FUNC_0 (int const*) ;

__attribute__((used)) static int FUNC_1(const void *VAR_3, const void *VAR_4)
{
 struct orc_entry *VAR_5;
 const int *VAR_6 = VAR_3, *VAR_7 = VAR_4;
 unsigned long VAR_8 = FUNC_0(VAR_6);
 unsigned long VAR_9 = FUNC_0(VAR_7);

 if (VAR_8 > VAR_9)
  return 1;
 if (VAR_8 < VAR_9)
  return -1;







 VAR_5 = VAR_2 + (VAR_6 - VAR_1);
 return VAR_5->sp_reg == VAR_0 && !VAR_5->end ? -1 : 1;
}
