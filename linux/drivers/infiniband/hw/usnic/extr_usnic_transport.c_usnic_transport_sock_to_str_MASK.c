
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct socket {int dummy; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int,char*,int,int *,int ) ;
 int FUNC_2 (struct socket*,int*,int *,int *) ;

int FUNC_3(char *VAR_0, int VAR_1,
     struct socket *VAR_2)
{
 int VAR_3;
 uint32_t VAR_4;
 uint16_t VAR_5;
 int VAR_6;

 FUNC_0(VAR_0, 0, VAR_1);
 VAR_3 = FUNC_2(VAR_2, &VAR_6, &VAR_4, &VAR_5);
 if (VAR_3)
  return 0;

 return FUNC_1(VAR_0, VAR_1, "Proto:%u Addr:%pI4h Port:%hu",
   VAR_6, &VAR_4, VAR_5);
}
