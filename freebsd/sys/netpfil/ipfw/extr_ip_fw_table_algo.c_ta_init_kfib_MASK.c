
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct table_info {int data; int lookup; } ;
struct ip_fw_chain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int*,char*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_1(struct ip_fw_chain *VAR_3, void **VAR_4, struct table_info *VAR_5,
    char *VAR_6, uint8_t VAR_7)
{
 int VAR_8, VAR_9;

 VAR_9 = 0;
 if ((VAR_8 = FUNC_0(&VAR_9, VAR_6)) != 0)
  return (VAR_8);

 if (VAR_9 >= VAR_1)
  return (VAR_0);

 VAR_5->data = VAR_9;
 VAR_5->lookup = VAR_2;

 return (0);
}
