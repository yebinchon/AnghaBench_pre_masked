
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mirror {int error_type; int error_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static char FUNC_2(struct mirror *VAR_4)
{
 if (!FUNC_0(&(VAR_4->error_count)))
  return 'A';

 return (FUNC_1(VAR_0, &(VAR_4->error_type))) ? 'F' :
  (FUNC_1(VAR_3, &(VAR_4->error_type))) ? 'D' :
  (FUNC_1(VAR_2, &(VAR_4->error_type))) ? 'S' :
  (FUNC_1(VAR_1, &(VAR_4->error_type))) ? 'R' : 'U';
}
