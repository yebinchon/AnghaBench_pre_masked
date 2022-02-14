
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_des_dev {int engine; } ;
struct ablkcipher_request {int dummy; } ;


 int FUNC_0 (int ,struct ablkcipher_request*) ;

__attribute__((used)) static int FUNC_1(struct omap_des_dev *VAR_0,
     struct ablkcipher_request *VAR_1)
{
 if (VAR_1)
  return FUNC_0(VAR_0->engine, VAR_1);

 return 0;
}
