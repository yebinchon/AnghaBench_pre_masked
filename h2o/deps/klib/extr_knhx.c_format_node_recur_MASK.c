
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kstring_t ;
struct TYPE_4__ {int n; size_t* child; char* name; scalar_t__ d; } ;
typedef TYPE_1__ knhx1_t ;


 int FUNC_0 (char,int *) ;
 int FUNC_1 (char*,int ,int *) ;
 int FUNC_2 (char*,char*,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(const knhx1_t *VAR_0, const knhx1_t *VAR_1, kstring_t *VAR_2, char *VAR_3)
{
 if (VAR_1->n) {
  int VAR_4;
  FUNC_0('(', VAR_2);
  for (VAR_4 = 0; VAR_4 < VAR_1->n; ++VAR_4) {
   if (VAR_4) FUNC_0(',', VAR_2);
   FUNC_4(VAR_0, &VAR_0[VAR_1->child[VAR_4]], VAR_2, VAR_3);
  }
  FUNC_0(')', VAR_2);
  if (VAR_1->name) FUNC_1(VAR_1->name, FUNC_3(VAR_1->name), VAR_2);
  if (VAR_1->d >= 0) {
   FUNC_2(VAR_3, ":%g", VAR_1->d);
   FUNC_1(VAR_3, FUNC_3(VAR_3), VAR_2);
  }
 } else FUNC_1(VAR_1->name, FUNC_3(VAR_1->name), VAR_2);
}
