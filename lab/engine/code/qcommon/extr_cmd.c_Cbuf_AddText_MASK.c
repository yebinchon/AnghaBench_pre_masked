
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cursize; int maxsize; int * data; } ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (char const*) ;

void FUNC_3( const char *VAR_1 ) {
 int VAR_2;

 VAR_2 = FUNC_2 (VAR_1);

 if (VAR_0.cursize + VAR_2 >= VAR_0.maxsize)
 {
  FUNC_1 ("Cbuf_AddText: overflow\n");
  return;
 }
 FUNC_0(&VAR_0.data[VAR_0.cursize], VAR_1, VAR_2);
 VAR_0.cursize += VAR_2;
}
