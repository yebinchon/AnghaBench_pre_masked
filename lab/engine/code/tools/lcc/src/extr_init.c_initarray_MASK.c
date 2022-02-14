
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* Type ;
struct TYPE_4__ {scalar_t__ size; } ;


 char FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int) ;
 char VAR_0 ;

__attribute__((used)) static int FUNC_2(int VAR_1, Type VAR_2, int VAR_3) {
 int VAR_4 = 0;

 do {
  FUNC_1(VAR_2, VAR_3);
  VAR_4 += VAR_2->size;
  if ((VAR_1 > 0 && VAR_4 >= VAR_1) || VAR_0 != ',')
   break;
  VAR_0 = FUNC_0();
 } while (VAR_0 != '}');
 return VAR_4;
}
