
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bma150_data {int client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bma150_data *VAR_8,
     u8 VAR_9, u8 VAR_10, u8 VAR_11, u8 VAR_12)
{
 int VAR_13;

 VAR_13 = FUNC_0(VAR_8->client, VAR_10,
    VAR_5, VAR_4,
    VAR_6);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_8->client,
    VAR_0, VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_8->client,
    VAR_7, VAR_12);
 if (VAR_13)
  return VAR_13;

 return FUNC_0(VAR_8->client, !!VAR_9,
    VAR_2, VAR_1,
    VAR_3);
}
