
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ uv_getaddrinfo_t ;
struct addrinfo {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (struct addrinfo*) ;

__attribute__((used)) static void FUNC_3(uv_getaddrinfo_t* VAR_4,
                                      int VAR_5,
                                      struct addrinfo* VAR_6) {
  int VAR_7;
  int* VAR_8 = (int*)VAR_4->data;

  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
    if (&VAR_3[VAR_7] == VAR_4) {
      FUNC_0(VAR_7 == *VAR_8);

      VAR_1[VAR_7]++;
      break;
    }
  }
  FUNC_0 (VAR_7 < VAR_0);

  FUNC_1(VAR_8);
  FUNC_2(VAR_6);

  VAR_2++;
}
