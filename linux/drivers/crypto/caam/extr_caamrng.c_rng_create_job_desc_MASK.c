
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
struct caam_rng_ctx {int sh_desc_dma; int sh_desc; struct buf_data* bufs; struct device* jrdev; } ;
struct buf_data {int addr; int buf; int * hw_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct device*,int ) ;
 int FUNC_6 (int *,int ,int,int) ;
 int FUNC_7 (char*,int ,int,int,int *,int ,int) ;

__attribute__((used)) static inline int FUNC_8(struct caam_rng_ctx *VAR_6, int VAR_7)
{
 struct device *VAR_8 = VAR_6->jrdev;
 struct buf_data *VAR_9 = &VAR_6->bufs[VAR_7];
 u32 *VAR_10 = VAR_9->hw_desc;
 int VAR_11 = FUNC_2(VAR_6->sh_desc);

 FUNC_6(VAR_10, VAR_6->sh_desc_dma, VAR_11, VAR_4 |
        VAR_3);

 VAR_9->addr = FUNC_4(VAR_8, VAR_9->buf, VAR_5, VAR_0);
 if (FUNC_5(VAR_8, VAR_9->addr)) {
  FUNC_3(VAR_8, "unable to map dst\n");
  return -VAR_2;
 }

 FUNC_0(VAR_10, VAR_9->addr, VAR_5, 0);

 FUNC_7("rng job desc@: ", VAR_1, 16, 4,
        VAR_10, FUNC_1(VAR_10), 1);

 return 0;
}
