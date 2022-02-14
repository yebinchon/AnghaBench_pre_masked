
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usnic_ib_vf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct usnic_ib_vf*,char*,int) ;

void FUNC_4(struct usnic_ib_vf *VAR_1)
{
 char *VAR_2 = FUNC_1(1000, VAR_0);

 if (!VAR_2)
  return;

 FUNC_3(VAR_1, VAR_2, 1000);
 FUNC_2("%s\n", VAR_2);

 FUNC_0(VAR_2);
}
