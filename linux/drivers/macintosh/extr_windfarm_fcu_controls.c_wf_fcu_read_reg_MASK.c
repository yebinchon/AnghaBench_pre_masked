
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int lock; int i2c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (int ,unsigned char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(struct wf_fcu_priv *VAR_2, int VAR_3,
      unsigned char *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 FUNC_3(&VAR_2->lock);

 VAR_4[0] = VAR_3;
 VAR_6 = 0;
 for (;;) {
  VAR_8 = FUNC_1(VAR_2->i2c, VAR_4, 1);
  if (VAR_8 > 0 || (VAR_8 < 0 && VAR_8 != -VAR_0) || VAR_6 >= 100)
   break;
  FUNC_2(10);
  ++VAR_6;
 }
 if (VAR_8 <= 0) {
  FUNC_5("Failure writing address to FCU: %d", VAR_8);
  VAR_7 = VAR_8;
  goto bail;
 }
 VAR_6 = 0;
 for (;;) {
  VAR_7 = FUNC_0(VAR_2->i2c, VAR_4, VAR_5);
  if (VAR_7 > 0 || (VAR_7 < 0 && VAR_7 != -VAR_1) || VAR_6 >= 100)
   break;
  FUNC_2(10);
  ++VAR_6;
 }
 if (VAR_7 <= 0)
  FUNC_5("wf_fcu: Failure reading data from FCU: %d", VAR_8);
 bail:
 FUNC_4(&VAR_2->lock);
 return VAR_7;
}
