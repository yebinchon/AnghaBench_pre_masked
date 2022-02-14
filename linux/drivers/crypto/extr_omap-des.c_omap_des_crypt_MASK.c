
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_des_reqctx {unsigned long mode; } ;
struct omap_des_dev {int dummy; } ;
struct omap_des_ctx {int dummy; } ;
struct ablkcipher_request {int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (int ,int ) ;
 struct omap_des_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 struct omap_des_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct ablkcipher_request*) ;
 struct omap_des_dev* FUNC_4 (struct omap_des_ctx*) ;
 int FUNC_5 (struct omap_des_dev*,struct ablkcipher_request*) ;
 int FUNC_6 (char*,int ,int,int) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct ablkcipher_request *VAR_5, unsigned long VAR_6)
{
 struct omap_des_ctx *VAR_7 = FUNC_2(
   FUNC_3(VAR_5));
 struct omap_des_reqctx *VAR_8 = FUNC_1(VAR_5);
 struct omap_des_dev *VAR_9;

 FUNC_6("nbytes: %d, enc: %d, cbc: %d\n", VAR_5->nbytes,
   !!(VAR_6 & VAR_4),
   !!(VAR_6 & VAR_3));

 if (!FUNC_0(VAR_5->nbytes, VAR_0)) {
  FUNC_7("request size is not exact amount of DES blocks\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_4(VAR_7);
 if (!VAR_9)
  return -VAR_2;

 VAR_8->mode = VAR_6;

 return FUNC_5(VAR_9, VAR_5);
}
