
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int assoclen; int iv; } ;
struct aead_edesc {int* hw_desc; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int*,int ,unsigned int,int) ;
 int FUNC_1 (int*,int ,int ,int ,unsigned int) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct aead_request*,struct aead_edesc*,int,int) ;

__attribute__((used)) static void FUNC_5(struct aead_request *VAR_7,
    struct aead_edesc *VAR_8, bool VAR_9,
    bool VAR_10)
{
 struct crypto_aead *VAR_11 = FUNC_3(VAR_7);
 unsigned int VAR_12 = FUNC_2(VAR_11);
 unsigned int VAR_13 = VAR_7->assoclen;
 u32 *VAR_14 = VAR_8->hw_desc;
 u32 VAR_15 = 4;

 FUNC_4(VAR_7, VAR_8, VAR_9, VAR_10);

 if (VAR_12 != VAR_0) {

  VAR_15 += 4;





  VAR_13 -= VAR_12;
 }

 FUNC_1(VAR_14, VAR_5, VAR_6, VAR_1, VAR_13);





 FUNC_0(VAR_14, VAR_7->iv, VAR_12, VAR_2 |
      VAR_4 |
      VAR_15 << VAR_3);
}
