
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int client; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,size_t) ;

ssize_t FUNC_1(struct cyapa *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 int VAR_5;

 if (!VAR_3 || !VAR_4)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_2->client, VAR_3, VAR_4);

 if (VAR_5 != VAR_4)
  return (VAR_5 < 0) ? VAR_5 : -VAR_1;

 return 0;
}
