
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_3__ {int payloadlen; } ;
typedef TYPE_1__ WSFrame ;


 int FUNC_0 (char const) ;


 int FUNC_1 (int) ;
 int FUNC_2 (int*,char const*,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (WSFrame * VAR_0, const char *VAR_1)
{
  uint64_t VAR_2 = 0, VAR_3;
  uint16_t VAR_4;


  VAR_2 = FUNC_0 (*(VAR_1 + 1));
  switch (VAR_2) {
  case 129:
    FUNC_2 (&VAR_4, (VAR_1 + 2), sizeof (uint16_t));
    VAR_0->payloadlen = FUNC_3 (VAR_4);
    break;
  case 128:
    FUNC_2 (&VAR_3, (VAR_1 + 2), sizeof (uint64_t));
    VAR_0->payloadlen = FUNC_1 (VAR_3);
    break;
  default:
    VAR_0->payloadlen = VAR_2;
  }
}
