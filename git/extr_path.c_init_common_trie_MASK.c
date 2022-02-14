
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct common_dir {scalar_t__ path; } ;


 int FUNC_0 (int *,scalar_t__,struct common_dir*) ;
 struct common_dir* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 struct common_dir *VAR_3;

 if (VAR_2)
  return;

 for (VAR_3 = VAR_0; VAR_3->path; VAR_3++)
  FUNC_0(&VAR_1, VAR_3->path, VAR_3);

 VAR_2 = 1;
}
