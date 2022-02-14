
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_dev {int dev; int engine; struct ablkcipher_request* req; } ;
struct ablkcipher_request {int dummy; } ;


 int FUNC_0 (int ,struct ablkcipher_request*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static void FUNC_4(struct omap_aes_dev *VAR_0, int VAR_1)
{
 struct ablkcipher_request *VAR_2 = VAR_0->req;

 FUNC_3("err: %d\n", VAR_1);

 FUNC_0(VAR_0->engine, VAR_2, VAR_1);

 FUNC_1(VAR_0->dev);
 FUNC_2(VAR_0->dev);
}
