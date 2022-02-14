
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* s; int j; int i; } ;
typedef TYPE_1__ rc4state ;


 int FUNC_0 (int*,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1 ( uint8_t * VAR_2, int VAR_3, rc4state * VAR_4) {
 int VAR_5;
 int VAR_6;
 uint8_t VAR_7;
 FUNC_0(VAR_4->s, &VAR_1, VAR_0);
 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = (VAR_6 + VAR_4->s[VAR_5] + VAR_2[VAR_5 % VAR_3]) % VAR_0;
  VAR_7 = VAR_4->s[VAR_5];
  VAR_4->s[VAR_5] = VAR_4->s[VAR_6];
  VAR_4->s[VAR_6] = VAR_7;
 }
 VAR_4->i = 0;
 VAR_4->j = 0;
}
