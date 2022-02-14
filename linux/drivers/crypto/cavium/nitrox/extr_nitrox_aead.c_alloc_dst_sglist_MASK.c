
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct nitrox_kcrypt_request {int dummy; } ;


 int FUNC_0 (struct nitrox_kcrypt_request*,int) ;
 int FUNC_1 (struct nitrox_kcrypt_request*) ;
 int FUNC_2 (struct nitrox_kcrypt_request*,int,int,struct scatterlist*,int) ;
 int FUNC_3 (struct nitrox_kcrypt_request*) ;
 int FUNC_4 (struct scatterlist*,int) ;

__attribute__((used)) static int FUNC_5(struct nitrox_kcrypt_request *VAR_0,
       struct scatterlist *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = FUNC_4(VAR_1, VAR_3);
 int VAR_5;

 if (VAR_4 < 0)
  return VAR_4;


 VAR_4 += 3;



 VAR_5 = FUNC_0(VAR_0, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_2(VAR_0, VAR_4, VAR_2, VAR_1, VAR_3);

 return 0;
}
