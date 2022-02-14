
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct cyapa {int client; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,size_t) ;

ssize_t FUNC_1(struct cyapa *VAR_3, u8 *VAR_4, size_t VAR_5)
{
 int VAR_6;

 if (VAR_5 == 0)
  return 0;

 if (!VAR_4 || VAR_5 > VAR_0)
  return -VAR_1;

 VAR_6 = FUNC_0(VAR_3->client, VAR_4, VAR_5);

 if (VAR_6 != VAR_5)
  return (VAR_6 < 0) ? VAR_6 : -VAR_2;
 return VAR_5;
}
