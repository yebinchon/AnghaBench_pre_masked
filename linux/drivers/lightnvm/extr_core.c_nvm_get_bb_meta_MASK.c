
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ blk; int ch; int lun; } ;
struct ppa_addr {TYPE_1__ g; scalar_t__ ppa; } ;
struct nvm_geo {int num_chk; int pln_mode; int num_ch; int num_lun; } ;
struct nvm_dev {TYPE_2__* ops; struct nvm_geo geo; } ;
struct nvm_chk_meta {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_4__ {int (* get_bb_tbl ) (struct nvm_dev*,struct ppa_addr,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ppa_addr FUNC_0 (struct nvm_dev*,struct ppa_addr) ;
 struct ppa_addr FUNC_1 (struct nvm_dev*,struct ppa_addr) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int ) ;
 int FUNC_4 (struct nvm_dev*,struct ppa_addr,int *,int,struct nvm_chk_meta*) ;
 int FUNC_5 (struct nvm_dev*,struct ppa_addr,int *) ;

__attribute__((used)) static int FUNC_6(struct nvm_dev *VAR_3, sector_t VAR_4,
      int VAR_5, struct nvm_chk_meta *VAR_6)
{
 struct nvm_geo *VAR_7 = &VAR_3->geo;
 struct ppa_addr VAR_8;
 u8 *VAR_9;
 int VAR_10, VAR_11, VAR_12;
 int VAR_13 = 0;

 VAR_8.ppa = VAR_4;
 VAR_8 = FUNC_0(VAR_3, VAR_8);

 if (VAR_8.g.blk != 0)
  return -VAR_0;

 if ((VAR_5 % VAR_7->num_chk) != 0)
  return -VAR_0;

 VAR_12 = VAR_7->num_chk * VAR_7->pln_mode;

 VAR_9 = FUNC_3(VAR_12, VAR_2);
 if (!VAR_9)
  return -VAR_1;

 for (VAR_10 = VAR_8.g.ch; VAR_10 < VAR_7->num_ch; VAR_10++) {
  for (VAR_11 = VAR_8.g.lun; VAR_11 < VAR_7->num_lun; VAR_11++) {
   struct ppa_addr VAR_14, VAR_15;

   if (!VAR_5)
    goto done;

   VAR_14.ppa = 0;
   VAR_14.g.ch = VAR_10;
   VAR_14.g.lun = VAR_11;
   VAR_15 = FUNC_1(VAR_3, VAR_14);

   VAR_13 = VAR_3->ops->get_bb_tbl(VAR_3, VAR_15, VAR_9);
   if (VAR_13)
    goto done;

   VAR_13 = FUNC_4(VAR_3, VAR_14, VAR_9, VAR_12,
         VAR_6);
   if (VAR_13)
    goto done;

   VAR_6 += VAR_7->num_chk;
   VAR_5 -= VAR_7->num_chk;
  }
 }
done:
 FUNC_2(VAR_9);
 return VAR_13;
}
