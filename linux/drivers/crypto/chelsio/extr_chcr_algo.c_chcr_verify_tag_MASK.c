
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;
struct cpl_fw6_pld {int * data; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; int src; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_1 (struct aead_request*) ;
 int FUNC_2 (int *,struct cpl_fw6_pld*,int) ;
 scalar_t__ FUNC_3 (struct crypto_aead*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *,int,scalar_t__) ;

void FUNC_6(struct aead_request *VAR_4, u8 *VAR_5, int *VAR_6)
{
 u8 VAR_7[VAR_3];
 struct crypto_aead *VAR_8 = FUNC_1(VAR_4);
 int VAR_9 = FUNC_0(VAR_8);
 struct cpl_fw6_pld *VAR_10;
 int VAR_11 = 0;

 VAR_10 = (struct cpl_fw6_pld *)VAR_5;
 if ((FUNC_3(VAR_8) == VAR_1) ||
     (FUNC_3(VAR_8) == VAR_0)) {
  VAR_11 = FUNC_2(&VAR_10->data[2], (VAR_10 + 1), VAR_9);
 } else {

  FUNC_5(VAR_4->src, FUNC_4(VAR_4->src), VAR_7,
    VAR_9, VAR_4->assoclen +
    VAR_4->cryptlen - VAR_9);
  VAR_11 = FUNC_2(VAR_7, (VAR_10 + 1), VAR_9);
 }
 if (VAR_11)
  *VAR_6 = -VAR_2;
 else
  *VAR_6 = 0;
}
