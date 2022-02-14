
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_cmdbuf_suballoc {int vaddr; int paddr; int free_event; int lock; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct etnaviv_cmdbuf_suballoc* FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct device*,scalar_t__,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct etnaviv_cmdbuf_suballoc*) ;
 struct etnaviv_cmdbuf_suballoc* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;

struct etnaviv_cmdbuf_suballoc *
FUNC_7(struct device *VAR_4)
{
 struct etnaviv_cmdbuf_suballoc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_1(-VAR_0);

 VAR_5->dev = VAR_4;
 FUNC_6(&VAR_5->lock);
 FUNC_3(&VAR_5->free_event);

 FUNC_0(VAR_1 < VAR_3);
 VAR_5->vaddr = FUNC_2(VAR_4, VAR_3,
           &VAR_5->paddr, VAR_2);
 if (!VAR_5->vaddr) {
  VAR_6 = -VAR_0;
  goto free_suballoc;
 }

 return VAR_5;

free_suballoc:
 FUNC_4(VAR_5);

 return FUNC_1(VAR_6);
}
