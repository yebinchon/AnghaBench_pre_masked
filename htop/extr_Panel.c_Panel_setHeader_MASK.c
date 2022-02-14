
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int needsRedraw; int header; } ;
typedef TYPE_1__ Panel ;


 int * VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,int ,char const*) ;

inline void FUNC_1(Panel* VAR_2, const char* VAR_3) {
   FUNC_0(&(VAR_2->header), VAR_0[VAR_1], VAR_3);
   VAR_2->needsRedraw = 1;
}
