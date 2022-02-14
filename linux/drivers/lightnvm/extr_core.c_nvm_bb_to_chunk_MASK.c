
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int blk; } ;
struct ppa_addr {TYPE_1__ g; } ;
struct nvm_geo {int num_chk; int pln_mode; int clba; } ;
struct nvm_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int state; int cnlb; int slba; scalar_t__ wi; int type; scalar_t__ wp; } ;
struct TYPE_4__ {int ppa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ FUNC_0 (struct nvm_dev*,struct ppa_addr) ;
 int FUNC_1 (struct nvm_dev*,struct ppa_addr,struct nvm_chk_meta*) ;

__attribute__((used)) static int FUNC_2(struct nvm_dev *VAR_5, struct ppa_addr VAR_6,
      u8 *VAR_7, int VAR_8, struct nvm_chk_meta *VAR_9)
{
 struct nvm_geo *VAR_10 = &VAR_5->geo;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 for (VAR_12 = 0; VAR_12 < VAR_10->num_chk; VAR_12++) {
  VAR_14 = VAR_12 * VAR_10->pln_mode;
  VAR_15 = VAR_7[VAR_14];

  for (VAR_13 = 0; VAR_13 < VAR_10->pln_mode; VAR_13++) {
   if (VAR_7[VAR_14 + VAR_13] &
     (VAR_0|VAR_2)) {
    VAR_15 = VAR_7[VAR_14 + VAR_13];
    break;
   }
  }

  VAR_6.g.blk = VAR_12;

  VAR_9->wp = 0;
  VAR_9->type = VAR_4;
  VAR_9->wi = 0;
  VAR_9->slba = FUNC_0(VAR_5, VAR_6).ppa;
  VAR_9->cnlb = VAR_5->geo.clba;

  if (VAR_15 == VAR_1) {
   VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_9);
   if (VAR_11)
    return VAR_11;
  } else {
   VAR_9->state = VAR_3;
  }

  VAR_9++;
 }

 return 0;
}
