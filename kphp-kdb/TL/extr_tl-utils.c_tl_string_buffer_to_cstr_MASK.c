
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tl_buffer {scalar_t__ size; int pos; int buff; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (int) ;

char *FUNC_3 (struct tl_buffer *VAR_0) {
  if (VAR_0->size == 0) {
    return FUNC_0 ("");
  }
  char *VAR_1 = FUNC_2 (VAR_0->pos+1);
  FUNC_1 (VAR_1, VAR_0->buff, VAR_0->pos);
  VAR_1[VAR_0->pos] = 0;
  return VAR_1;
}
