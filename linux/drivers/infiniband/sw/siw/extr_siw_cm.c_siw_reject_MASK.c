
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int bits; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
struct siw_cep {scalar_t__ state; int * sock; TYPE_3__ mpa; } ;
struct iw_cm_id {scalar_t__ provider_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct siw_cep*) ;
 int FUNC_2 (struct siw_cep*) ;
 int FUNC_3 (struct siw_cep*) ;
 int FUNC_4 (struct siw_cep*) ;
 int FUNC_5 (struct siw_cep*,char*,...) ;
 int FUNC_6 (struct siw_cep*,void const*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct iw_cm_id *VAR_5, const void *VAR_6, u8 VAR_7)
{
 struct siw_cep *VAR_8 = (struct siw_cep *)VAR_5->provider_data;

 FUNC_4(VAR_8);
 FUNC_2(VAR_8);

 FUNC_1(VAR_8);

 if (VAR_8->state != VAR_4) {
  FUNC_5(VAR_8, "out of state\n");

  FUNC_3(VAR_8);
  FUNC_2(VAR_8);

  return -VAR_0;
 }
 FUNC_5(VAR_8, "cep->state %d, pd_len %d\n", VAR_8->state,
      VAR_7);

 if (FUNC_0(VAR_8->mpa.hdr.params.bits) >= VAR_1) {
  VAR_8->mpa.hdr.params.bits |= VAR_2;
  FUNC_6(VAR_8, VAR_6, VAR_7);
 }
 FUNC_7(VAR_8->sock);
 FUNC_8(VAR_8->sock);
 VAR_8->sock = ((void*)0);

 VAR_8->state = VAR_3;

 FUNC_3(VAR_8);
 FUNC_2(VAR_8);

 return 0;
}
