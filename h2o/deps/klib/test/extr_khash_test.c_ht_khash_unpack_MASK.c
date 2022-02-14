
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int key; int val; } ;
typedef TYPE_1__ int_unpack_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,unsigned int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ,int,TYPE_1__,int*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int) ;

void FUNC_7()
{
 int VAR_4, VAR_5;
 unsigned *VAR_6 = VAR_2;
 FUNC_5(VAR_3) *VAR_1;
 unsigned VAR_7;

 VAR_1 = FUNC_2(VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  int_unpack_t VAR_8;
  VAR_8.key = VAR_6[VAR_4]; VAR_8.val = VAR_4&0xff;
  VAR_7 = FUNC_3(VAR_3, VAR_1, VAR_8, &VAR_5);
  if (!VAR_5) FUNC_0(VAR_3, VAR_1, VAR_7);
 }
 FUNC_6("[ht_khash_unpack] size: %u (sizeof=%ld)\n", FUNC_4(VAR_1), sizeof(int_unpack_t));
 FUNC_1(VAR_3, VAR_1);
}
