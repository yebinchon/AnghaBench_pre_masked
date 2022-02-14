
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dbi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,size_t,int ) ;
 int FUNC_2 (struct mipi_dbi*,int ,int *,size_t) ;

int FUNC_3(struct mipi_dbi *VAR_2, u8 VAR_3, u8 *VAR_4, size_t VAR_5)
{
 u8 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_6, VAR_5);

 FUNC_0(VAR_6);

 return VAR_7;
}
