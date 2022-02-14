
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CLEANABLE_FILE {int fn; } ;


 int FUNC_0 (int *,struct CLEANABLE_FILE*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct CLEANABLE_FILE* FUNC_3 (int) ;
 int FUNC_4 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_5(const char *VAR_3)
{

 if (VAR_3) {
  FUNC_2(&VAR_2);
  struct CLEANABLE_FILE *VAR_4 =
      FUNC_3(sizeof(struct CLEANABLE_FILE));
  VAR_4->fn = FUNC_4(VAR_3);
  FUNC_0(&VAR_1, VAR_4, VAR_0);
  FUNC_1(&VAR_2);
 }
}
