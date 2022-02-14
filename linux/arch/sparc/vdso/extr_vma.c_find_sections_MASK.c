
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdso_image {int dummy; } ;
struct vdso_elfinfo {int dummy; } ;


 int FUNC_0 (struct vdso_image const*,struct vdso_elfinfo*) ;
 int FUNC_1 (struct vdso_image const*,struct vdso_elfinfo*) ;

__attribute__((used)) static int FUNC_2(const struct vdso_image *VAR_0, struct vdso_elfinfo *VAR_1,
    bool VAR_2)
{
 if (VAR_2)
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
