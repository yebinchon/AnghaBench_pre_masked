
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
struct TYPE_3__ {int count; int const* buffer; int state; } ;
typedef TYPE_1__ RMD160_CTX ;


 int FUNC_0 (int ,int const*) ;
 int FUNC_1 (int const*,int const*,int) ;

void
FUNC_2(RMD160_CTX *VAR_0, const u_char *VAR_1, u_int32_t VAR_2)
{
 u_int32_t VAR_3, VAR_4, VAR_5;

 VAR_3 = (VAR_0->count/8) % 64;
 VAR_5 = 64 - VAR_3;
 VAR_0->count += 8 * VAR_2;
 VAR_4 = 0;

 if (VAR_2 >= VAR_5) {
  if (VAR_3) {
   FUNC_1(VAR_0->buffer + VAR_3, VAR_1, VAR_5);
   FUNC_0(VAR_0->state, VAR_0->buffer);
   VAR_4 = VAR_5;
   VAR_3 = 0;
  }

  while (VAR_4 + 64 <= VAR_2) {
   FUNC_0(VAR_0->state, VAR_1+VAR_4);
   VAR_4 += 64;
  }
 }
 if (VAR_4 < VAR_2)
  FUNC_1(VAR_0->buffer + VAR_3, VAR_1+VAR_4, VAR_2-VAR_4);
}
