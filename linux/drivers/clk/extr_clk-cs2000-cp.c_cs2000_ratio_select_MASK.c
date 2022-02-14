
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs2000_priv {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (struct cs2000_priv*,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct cs2000_priv *VAR_8, int VAR_9)
{
 int VAR_10;

 if (FUNC_0(VAR_9))
  return -VAR_3;






 VAR_10 = FUNC_3(VAR_8, VAR_1, VAR_7, FUNC_2(VAR_9));
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_3(VAR_8, VAR_2,
     (VAR_0 | VAR_6 | VAR_4),
     (FUNC_1(VAR_9) | VAR_5));
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
