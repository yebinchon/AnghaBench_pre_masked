
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bma150_data {scalar_t__ mode; int client; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct bma150_data *VAR_7, u8 VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_7->client, VAR_8, VAR_5,
    VAR_4, VAR_6);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_7->client, VAR_8, VAR_2,
    VAR_1, VAR_3);
 if (VAR_9)
  return VAR_9;

 if (VAR_8 == VAR_0)
  FUNC_1(2000, 2100);

 VAR_7->mode = VAR_8;
 return 0;
}
