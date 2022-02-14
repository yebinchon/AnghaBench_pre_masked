
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sg_mapping_iter {int length; int * addr; } ;
struct omap_sham_reqctx {size_t digcnt; size_t total; int sg_len; int sg; } ;
struct omap_sham_dev {TYPE_1__* pdata; int flags; int dev; int req; } ;
struct TYPE_2__ {scalar_t__ (* poll_irq ) (struct omap_sham_dev*) ;int (* trigger ) (struct omap_sham_dev*,size_t) ;int (* write_ctrl ) (struct omap_sham_dev*,size_t,int,int ) ;} ;


 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct omap_sham_dev*,int) ;
 struct omap_sham_reqctx* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,size_t,size_t,int) ;
 int FUNC_4 (struct omap_sham_reqctx*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct omap_sham_dev*,int ,int const) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (struct sg_mapping_iter*) ;
 int FUNC_10 (struct sg_mapping_iter*,int ,int ,int) ;
 int FUNC_11 (struct sg_mapping_iter*) ;
 int FUNC_12 (struct omap_sham_dev*,size_t,int,int ) ;
 int FUNC_13 (struct omap_sham_dev*,size_t) ;
 scalar_t__ FUNC_14 (struct omap_sham_dev*) ;

__attribute__((used)) static int FUNC_15(struct omap_sham_dev *VAR_7, size_t VAR_8,
         int VAR_9)
{
 struct omap_sham_reqctx *VAR_10 = FUNC_2(VAR_7->req);
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;
 const u32 *VAR_15;
 int VAR_16;
 struct sg_mapping_iter VAR_17;

 FUNC_3(VAR_7->dev, "xmit_cpu: digcnt: %d, length: %d, final: %d\n",
      VAR_10->digcnt, VAR_8, VAR_9);

 VAR_7->pdata->write_ctrl(VAR_7, VAR_8, VAR_9, 0);
 VAR_7->pdata->trigger(VAR_7, VAR_8);


 VAR_10->digcnt += VAR_8;
 VAR_10->total -= VAR_8;

 if (VAR_9)
  FUNC_8(VAR_4, &VAR_7->flags);

 FUNC_8(VAR_3, &VAR_7->flags);

 VAR_12 = FUNC_0(VAR_8, sizeof(u32));
 VAR_13 = FUNC_4(VAR_10) / sizeof(u32);

 FUNC_10(&VAR_17, VAR_10->sg, VAR_10->sg_len,
         VAR_6 | VAR_5);

 VAR_16 = 0;

 while (VAR_12) {
  if (VAR_7->pdata->poll_irq(VAR_7))
   return -VAR_2;

  for (VAR_11 = 0; VAR_11 < FUNC_5(VAR_12, VAR_13); VAR_11++, VAR_14++) {
   if (!VAR_16) {
    FUNC_9(&VAR_17);
    VAR_16 = VAR_17.length;
    if (!VAR_16) {
     FUNC_7("sg miter failure.\n");
     return -VAR_1;
    }
    VAR_14 = 0;
    VAR_15 = VAR_17.addr;
   }
   FUNC_6(VAR_7, FUNC_1(VAR_7, VAR_11),
     VAR_15[VAR_14]);
   VAR_16 -= 4;
  }
  VAR_12 -= FUNC_5(VAR_12, VAR_13);
 }

 FUNC_11(&VAR_17);

 return -VAR_0;
}
