
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct stb6100_state {int dummy; } ;
struct TYPE_2__ {size_t mask; size_t set; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int,char*,size_t) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct stb6100_state*,size_t*,size_t,int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct stb6100_state *VAR_5, u8 VAR_6, u8 VAR_7)
{
 u8 VAR_8 = VAR_7;

 if (FUNC_2(VAR_6 >= VAR_2)) {
  FUNC_0(VAR_4, VAR_1, 1, "Invalid register offset 0x%x", VAR_6);
  return -VAR_0;
 }
 VAR_8 = (VAR_8 & VAR_3[VAR_6].mask) | VAR_3[VAR_6].set;
 return FUNC_1(VAR_5, &VAR_8, VAR_6, 1);
}
