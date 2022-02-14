
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void dentry ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 void* FUNC_4 (void*,char*,char*) ;
 void* FUNC_5 (void*,char*,int ) ;
 void* FUNC_6 (void*,char*) ;
 int FUNC_7 (int ,void*) ;
 int FUNC_8 (int ,void*) ;
 int FUNC_9 (int ,void*) ;
 int FUNC_10 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_11(struct dentry *VAR_2, void *VAR_3)
{
 struct dentry *VAR_4;
 char VAR_5[VAR_0];
 void *VAR_6;

 FUNC_10(VAR_5, VAR_0, "%i", FUNC_7(VAR_1,
           VAR_3));
 VAR_4 = FUNC_6(VAR_2, VAR_5);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);
 VAR_6 = FUNC_5(VAR_4, "mgmtime",
         FUNC_9(VAR_1, VAR_3));
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);
 FUNC_3(FUNC_8(VAR_1, VAR_3), VAR_5);
 VAR_6 = FUNC_4(VAR_4, "type", VAR_5);
 return FUNC_2(VAR_6);
}
