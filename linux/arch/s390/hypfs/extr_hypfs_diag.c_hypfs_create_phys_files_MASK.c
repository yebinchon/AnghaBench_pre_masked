
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void dentry ;


 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 int FUNC_2 (void*,void*) ;
 void* FUNC_3 (void*,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,void*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void *FUNC_7(struct dentry *VAR_1, void *VAR_2)
{
 int VAR_3;
 void *VAR_4;
 struct dentry *VAR_5;

 VAR_5 = FUNC_3(VAR_1, "cpus");
 if (FUNC_1(VAR_5))
  return VAR_5;
 VAR_4 = VAR_2 + FUNC_6(VAR_0);
 for (VAR_3 = 0; VAR_3 < FUNC_5(VAR_0, VAR_2); VAR_3++) {
  int VAR_6;
  VAR_6 = FUNC_2(VAR_5, VAR_4);
  if (VAR_6)
   return FUNC_0(VAR_6);
  VAR_4 += FUNC_4(VAR_0);
 }
 return VAR_4;
}
