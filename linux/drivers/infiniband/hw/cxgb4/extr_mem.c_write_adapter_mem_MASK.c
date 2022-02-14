
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct c4iw_wr_wait {int dummy; } ;
struct TYPE_2__ {int pdev; int ulptx_memwrite_dsgl; } ;
struct c4iw_rdev {TYPE_1__ lldi; } ;


 int FUNC_0 (struct c4iw_rdev*,scalar_t__,scalar_t__,void*,struct sk_buff*,struct c4iw_wr_wait*) ;
 int FUNC_1 (struct c4iw_rdev*,scalar_t__,scalar_t__,void*,struct sk_buff*,struct c4iw_wr_wait*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct c4iw_rdev *VAR_2, u32 VAR_3, u32 VAR_4,
        void *VAR_5, struct sk_buff *VAR_6,
        struct c4iw_wr_wait *VAR_7)
{
 int VAR_8;

 if (!VAR_2->lldi.ulptx_memwrite_dsgl || !VAR_1) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7);
  goto out;
 }

 if (VAR_4 <= VAR_0) {
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7);
  goto out;
 }

 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_3("%s: dma map failure (non fatal)\n",
        FUNC_2(VAR_2->lldi.pdev));
  VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
           VAR_7);
 }
out:
 return VAR_8;

}
