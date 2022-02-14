
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; } ;


 TYPE_1__** VAR_0 ;
 unsigned int FUNC_0 (char const* const) ;
 int FUNC_1 (char const* const,int *) ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_2 (const char *const VAR_2) {
  const unsigned VAR_3 = FUNC_0 (VAR_2);
  if (VAR_0[VAR_3] && !FUNC_1 (VAR_2, &VAR_0[VAR_3]->data[VAR_1])) {
    VAR_0[VAR_3] = ((void*)0);
  }
}
