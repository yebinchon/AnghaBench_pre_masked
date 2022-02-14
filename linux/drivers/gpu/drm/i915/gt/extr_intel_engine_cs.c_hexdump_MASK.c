
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_printer {int dummy; } ;
typedef int line ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_printer*,char*,...) ;
 int FUNC_2 (void const*,size_t,size_t const,int,char*,int,int) ;
 int FUNC_3 (void const*,void const*,size_t const) ;

__attribute__((used)) static void FUNC_4(struct drm_printer *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const size_t VAR_3 = 8 * sizeof(u32);
 const void *VAR_4 = ((void*)0);
 bool VAR_5 = 0;
 size_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6 += VAR_3) {
  char VAR_7[128];

  if (VAR_4 && !FUNC_3(VAR_4, VAR_1 + VAR_6, VAR_3)) {
   if (!VAR_5) {
    FUNC_1(VAR_0, "*\n");
    VAR_5 = 1;
   }
   continue;
  }

  FUNC_0(FUNC_2(VAR_1 + VAR_6, VAR_2 - VAR_6,
      VAR_3, sizeof(u32),
      VAR_7, sizeof(VAR_7),
      0) >= sizeof(VAR_7));
  FUNC_1(VAR_0, "[%04zx] %s\n", VAR_6, VAR_7);

  VAR_4 = VAR_1 + VAR_6;
  VAR_5 = 0;
 }
}
