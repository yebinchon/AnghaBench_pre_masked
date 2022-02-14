
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extra; int mask; unsigned int* rates; int rates_len; } ;
typedef TYPE_1__ item_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,long long) ;
 void* FUNC_2 (unsigned int*,int,int) ;

int FUNC_3 (item_t *VAR_1, long long VAR_2) {
  FUNC_1 (3, "set_hash_item : %016llx\n", VAR_2);

  if (!VAR_1 || (VAR_1->extra & VAR_0)) {
    return 0;
  }
  if ( (VAR_1->mask & 0xc000) != 0xc000) {
    FUNC_0( ! (VAR_1->mask & 0xc000) );
    void *VAR_3 = FUNC_2 (VAR_1->rates, VAR_1->rates_len << 2, (VAR_1->rates_len + 2) << 2);
    if (VAR_3 == 0) {
      return 0;
    }
    VAR_1->mask |= 0xc000;
    VAR_1->rates_len += 2;
    VAR_1->rates = VAR_3;
  }
  FUNC_0 (VAR_1->rates_len >= 2);
  VAR_1->rates[VAR_1->rates_len-1] = (unsigned int) (VAR_2 >> 32);
  VAR_1->rates[VAR_1->rates_len-2] = (unsigned int) VAR_2;
  return 1;
}
