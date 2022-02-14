
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_crypto_request {struct scatterlist* src; } ;
struct scatterlist {int dummy; } ;
struct nitrox_kcrypt_request {char* src; struct se_crypto_request creq; } ;


 int FUNC_0 (struct scatterlist*,struct scatterlist*,int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*,char*,int) ;
 struct scatterlist* FUNC_2 (char*,int) ;
 int FUNC_3 (struct scatterlist*,int) ;

__attribute__((used)) static inline void FUNC_4(struct nitrox_kcrypt_request *VAR_0,
       int VAR_1, int VAR_2,
       struct scatterlist *VAR_3, int VAR_4)
{
 char *VAR_5 = VAR_0->src;
 struct scatterlist *VAR_6;
 struct se_crypto_request *VAR_7 = &VAR_0->creq;

 VAR_7->src = FUNC_2(VAR_5, VAR_2);
 VAR_6 = VAR_7->src;
 FUNC_3(VAR_6, VAR_1);
 VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_2);

 FUNC_0(VAR_6, VAR_3, VAR_4);
}
