
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pg; int pl; } ;
struct ppa_addr {TYPE_1__ g; } ;
struct nvm_geo {int num_pg; int num_pln; scalar_t__ ws_min; int clba; } ;
struct nvm_dev {struct nvm_geo geo; } ;
struct nvm_chk_meta {int wp; void* state; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;




 int FUNC_0 (struct nvm_dev*,struct ppa_addr) ;

__attribute__((used)) static int FUNC_1(struct nvm_dev *VAR_3, struct ppa_addr VAR_4,
        struct nvm_chk_meta *VAR_5)
{
 struct nvm_geo *VAR_6 = &VAR_3->geo;
 int VAR_7, VAR_8, VAR_9;


 VAR_7 = FUNC_0(VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_7 == 0)
  VAR_5->state = VAR_2;
 else if (VAR_7 > 0) {




  switch (VAR_7) {
  case 131:
   VAR_5->state = VAR_1;
   return 0;
  case 130:
  case 129:
  case 128:
   VAR_5->state = VAR_2;
   goto scan;
  default:
   return -VAR_7;
  }
 }


 VAR_4.g.pg = VAR_6->num_pg - 1;
 VAR_4.g.pl = VAR_6->num_pln - 1;

 VAR_7 = FUNC_0(VAR_3, VAR_4);
 if (VAR_7 < 0)
  return VAR_7;
 else if (VAR_7 == 0) {
  VAR_5->state = VAR_0;
  VAR_5->wp = VAR_6->clba;
  return 0;
 } else if (VAR_7 > 0) {
  switch (VAR_7) {
  case 131:
  case 130:
  case 129:
  case 128:
   VAR_5->state = VAR_2;
   break;
  default:
   return -VAR_7;
  }
 }

scan:





 for (VAR_8 = 0; VAR_8 < VAR_6->num_pg; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_6->num_pln; VAR_9++) {
   VAR_4.g.pg = VAR_8;
   VAR_4.g.pl = VAR_9;

   VAR_7 = FUNC_0(VAR_3, VAR_4);
   if (VAR_7 < 0)
    return VAR_7;
   else if (VAR_7 == 0) {
    VAR_5->wp += VAR_6->ws_min;
   } else if (VAR_7 > 0) {
    switch (VAR_7) {
    case 131:
     return 0;
    case 130:
    case 129:
    case 128:
     VAR_5->wp += VAR_6->ws_min;
     break;
    default:
     return -VAR_7;
    }
   }
  }
 }

 return 0;
}
