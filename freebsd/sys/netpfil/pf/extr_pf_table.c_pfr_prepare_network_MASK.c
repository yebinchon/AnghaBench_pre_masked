
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int* s6_addr32; } ;
struct TYPE_8__ {int sin6_len; int sin6_family; TYPE_3__ sin6_addr; } ;
struct TYPE_5__ {void* s_addr; } ;
struct TYPE_6__ {int sin_len; int sin_family; TYPE_1__ sin_addr; } ;
union sockaddr_union {TYPE_4__ sin6; TYPE_2__ sin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union sockaddr_union*,int) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(union sockaddr_union *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2, sizeof(*VAR_2));
 if (VAR_3 == VAR_0) {
  VAR_2->sin.sin_len = sizeof(VAR_2->sin);
  VAR_2->sin.sin_family = VAR_0;
  VAR_2->sin.sin_addr.s_addr = VAR_4 ? FUNC_1(-1 << (32-VAR_4)) : 0;
 } else if (VAR_3 == VAR_1) {
  VAR_2->sin6.sin6_len = sizeof(VAR_2->sin6);
  VAR_2->sin6.sin6_family = VAR_1;
  for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
   if (VAR_4 <= 32) {
    VAR_2->sin6.sin6_addr.s6_addr32[VAR_5] =
        VAR_4 ? FUNC_1(-1 << (32-VAR_4)) : 0;
    break;
   }
   VAR_2->sin6.sin6_addr.s6_addr32[VAR_5] = 0xFFFFFFFF;
   VAR_4 -= 32;
  }
 }
}
