
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct property {int length; int value; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long*,size_t*) ;
 int FUNC_1 (unsigned long,size_t) ;
 int VAR_1 ;
 struct property* FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,struct property*) ;

int FUNC_4(void)
{
 int VAR_2;
 unsigned long VAR_3;
 size_t VAR_4;
 struct property *VAR_5;

 VAR_5 = FUNC_2(VAR_1, "linux,ima-kexec-buffer", ((void*)0));
 if (!VAR_5)
  return -VAR_0;

 VAR_2 = FUNC_0(VAR_5->value, VAR_5->length, &VAR_3, &VAR_4);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_3(VAR_1, VAR_5);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_3, VAR_4);

}
