
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_fcu_priv {int i2c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,int) ;
 int FUNC_1 (unsigned char*,unsigned char const*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;

__attribute__((used)) static int FUNC_4(struct wf_fcu_priv *VAR_1, int VAR_2,
       const unsigned char *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 unsigned char VAR_7[16];

 VAR_7[0] = VAR_2;
 FUNC_1(VAR_7+1, VAR_3, VAR_4);
 ++VAR_4;
 VAR_5 = 0;
 for (;;) {
  VAR_6 = FUNC_0(VAR_1->i2c, VAR_7, VAR_4);
  if (VAR_6 > 0 || (VAR_6 < 0 && VAR_6 != -VAR_0) || VAR_5 >= 100)
   break;
  FUNC_2(10);
  ++VAR_5;
 }
 if (VAR_6 < 0)
  FUNC_3("wf_fcu: Failure writing to FCU: %d", VAR_6);
 return VAR_6;
}
