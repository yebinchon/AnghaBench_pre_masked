
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct gsw_mt753x {int dummy; } ;
struct TYPE_2__ {unsigned int offset; int size; } ;


 int FUNC_0 (int,unsigned int) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct gsw_mt753x*,int ) ;

__attribute__((used)) static u64 FUNC_2(struct gsw_mt753x *VAR_1, int VAR_2, int VAR_3)
{
 unsigned int VAR_4;
 u64 VAR_5, VAR_6, VAR_7;

 VAR_4 = VAR_0[VAR_2].offset;

 if (VAR_0[VAR_2].size == 1)
  return FUNC_1(VAR_1, FUNC_0(VAR_3, VAR_4));

 do {
  VAR_6 = FUNC_1(VAR_1, FUNC_0(VAR_3, VAR_4 + 4));
  VAR_5 = FUNC_1(VAR_1, FUNC_0(VAR_3, VAR_4));
  VAR_7 = FUNC_1(VAR_1, FUNC_0(VAR_3, VAR_4 + 4));
 } while (VAR_7 != VAR_6);

 return (VAR_6 << 32) | VAR_5;
}
