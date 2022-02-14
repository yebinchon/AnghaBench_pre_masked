
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct s6sy761_data {int* data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct s6sy761_data*,int*) ;

__attribute__((used)) static void FUNC_1(struct s6sy761_data *VAR_2, u8 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  u8 *VAR_5 = &VAR_2->data[VAR_4 * VAR_0];
  u8 VAR_6 = VAR_5[0] & VAR_1;

  if (!VAR_5[0])
   return;

  switch (VAR_6) {

  case 129:
   FUNC_0(VAR_2, VAR_5);
   break;

  case 128:
   break;

  default:
   break;
  }
 }
}
