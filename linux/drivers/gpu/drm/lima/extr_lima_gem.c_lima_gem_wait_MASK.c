
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_file {int dummy; } ;
typedef int s64 ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 long FUNC_0 (struct drm_file*,int,int,long) ;
 long FUNC_1 (int ) ;

int FUNC_2(struct drm_file *VAR_4, u32 VAR_5, u32 VAR_6, s64 VAR_7)
{
 bool VAR_8 = VAR_6 & VAR_3;
 long VAR_9, VAR_10;

 if (!VAR_6)
  return 0;

 VAR_10 = FUNC_1(VAR_7);

 VAR_9 = FUNC_0(VAR_4, VAR_5, VAR_8, VAR_10);
 if (VAR_9 == -VAR_1)
  VAR_9 = VAR_10 ? -VAR_2 : -VAR_0;

 return VAR_9;
}
