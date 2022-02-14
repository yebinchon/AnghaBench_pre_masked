
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ content; int count; } ;
typedef TYPE_1__ my_struct ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(void **VAR_2, void *VAR_3)
{
 my_struct *VAR_4 = *(my_struct **)VAR_2;
 FUNC_0(((my_struct *)VAR_4)->content == ((my_struct *)VAR_3)->content);
 ((my_struct *)VAR_4)->count += 1;
 FUNC_1(VAR_3);
 VAR_1--;
 return VAR_0;
}
