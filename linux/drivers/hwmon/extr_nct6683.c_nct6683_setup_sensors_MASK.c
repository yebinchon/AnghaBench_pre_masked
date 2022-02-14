
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nct6683_data {size_t temp_num; size_t in_num; int* temp_index; size_t* temp_src; int* in_index; size_t* in_src; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int ** VAR_3 ;
 int FUNC_1 (struct nct6683_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct nct6683_data *VAR_4)
{
 u8 VAR_5;
 int VAR_6;

 VAR_4->temp_num = 0;
 VAR_4->in_num = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, FUNC_0(VAR_6)) & 0x7f;

  if (VAR_5 >= VAR_2)
   continue;

  if (VAR_3[VAR_5] == ((void*)0))
   continue;
  if (VAR_5 < VAR_0) {
   VAR_4->temp_index[VAR_4->temp_num] = VAR_6;
   VAR_4->temp_src[VAR_4->temp_num] = VAR_5;
   VAR_4->temp_num++;
  } else {
   VAR_4->in_index[VAR_4->in_num] = VAR_6;
   VAR_4->in_src[VAR_4->in_num] = VAR_5;
   VAR_4->in_num++;
  }
 }
}
