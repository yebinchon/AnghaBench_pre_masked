
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*,...) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char const*,void*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_3, void *VAR_4, size_t VAR_5)
{
 size_t VAR_6 = VAR_5;

 if (FUNC_3(VAR_3, VAR_4, &VAR_6, ((void*)0), 0) == -1) {
  FUNC_0(VAR_2, "top: sysctl(%s...) failed: %s\n", VAR_3,
      FUNC_2(VAR_1));
  FUNC_1(VAR_0);
 }
 if (VAR_6 != VAR_5) {
  FUNC_0(VAR_2, "top: sysctl(%s...) expected %lu, got %lu\n",
      VAR_3, (unsigned long)VAR_5, (unsigned long)VAR_6);
  FUNC_1(VAR_0);
 }
}
