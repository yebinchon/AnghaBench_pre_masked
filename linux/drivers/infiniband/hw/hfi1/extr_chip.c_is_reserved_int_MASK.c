
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int dummy; } ;
typedef int name ;


 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (char*,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct hfi1_devdata *VAR_0, unsigned int VAR_1)
{
 char VAR_2[64];

 FUNC_0(VAR_0, "unexpected %s interrupt\n",
     FUNC_1(VAR_2, sizeof(VAR_2), VAR_1));
}
