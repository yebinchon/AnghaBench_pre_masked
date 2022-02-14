
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* VAR_0 ;
 void* FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*,void*) ;
 void* VAR_1 ;
 int FUNC_2 (char const*,char*) ;
 void* VAR_2 ;
 void* VAR_3 ;

__attribute__((used)) static int FUNC_3(const char *VAR_4, const char *VAR_5, void *VAR_6)
{
 if (!FUNC_2(VAR_4, "repack.usedeltabaseoffset")) {
  VAR_0 = FUNC_0(VAR_4, VAR_5);
  return 0;
 }
 if (!FUNC_2(VAR_4, "repack.packkeptobjects")) {
  VAR_1 = FUNC_0(VAR_4, VAR_5);
  return 0;
 }
 if (!FUNC_2(VAR_4, "repack.writebitmaps") ||
     !FUNC_2(VAR_4, "pack.writebitmaps")) {
  VAR_3 = FUNC_0(VAR_4, VAR_5);
  return 0;
 }
 if (!FUNC_2(VAR_4, "repack.usedeltaislands")) {
  VAR_2 = FUNC_0(VAR_4, VAR_5);
  return 0;
 }
 return FUNC_1(VAR_4, VAR_5, VAR_6);
}
