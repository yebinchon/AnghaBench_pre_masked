
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct bnxt_re_dev {int dummy; } ;
struct bnxt_en_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bnxt_en_dev* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bnxt_en_dev*) ;
 int FUNC_2 (struct bnxt_en_dev*) ;
 int VAR_2 ;
 struct bnxt_re_dev* FUNC_3 (struct net_device*,struct bnxt_en_dev*) ;
 struct bnxt_en_dev* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,struct bnxt_en_dev*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ) ;

__attribute__((used)) static int FUNC_8(struct bnxt_re_dev **VAR_3, struct net_device *VAR_4)
{
 struct bnxt_en_dev *VAR_5;
 int VAR_6 = 0;

 if (!FUNC_6(VAR_4))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_4);
 if (FUNC_1(VAR_5)) {
  if (VAR_5 != FUNC_0(-VAR_0))
   FUNC_7("%s: Failed to probe\n", VAR_2);
  VAR_6 = FUNC_2(VAR_5);
  goto exit;
 }
 *VAR_3 = FUNC_3(VAR_4, VAR_5);
 if (!*VAR_3) {
  VAR_6 = -VAR_1;
  FUNC_5(VAR_4, VAR_5);
  goto exit;
 }
exit:
 return VAR_6;
}
