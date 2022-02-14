
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct object_id const*,int ) ;
 int FUNC_2 (struct object_id const*) ;
 int FUNC_3 (char,int *) ;

__attribute__((used)) static void FUNC_4(const struct object_id *VAR_1, FILE *VAR_2, int VAR_3)
{
 if (VAR_3 &&
     !FUNC_1(VAR_1, VAR_0))
  return;

 if (VAR_3)
  FUNC_3('^', VAR_2);
 FUNC_0(FUNC_2(VAR_1), VAR_2);
 FUNC_3('\n', VAR_2);
}
