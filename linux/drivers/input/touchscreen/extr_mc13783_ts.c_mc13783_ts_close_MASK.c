
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mc13783_ts_priv {int work; int mc13xxx; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct mc13783_ts_priv* FUNC_1 (struct input_dev*) ;
 int FUNC_2 (int ,int ,struct mc13783_ts_priv*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_3)
{
 struct mc13783_ts_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_3(VAR_4->mc13xxx);
 FUNC_4(VAR_4->mc13xxx, VAR_0,
   VAR_1, 0);
 FUNC_2(VAR_4->mc13xxx, VAR_2, VAR_4);
 FUNC_5(VAR_4->mc13xxx);

 FUNC_0(&VAR_4->work);
}
