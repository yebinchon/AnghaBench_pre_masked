
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct meson_drm {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int,unsigned int) ;
 scalar_t__ FUNC_1 (struct meson_drm*,int ) ;
 unsigned int FUNC_2 (int ,int ) ;

__attribute__((used)) static unsigned int FUNC_3(struct meson_drm *VAR_6,
         unsigned int VAR_7,
         unsigned int VAR_8)
{
 unsigned int VAR_9 = VAR_5;
 unsigned int VAR_10 = VAR_2;
 unsigned int VAR_11;
 unsigned int VAR_12;


 if (FUNC_1(VAR_6, VAR_4)) {
  VAR_10 = VAR_1;
  VAR_9 *= 2;
 }

 if (FUNC_1(VAR_6, VAR_3))
  VAR_10 = VAR_0;


 if (VAR_8 / VAR_7 == VAR_9 &&
     VAR_8 % VAR_7 == 0)
  return 0;

 VAR_12 = FUNC_0((u64)VAR_8 * (u64)VAR_10, VAR_9);
 VAR_11 = VAR_7 * VAR_10;
 if (VAR_11 > VAR_12)
  return VAR_10;
 VAR_12 -= VAR_11;

 return FUNC_2((u16)VAR_12, (u16)(VAR_10 - 1));
}
