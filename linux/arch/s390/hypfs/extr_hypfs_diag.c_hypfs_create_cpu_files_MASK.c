
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,void*) ;
 int FUNC_4 (scalar_t__,void*) ;
 int FUNC_5 (scalar_t__,void*) ;
 scalar_t__ FUNC_6 (scalar_t__,void*) ;
 scalar_t__ FUNC_7 (scalar_t__,void*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int ,char*) ;
 void* FUNC_9 (struct dentry*,char*,char*) ;
 void* FUNC_10 (struct dentry*,char*,scalar_t__) ;
 struct dentry* FUNC_11 (struct dentry*,char*) ;
 int FUNC_12 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_13(struct dentry *VAR_3, void *VAR_4)
{
 struct dentry *VAR_5;
 char VAR_6[VAR_1];
 void *VAR_7;

 FUNC_12(VAR_6, VAR_1, "%d", FUNC_4(VAR_2,
           VAR_4));
 VAR_5 = FUNC_11(VAR_3, VAR_6);
 VAR_7 = FUNC_10(VAR_5, "mgmtime",
         FUNC_3(VAR_2, VAR_4) -
         FUNC_6(VAR_2, VAR_4));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 VAR_7 = FUNC_10(VAR_5, "cputime",
         FUNC_6(VAR_2, VAR_4));
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);
 if (VAR_2 == VAR_0) {
  VAR_7 = FUNC_10(VAR_5, "onlinetime",
          FUNC_7(VAR_2,
           VAR_4));
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 }
 FUNC_8(FUNC_5(VAR_2, VAR_4), VAR_6);
 VAR_7 = FUNC_9(VAR_5, "type", VAR_6);
 return FUNC_2(VAR_7);
}
