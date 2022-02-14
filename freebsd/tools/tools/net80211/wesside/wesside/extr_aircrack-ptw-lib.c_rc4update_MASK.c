
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
struct TYPE_3__ {size_t i; size_t j; size_t* s; } ;
typedef TYPE_1__ rc4state ;



__attribute__((used)) static uint8_t FUNC_0(rc4state * VAR_0) {
 uint8_t VAR_1;
 uint8_t VAR_2;
 VAR_0->i++;
 VAR_0->j += VAR_0->s[VAR_0->i];
 VAR_1 = VAR_0->s[VAR_0->i];
 VAR_0->s[VAR_0->i] = VAR_0->s[VAR_0->j];
 VAR_0->s[VAR_0->j] = VAR_1;
 VAR_2 = VAR_0->s[VAR_0->i] + VAR_0->s[VAR_0->j];

 return VAR_0->s[VAR_2];
}
