
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_5__ {int i; int checksum; int const* out; int prpctx; TYPE_1__* prp; int offset; } ;
typedef TYPE_2__ ocb ;
typedef int cf_gf128 ;
struct TYPE_4__ {int (* decrypt ) (int ,int const*,int const*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int const*,int ) ;
 int FUNC_2 (int ,int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int ,int const*,int const*) ;
 int FUNC_6 (int const*,int const*,int const*,int) ;

__attribute__((used)) static void FUNC_7(void *VAR_1, const uint8_t *VAR_2)
{
  ocb *VAR_3 = VAR_1;


  FUNC_4(VAR_3, FUNC_3(VAR_3->i), VAR_3->offset);


  uint8_t VAR_4[VAR_0];
  FUNC_2(VAR_3->offset, VAR_4);

  uint8_t VAR_5[VAR_0];
  FUNC_6(VAR_5, VAR_2, VAR_4, sizeof VAR_5);
  VAR_3->prp->decrypt(VAR_3->prpctx, VAR_5, VAR_5);
  FUNC_6(VAR_3->out, VAR_5, VAR_4, sizeof VAR_5);


  cf_gf128 VAR_6;
  FUNC_1(VAR_3->out, VAR_6);
  VAR_3->out += sizeof VAR_5;
  FUNC_0(VAR_3->checksum, VAR_6, VAR_3->checksum);

  VAR_3->i++;
}
