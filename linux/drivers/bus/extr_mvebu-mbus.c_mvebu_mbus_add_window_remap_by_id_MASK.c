
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvebu_mbus_state {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 struct mvebu_mbus_state VAR_1 ;
 int FUNC_0 (struct mvebu_mbus_state*,int ,size_t,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct mvebu_mbus_state*,int ,size_t,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int) ;

int FUNC_3(unsigned int VAR_2,
          unsigned int VAR_3,
          phys_addr_t VAR_4, size_t VAR_5,
          phys_addr_t VAR_6)
{
 struct mvebu_mbus_state *VAR_7 = &VAR_1;

 if (!FUNC_1(VAR_7, VAR_4, VAR_5, VAR_2, VAR_3)) {
  FUNC_2("cannot add window '%x:%x', conflicts with another window\n",
         VAR_2, VAR_3);
  return -VAR_0;
 }

 return FUNC_0(VAR_7, VAR_4, VAR_5, VAR_6, VAR_2, VAR_3);
}
