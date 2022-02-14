
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_fw_chain {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct ip_fw_chain*,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_3(struct ip_fw_chain *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0,
     VAR_1, ((void*)0));
 if (VAR_5 != 0)
  return (VAR_5);
 FUNC_1(VAR_4, VAR_2);
 FUNC_0("External actions support initialized");
 return (0);
}
