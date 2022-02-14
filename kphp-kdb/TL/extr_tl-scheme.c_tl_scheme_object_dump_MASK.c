
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_scheme_object {int dummy; } ;
struct tl_buffer {char* buff; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct tl_buffer*,struct tl_scheme_object*) ;
 int FUNC_2 (struct tl_buffer*,int ) ;
 int FUNC_3 (struct tl_buffer*) ;
 int FUNC_4 (struct tl_buffer*) ;

void FUNC_5 (FILE *VAR_0, struct tl_scheme_object *VAR_1) {
  struct tl_buffer VAR_2;
  FUNC_4 (&VAR_2);
  FUNC_1 (&VAR_2, VAR_1);
  FUNC_2 (&VAR_2, 0);
  FUNC_0 (VAR_0, "%s", VAR_2.buff);
  FUNC_3 (&VAR_2);
}
