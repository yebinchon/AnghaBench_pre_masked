
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct mp_header {int begin; int end; int seq; } ;
struct mp {scalar_t__ local_is12bit; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 (int ,int*) ;

__attribute__((used)) static int
FUNC_4(struct mp *VAR_1, struct mbuf *VAR_2, struct mp_header *VAR_3)
{
  if (VAR_1->local_is12bit) {
    u_int16_t VAR_4;

    FUNC_3(FUNC_0(VAR_2), &VAR_4);
    if (VAR_4 & 0x3000) {
      FUNC_1(VAR_0, "Oops - MP header without required zero bits\n");
      return 0;
    }
    VAR_3->begin = VAR_4 & 0x8000 ? 1 : 0;
    VAR_3->end = VAR_4 & 0x4000 ? 1 : 0;
    VAR_3->seq = VAR_4 & 0x0fff;
    return 2;
  } else {
    FUNC_2(FUNC_0(VAR_2), &VAR_3->seq);
    if (VAR_3->seq & 0x3f000000) {
      FUNC_1(VAR_0, "Oops - MP header without required zero bits\n");
      return 0;
    }
    VAR_3->begin = VAR_3->seq & 0x80000000 ? 1 : 0;
    VAR_3->end = VAR_3->seq & 0x40000000 ? 1 : 0;
    VAR_3->seq &= 0x00ffffff;
    return 4;
  }
}
