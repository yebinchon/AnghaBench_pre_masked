
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int rounds; } ;
typedef TYPE_1__ cf_aes_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*,int const*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

void FUNC_3(cf_aes_context *VAR_3, const uint8_t *VAR_4, size_t VAR_5)
{
  FUNC_2(VAR_3, 0, sizeof *VAR_3);

  switch (VAR_5)
  {

    case 16:
      VAR_3->rounds = VAR_0;
      FUNC_1(VAR_3, VAR_4, VAR_5);
      break;



    case 24:
      VAR_3->rounds = VAR_1;
      FUNC_1(VAR_3, VAR_4, VAR_5);
      break;



    case 32:
      VAR_3->rounds = VAR_2;
      FUNC_1(VAR_3, VAR_4, VAR_5);
      break;


    default:
      FUNC_0();
  }
}
