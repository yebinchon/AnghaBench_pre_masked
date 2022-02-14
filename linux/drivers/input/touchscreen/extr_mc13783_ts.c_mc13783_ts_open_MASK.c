
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13783_ts_priv {int mc13xxx; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct mc13783_ts_priv* FUNC_0 (struct input_dev*) ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,struct mc13783_ts_priv*) ;
 int FUNC_3 (int ,int ,int ,int ,struct mc13783_ts_priv*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct input_dev *VAR_6)
{
 struct mc13783_ts_priv *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 FUNC_4(VAR_7->mc13xxx);

 FUNC_1(VAR_7->mc13xxx, VAR_4);

 VAR_8 = FUNC_3(VAR_7->mc13xxx, VAR_4,
  VAR_5, VAR_0, VAR_7);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_5(VAR_7->mc13xxx, VAR_1,
   VAR_3, VAR_2);
 if (VAR_8)
  FUNC_2(VAR_7->mc13xxx, VAR_4, VAR_7);
out:
 FUNC_6(VAR_7->mc13xxx);
 return VAR_8;
}
