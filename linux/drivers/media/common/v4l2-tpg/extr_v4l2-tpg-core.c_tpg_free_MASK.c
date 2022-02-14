
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {int ** random_line; int ** black_line; int ** contrast_line; int *** downsampled_lines; int *** lines; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct tpg_data *VAR_2)
{
 unsigned VAR_3;
 unsigned VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   FUNC_0(VAR_2->lines[VAR_3][VAR_4]);
   VAR_2->lines[VAR_3][VAR_4] = ((void*)0);
   if (VAR_4 == 0)
    continue;
   FUNC_0(VAR_2->downsampled_lines[VAR_3][VAR_4]);
   VAR_2->downsampled_lines[VAR_3][VAR_4] = ((void*)0);
  }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_0(VAR_2->contrast_line[VAR_4]);
  FUNC_0(VAR_2->black_line[VAR_4]);
  FUNC_0(VAR_2->random_line[VAR_4]);
  VAR_2->contrast_line[VAR_4] = ((void*)0);
  VAR_2->black_line[VAR_4] = ((void*)0);
  VAR_2->random_line[VAR_4] = ((void*)0);
 }
}
