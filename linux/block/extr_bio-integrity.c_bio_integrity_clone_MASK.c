
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio_vec {int dummy; } ;
struct bio_integrity_payload {int bip_vcnt; int bip_iter; int bip_vec; } ;
struct bio {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct bio_integrity_payload*) ;
 int FUNC_2 (struct bio_integrity_payload*) ;
 struct bio_integrity_payload* FUNC_3 (struct bio*) ;
 struct bio_integrity_payload* FUNC_4 (struct bio*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

int FUNC_6(struct bio *VAR_0, struct bio *VAR_1,
   gfp_t VAR_2)
{
 struct bio_integrity_payload *VAR_3 = FUNC_3(VAR_1);
 struct bio_integrity_payload *VAR_4;

 FUNC_0(VAR_3 == ((void*)0));

 VAR_4 = FUNC_4(VAR_0, VAR_2, VAR_3->bip_vcnt);
 if (FUNC_1(VAR_4))
  return FUNC_2(VAR_4);

 FUNC_5(VAR_4->bip_vec, VAR_3->bip_vec,
        VAR_3->bip_vcnt * sizeof(struct bio_vec));

 VAR_4->bip_vcnt = VAR_3->bip_vcnt;
 VAR_4->bip_iter = VAR_3->bip_iter;

 return 0;
}
