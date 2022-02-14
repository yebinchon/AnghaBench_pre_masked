
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct paace {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static unsigned long FUNC_1(u32 VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3 * sizeof(struct paace));
 if (!VAR_4)
  return VAR_0;

 return (VAR_4 - (unsigned long)VAR_2) / (sizeof(struct paace));
}
