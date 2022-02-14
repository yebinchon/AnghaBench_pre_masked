
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct i40iw_sc_dev {int* fcn_id_array; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static u8 FUNC_0(struct i40iw_sc_dev *VAR_3)
{
 u8 VAR_4 = VAR_1;
 u8 VAR_5;

 for (VAR_5 = VAR_0; VAR_5 < VAR_2; VAR_5++)
  if (!VAR_3->fcn_id_array[VAR_5]) {
   VAR_4 = VAR_5;
   VAR_3->fcn_id_array[VAR_5] = 1;
   break;
  }
 return VAR_4;
}
