
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dbi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct mipi_dbi*,int ,int*) ;

bool FUNC_2(struct mipi_dbi *VAR_5)
{
 u8 VAR_6;

 if (FUNC_1(VAR_5, VAR_4, &VAR_6))
  return 0;

 VAR_6 &= ~VAR_2;


 if (VAR_6 != (VAR_0 |
     VAR_1 | VAR_3))
  return 0;

 FUNC_0("Display is ON\n");

 return 1;
}
