
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct opal_msg {int dummy; } ;
typedef int m ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct opal_msg*,struct opal_msg*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct opal_msg*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(uint64_t VAR_5, uint8_t VAR_6, struct opal_msg *VAR_7)
{
 struct opal_msg VAR_8;
 int VAR_9, VAR_10;
 int64_t VAR_11;

 if (!FUNC_4(VAR_3))
  return -VAR_1;

 VAR_9 = FUNC_1();
 if (FUNC_6(VAR_9 < 0))
  return VAR_9;

 VAR_11 = FUNC_5(VAR_9, VAR_5, (uint64_t)&VAR_6);
 if (VAR_11 == VAR_4) {
  VAR_10 = 0;
  goto exit;
 } else if (VAR_11 != VAR_2) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 VAR_10 = FUNC_3(VAR_9, &VAR_8);
 if (VAR_10 < 0)
  goto exit;

 if (VAR_7) {
  VAR_10 = 1;
  FUNC_0(VAR_7, &VAR_8, sizeof(VAR_8));
 }

exit:
 FUNC_2(VAR_9);
 return VAR_10;
}
