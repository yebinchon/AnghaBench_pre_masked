
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_info {int* tfm; int* ctrl; int* cmd; } ;
struct mtk_sha_reqctx {int flags; int ds; int ct_size; int ct_hdr; struct mtk_sha_info info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mtk_sha_reqctx *VAR_15)
{
 struct mtk_sha_info *VAR_16 = &VAR_15->info;

 VAR_15->ct_hdr = VAR_3;
 VAR_15->ct_size = VAR_4;

 VAR_16->tfm[0] = VAR_7 | FUNC_1(FUNC_2(VAR_15->ds));

 switch (VAR_15->flags & VAR_5) {
 case 132:
  VAR_16->tfm[0] |= VAR_9;
  break;
 case 131:
  VAR_16->tfm[0] |= VAR_10;
  break;
 case 130:
  VAR_16->tfm[0] |= VAR_11;
  break;
 case 129:
  VAR_16->tfm[0] |= VAR_12;
  break;
 case 128:
  VAR_16->tfm[0] |= VAR_13;
  break;

 default:

  return;
 }

 VAR_16->tfm[1] = VAR_8;
 VAR_16->ctrl[0] = VAR_16->tfm[0] | VAR_6 | VAR_14;
 VAR_16->ctrl[1] = VAR_16->tfm[1];

 VAR_16->cmd[0] = VAR_0;
 VAR_16->cmd[1] = VAR_1;
 VAR_16->cmd[2] = VAR_2 | FUNC_0(FUNC_2(VAR_15->ds));
}
