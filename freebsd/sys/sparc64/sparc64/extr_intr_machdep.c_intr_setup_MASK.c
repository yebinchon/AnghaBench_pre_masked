
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int register_t ;
typedef int iv_func_t ;
typedef int ih_func_t ;
struct TYPE_2__ {int iv_pri; int iv_vec; void* iv_arg; int * iv_func; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int ** VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int,char*,int) ;
 char** VAR_3 ;
 int FUNC_3 (char*,int,char*,int,char*) ;

void
FUNC_4(int VAR_4, ih_func_t *VAR_5, int VAR_6, iv_func_t *VAR_7, void *VAR_8)
{
 char VAR_9[VAR_0 + 1];
 register_t VAR_10;

 VAR_10 = FUNC_0();
 if (VAR_6 != -1) {
  VAR_2[VAR_6].iv_func = VAR_7;
  VAR_2[VAR_6].iv_arg = VAR_8;
  VAR_2[VAR_6].iv_pri = VAR_4;
  VAR_2[VAR_6].iv_vec = VAR_6;
 }
 VAR_1[VAR_4] = VAR_5;
 FUNC_1(VAR_10);
 FUNC_3(VAR_9, VAR_0 + 1, "pil%d: %s", VAR_4, VAR_3[VAR_4]);
 FUNC_2(VAR_4, VAR_9, 1);
}
