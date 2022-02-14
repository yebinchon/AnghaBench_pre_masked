
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vdso_image {int dummy; } ;
struct vdso_elfinfo {int dummy; } ;


 int FUNC_0 (struct vdso_image const*,struct vdso_elfinfo*,int) ;
 int FUNC_1 (struct vdso_elfinfo*,char*,char*,int) ;

__attribute__((used)) static int FUNC_2(const struct vdso_image *VAR_0, struct vdso_elfinfo *VAR_1, bool VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_1,
          "__vdso_gettimeofday",
          "__vdso_gettimeofday_stick", VAR_2);
 if (VAR_3)
  return VAR_3;

 return FUNC_1(VAR_1,
    "__vdso_clock_gettime",
    "__vdso_clock_gettime_stick", VAR_2);
 return 0;
}
