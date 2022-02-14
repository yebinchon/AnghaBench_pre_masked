
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void dentry ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (void*,void*) ;
 void* FUNC_4 (void*,char*) ;
 int FUNC_5 (int ,void*,char*) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void *FUNC_8(struct dentry *VAR_2, void *VAR_3)
{
 struct dentry *VAR_4;
 struct dentry *VAR_5;
 char VAR_6[VAR_0 + 1];
 void *VAR_7;
 int VAR_8;

 FUNC_5(VAR_1, VAR_3, VAR_6);
 VAR_6[VAR_0] = 0;
 VAR_5 = FUNC_4(VAR_2, VAR_6);
 if (FUNC_1(VAR_5))
  return VAR_5;
 VAR_4 = FUNC_4(VAR_5, "cpus");
 if (FUNC_1(VAR_4))
  return VAR_4;
 VAR_7 = VAR_3 + FUNC_7(VAR_1);
 for (VAR_8 = 0; VAR_8 < FUNC_6(VAR_1, VAR_3); VAR_8++) {
  int VAR_9;
  VAR_9 = FUNC_3(VAR_4, VAR_7);
  if (VAR_9)
   return FUNC_0(VAR_9);
  VAR_7 += FUNC_2(VAR_1);
 }
 return VAR_7;
}
