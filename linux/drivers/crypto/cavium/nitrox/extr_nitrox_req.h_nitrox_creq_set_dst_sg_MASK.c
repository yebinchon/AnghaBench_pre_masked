
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_crypto_request {char* orh; char* comp; struct scatterlist* dst; } ;
struct scatterlist {int dummy; } ;
struct nitrox_kcrypt_request {char* src; int dst; struct se_crypto_request creq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct scatterlist* FUNC_0 (struct scatterlist*,struct scatterlist*,int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*,char*,int) ;
 struct scatterlist* FUNC_2 (int ) ;
 int FUNC_3 (struct scatterlist*,int) ;

__attribute__((used)) static inline void FUNC_4(struct nitrox_kcrypt_request *VAR_2,
       int VAR_3, int VAR_4,
       struct scatterlist *VAR_5, int VAR_6)
{
 struct se_crypto_request *VAR_7 = &VAR_2->creq;
 struct scatterlist *VAR_8;
 char *VAR_9 = VAR_2->src;

 VAR_7->dst = FUNC_2(VAR_2->dst);
 VAR_8 = VAR_7->dst;
 FUNC_3(VAR_8, VAR_3);
 VAR_8 = FUNC_1(VAR_8, VAR_7->orh, VAR_1);

 VAR_8 = FUNC_1(VAR_8, VAR_9, VAR_4);

 VAR_8 = FUNC_0(VAR_8, VAR_5, VAR_6);

 FUNC_1(VAR_8, VAR_7->comp, VAR_0);
}
