
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dbi {int read_commands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mipi_dbi*,int ,int *,int) ;
 int FUNC_1 (struct mipi_dbi*,int ) ;

int FUNC_2(struct mipi_dbi *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 if (!VAR_2->read_commands)
  return -VAR_0;

 if (!FUNC_1(VAR_2, VAR_3))
  return -VAR_1;

 return FUNC_0(VAR_2, VAR_3, VAR_4, 1);
}
