
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {unsigned int max_line_width; void** random_line; void** black_line; void** contrast_line; void*** downsampled_lines; void*** lines; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int,int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 void* FUNC_2 (int ) ;

int FUNC_3(struct tpg_data *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;

 VAR_3->max_line_width = VAR_4;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
   unsigned VAR_7 = VAR_6 ? 2 : 4;

   VAR_3->lines[VAR_5][VAR_6] =
    FUNC_2(FUNC_0(VAR_4, 2, VAR_7));
   if (!VAR_3->lines[VAR_5][VAR_6])
    return -VAR_0;
   if (VAR_6 == 0)
    continue;
   VAR_3->downsampled_lines[VAR_5][VAR_6] =
    FUNC_2(FUNC_0(VAR_4, 2, VAR_7));
   if (!VAR_3->downsampled_lines[VAR_5][VAR_6])
    return -VAR_0;
  }
 }
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  unsigned VAR_8 = VAR_6 ? 2 : 4;

  VAR_3->contrast_line[VAR_6] =
   FUNC_2(FUNC_1(VAR_8, VAR_4));
  if (!VAR_3->contrast_line[VAR_6])
   return -VAR_0;
  VAR_3->black_line[VAR_6] =
   FUNC_2(FUNC_1(VAR_8, VAR_4));
  if (!VAR_3->black_line[VAR_6])
   return -VAR_0;
  VAR_3->random_line[VAR_6] =
   FUNC_2(FUNC_0(VAR_4, 2, VAR_8));
  if (!VAR_3->random_line[VAR_6])
   return -VAR_0;
 }
 return 0;
}
