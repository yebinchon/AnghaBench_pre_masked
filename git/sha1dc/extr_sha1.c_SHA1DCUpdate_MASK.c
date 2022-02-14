
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int total; scalar_t__ buffer; } ;
typedef TYPE_1__ SHA1_CTX ;


 int FUNC_0 (scalar_t__,char const*,size_t) ;
 int FUNC_1 (TYPE_1__*,int *) ;

void FUNC_2(SHA1_CTX* VAR_0, const char* VAR_1, size_t VAR_2)
{
 unsigned VAR_3, VAR_4;

 if (VAR_2 == 0)
  return;

 VAR_3 = VAR_0->total & 63;
 VAR_4 = 64 - VAR_3;

 if (VAR_3 && VAR_2 >= VAR_4)
 {
  VAR_0->total += VAR_4;
  FUNC_0(VAR_0->buffer + VAR_3, VAR_1, VAR_4);
  FUNC_1(VAR_0, (uint32_t*)(VAR_0->buffer));
  VAR_1 += VAR_4;
  VAR_2 -= VAR_4;
  VAR_3 = 0;
 }
 while (VAR_2 >= 64)
 {
  VAR_0->total += 64;




  FUNC_0(VAR_0->buffer, VAR_1, 64);
  FUNC_1(VAR_0, (uint32_t*)(VAR_0->buffer));

  VAR_1 += 64;
  VAR_2 -= 64;
 }
 if (VAR_2 > 0)
 {
  VAR_0->total += VAR_2;
  FUNC_0(VAR_0->buffer + VAR_3, VAR_1, VAR_2);
 }
}
