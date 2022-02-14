
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int Elf32_Ehdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,void*,int ) ;
 int FUNC_2 (int *,void*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_4(Elf32_Ehdr *VAR_4, void *VAR_5)
{
 u_int64_t VAR_6;
 u_int64_t VAR_7;
 u_int64_t VAR_8;
 u_int64_t VAR_9;
 void *VAR_10;
 int VAR_11;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_1);
 VAR_7 = FUNC_2(VAR_4, VAR_5, VAR_0);
 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_2);
 VAR_10 = (char *)VAR_4 + VAR_6;
 FUNC_3(VAR_3, "\nglobal offset table:\n");
 for (VAR_11 = 0; (u_int64_t)VAR_11 < VAR_8 / VAR_7; VAR_11++) {
  VAR_9 = FUNC_0(VAR_4, (char *)VAR_10 + VAR_11 * VAR_7, 0);
  FUNC_3(VAR_3, "\n");
  FUNC_3(VAR_3, "entry: %d\n", VAR_11);
  FUNC_3(VAR_3, "\t%#x\n", VAR_9);
 }
}
