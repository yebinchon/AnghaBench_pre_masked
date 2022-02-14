
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct devx_obj {int dinbox; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

bool FUNC_1(void *VAR_7, int *VAR_8, int *VAR_9)
{
 struct devx_obj *VAR_10 = VAR_7;
 u16 VAR_11 = FUNC_0(VAR_3, VAR_10->dinbox, VAR_11);

 switch (VAR_11) {
 case 128:
  *VAR_9 = VAR_1;
  *VAR_8 = FUNC_0(VAR_3, VAR_10->dinbox,
        VAR_4);
  return 1;

 case 129:
  *VAR_9 = VAR_0;
  *VAR_8 = FUNC_0(VAR_2, VAR_10->dinbox,
        VAR_6);
  return 1;
 default:
  return 0;
 }
}
