
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int lines; } ;
typedef TYPE_1__ patch_image ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,size_t) ;

__attribute__((used)) static bool FUNC_2(
 size_t *VAR_0,
 patch_image *VAR_1,
 patch_image *VAR_2,
 size_t VAR_3)
{
 size_t VAR_4 = FUNC_0(&VAR_1->lines);
 bool VAR_5;

 if (VAR_3 > VAR_4)
  VAR_3 = VAR_4;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);

 *VAR_0 = VAR_3;
 return VAR_5;
}
