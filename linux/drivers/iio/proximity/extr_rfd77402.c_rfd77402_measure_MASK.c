
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfd77402_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct rfd77402_data*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct rfd77402_data *VAR_15)
{
 int VAR_16;
 int VAR_17 = 10;

 VAR_16 = FUNC_4(VAR_15, VAR_3,
     VAR_14);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_2(VAR_15->client, VAR_4,
     VAR_5 |
     VAR_6);
 if (VAR_16 < 0)
  goto err;

 while (VAR_17-- > 0) {
  VAR_16 = FUNC_0(VAR_15->client, VAR_7);
  if (VAR_16 < 0)
   goto err;
  if (VAR_16 & VAR_8)
   break;
  FUNC_3(20);
 }

 if (VAR_17 < 0) {
  VAR_16 = -VAR_1;
  goto err;
 }

 VAR_16 = FUNC_1(VAR_15->client, VAR_11);
 if (VAR_16 < 0)
  goto err;

 if ((VAR_16 & VAR_10) ||
     !(VAR_16 & VAR_12)) {
  VAR_16 = -VAR_0;
  goto err;
 }

 return (VAR_16 & VAR_9) >> 2;

err:
 FUNC_4(VAR_15, VAR_2,
      VAR_13);
 return VAR_16;
}
