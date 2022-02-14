
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,char*) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char*,char*) ;
 int VAR_4 ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static BROTLI_BOOL FUNC_6(const char* VAR_5, FILE** VAR_6) {
  *VAR_6 = ((void*)0);
  if (!VAR_5) {
    *VAR_6 = FUNC_2(FUNC_0(VAR_2), "rb");
    return VAR_1;
  }
  *VAR_6 = FUNC_3(VAR_5, "rb");
  if (!*VAR_6) {
    FUNC_4(VAR_4, "failed to open input file [%s]: %s\n",
            FUNC_1(VAR_5), FUNC_5(VAR_3));
    return VAR_0;
  }
  return VAR_1;
}
