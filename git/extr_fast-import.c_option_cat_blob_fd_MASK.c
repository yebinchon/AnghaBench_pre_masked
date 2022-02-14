
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 unsigned long FUNC_1 (char*,char const*) ;

__attribute__((used)) static void FUNC_2(const char *VAR_2)
{
 unsigned long VAR_3 = FUNC_1("--cat-blob-fd", VAR_2);
 if (VAR_3 > (unsigned long) VAR_0)
  FUNC_0("--cat-blob-fd cannot exceed %d", VAR_0);
 VAR_1 = (int) VAR_3;
}
