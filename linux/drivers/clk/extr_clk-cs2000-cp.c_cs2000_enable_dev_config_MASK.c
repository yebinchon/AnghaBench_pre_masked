
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cs2000_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cs2000_priv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct cs2000_priv *VAR_9, bool VAR_10)
{
 int VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_1, VAR_2,
     VAR_10 ? VAR_2 : 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_6, VAR_3,
     VAR_10 ? VAR_3 : 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_0(VAR_9, VAR_4, VAR_0,
     VAR_10 ? VAR_0 : 0);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_11 = FUNC_0(VAR_9, VAR_5, VAR_8,
     VAR_7);
 if (VAR_11 < 0)
  return VAR_11;

 return 0;
}
