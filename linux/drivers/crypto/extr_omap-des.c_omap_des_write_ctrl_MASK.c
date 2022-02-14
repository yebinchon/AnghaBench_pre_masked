
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct omap_des_dev {int flags; TYPE_2__* req; TYPE_1__* ctx; } ;
struct TYPE_4__ {scalar_t__ info; } ;
struct TYPE_3__ {int keylen; int * key; } ;


 int FUNC_0 (struct omap_des_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct omap_des_dev*,int ) ;
 int FUNC_2 (struct omap_des_dev*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct omap_des_dev*) ;
 int FUNC_5 (struct omap_des_dev*,int ,int ) ;
 int FUNC_6 (struct omap_des_dev*,int ,int,int) ;
 int FUNC_7 (struct omap_des_dev*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_8(struct omap_des_dev *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7, VAR_8;
 u32 VAR_9 = 0, VAR_10 = 0;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_6 = VAR_5->ctx->keylen / sizeof(u32);


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  FUNC_5(VAR_5, FUNC_2(VAR_5, VAR_7),
          FUNC_3(VAR_5->ctx->key[VAR_7]));
 }

 if ((VAR_5->flags & VAR_3) && VAR_5->req->info)
  FUNC_7(VAR_5, FUNC_1(VAR_5, 0), VAR_5->req->info, 2);

 if (VAR_5->flags & VAR_3)
  VAR_9 |= VAR_0;
 if (VAR_5->flags & VAR_4)
  VAR_9 |= VAR_1;
 if (VAR_6 == 6)
  VAR_9 |= VAR_2;

 VAR_10 |= VAR_0 | VAR_1 | VAR_2;

 FUNC_6(VAR_5, FUNC_0(VAR_5), VAR_9, VAR_10);

 return 0;
}
