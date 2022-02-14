
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdso_elfinfo {int dummy; } ;


 int FUNC_0 (struct vdso_elfinfo*,char const*,char const*) ;
 int FUNC_1 (struct vdso_elfinfo*,char const*,char const*) ;

__attribute__((used)) static int FUNC_2(struct vdso_elfinfo *VAR_0, const char *VAR_1,
       const char *VAR_2, bool VAR_3)
{
 if (VAR_3)
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_0(VAR_0, VAR_1, VAR_2);
}
