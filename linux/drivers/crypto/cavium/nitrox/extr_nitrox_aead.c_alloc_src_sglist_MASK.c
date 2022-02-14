
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct nitrox_kcrypt_request {int src; } ;


 int FUNC_0 (struct nitrox_kcrypt_request*,int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nitrox_kcrypt_request*,int,int,struct scatterlist*,int) ;
 int FUNC_3 (struct scatterlist*,int) ;

__attribute__((used)) static int FUNC_4(struct nitrox_kcrypt_request *VAR_0,
       struct scatterlist *VAR_1, char *VAR_2, int VAR_3,
       int VAR_4)
{
 int VAR_5 = FUNC_3(VAR_1, VAR_4);
 int VAR_6;

 if (VAR_5 < 0)
  return VAR_5;


 VAR_5 += 1;

 VAR_6 = FUNC_0(VAR_0, VAR_5, VAR_3);
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_0->src, VAR_2, VAR_3);
 FUNC_2(VAR_0, VAR_5, VAR_3, VAR_1, VAR_4);

 return 0;
}
