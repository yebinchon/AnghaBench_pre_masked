
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tocblock {scalar_t__ bitmap1_start; scalar_t__ bitmap1_size; scalar_t__ bitmap2_start; scalar_t__ bitmap2_size; int bitmap2_name; int bitmap1_name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_2 (const struct tocblock *VAR_0,
       const struct tocblock *VAR_1)
{
 FUNC_0 (!VAR_0 || !VAR_1);

 return ((VAR_0->bitmap1_start == VAR_1->bitmap1_start) &&
  (VAR_0->bitmap1_size == VAR_1->bitmap1_size) &&
  (VAR_0->bitmap2_start == VAR_1->bitmap2_start) &&
  (VAR_0->bitmap2_size == VAR_1->bitmap2_size) &&
  !FUNC_1 (VAR_0->bitmap1_name, VAR_1->bitmap1_name,
   sizeof (VAR_0->bitmap1_name)) &&
  !FUNC_1 (VAR_0->bitmap2_name, VAR_1->bitmap2_name,
   sizeof (VAR_0->bitmap2_name)));
}
