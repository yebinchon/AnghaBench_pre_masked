
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al3320a_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static int FUNC_1(struct al3320a_data *VAR_9)
{
 int VAR_10;


 VAR_10 = FUNC_0(VAR_9->client, VAR_5,
     VAR_0);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9->client, VAR_6,
     VAR_4 << VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9->client, VAR_7,
     VAR_1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9->client, VAR_8,
     VAR_2);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
