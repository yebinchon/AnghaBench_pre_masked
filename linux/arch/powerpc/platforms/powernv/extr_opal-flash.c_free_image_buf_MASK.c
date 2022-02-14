
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; int * data; int size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static void FUNC_4(void)
{
 void *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2.data;
 VAR_4 = FUNC_1(VAR_2.size);
 while (VAR_4 > 0) {
  FUNC_0(FUNC_3(VAR_3));
  VAR_3 += VAR_1;
  VAR_4 -= VAR_1;
 }
 FUNC_2(VAR_2.data);
 VAR_2.data = ((void*)0);
 VAR_2.status = VAR_0;
}
