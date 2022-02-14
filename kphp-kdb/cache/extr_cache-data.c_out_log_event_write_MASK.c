
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sz; int b; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2 (long long *VAR_1) {
  FUNC_0 (VAR_0.sz);
  FUNC_0 (!(VAR_0.sz & 3));
  FUNC_1 (VAR_0.b, VAR_0.sz);
  VAR_0.sz = 0;
  (*VAR_1)++;
}
