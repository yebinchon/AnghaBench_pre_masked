
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; int rates_len; int len; scalar_t__ str; scalar_t__ mask; scalar_t__ rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct item* FUNC_0 (long long,int ) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static int FUNC_2 (long long VAR_3) {
  struct item *VAR_4 = FUNC_0 (VAR_3, 0);
  if (!VAR_4 || (VAR_4->extra & VAR_0)) { return 0; }
  VAR_4->extra |= VAR_0;
  FUNC_1 (VAR_4->rates, VAR_4->rates_len * 4);
  VAR_4->rates = 0;
  VAR_4->mask = 0;
  VAR_4->rates_len = 0;
  FUNC_1 (VAR_4->str, VAR_4->len+1);
  VAR_2 += VAR_4->len;
  VAR_4->len = 0;
  VAR_4->str = 0;
  VAR_1++;
  return 1;
}
