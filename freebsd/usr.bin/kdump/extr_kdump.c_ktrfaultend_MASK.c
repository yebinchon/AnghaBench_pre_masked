
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ktr_faultend {int result; } ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int) ;

void
FUNC_2(struct ktr_faultend *VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_1(VAR_0->result);
 if (VAR_1 != ((void*)0))
  FUNC_0("%s", VAR_1);
 else
  FUNC_0("<invalid=%d>", VAR_0->result);
 FUNC_0("\n");
}
