
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si7005_data {int config; int lock; int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct si7005_data *VAR_7, bool VAR_8)
{
 int VAR_9 = 50;
 int VAR_10;

 FUNC_4(&VAR_7->lock);

 VAR_10 = FUNC_2(VAR_7->client, VAR_1,
  VAR_7->config | VAR_2 |
  (VAR_8 ? VAR_3 : 0));
 if (VAR_10 < 0)
  goto done;

 while (VAR_9-- > 0) {
  FUNC_3(20);
  VAR_10 = FUNC_0(VAR_7->client, VAR_5);
  if (VAR_10 < 0)
   goto done;
  if (!(VAR_10 & VAR_6))
   break;
 }
 if (VAR_9 < 0) {
  VAR_10 = -VAR_0;
  goto done;
 }

 VAR_10 = FUNC_1(VAR_7->client, VAR_4);

done:
 FUNC_5(&VAR_7->lock);

 return VAR_10;
}
