
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct caam_rng_ctx {int sh_desc_dma; int * sh_desc; struct device* jrdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int *,int ,int ) ;
 scalar_t__ FUNC_5 (struct device*,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*,int ,int,int,int *,int ,int) ;

__attribute__((used)) static inline int FUNC_8(struct caam_rng_ctx *VAR_8)
{
 struct device *VAR_9 = VAR_8->jrdev;
 u32 *VAR_10 = VAR_8->sh_desc;

 FUNC_6(VAR_10, VAR_4);


 FUNC_0(VAR_10, VAR_5 | VAR_6);


 FUNC_1(VAR_10, VAR_7, VAR_3);

 VAR_8->sh_desc_dma = FUNC_4(VAR_9, VAR_10, FUNC_2(VAR_10),
       VAR_0);
 if (FUNC_5(VAR_9, VAR_8->sh_desc_dma)) {
  FUNC_3(VAR_9, "unable to map shared descriptor\n");
  return -VAR_2;
 }

 FUNC_7("rng shdesc@: ", VAR_1, 16, 4,
        VAR_10, FUNC_2(VAR_10), 1);

 return 0;
}
