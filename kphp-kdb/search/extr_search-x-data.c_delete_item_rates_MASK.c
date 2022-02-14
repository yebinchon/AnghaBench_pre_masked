
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int rates_len; int extra; scalar_t__ mask; scalar_t__ rates; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_1 (struct item *VAR_1) {
  FUNC_0 (VAR_1->rates, VAR_1->rates_len * 4);
  VAR_1->rates = 0;
  VAR_1->rates_len = 0;
  VAR_1->mask = 0;
  VAR_1->extra |= VAR_0;
}
