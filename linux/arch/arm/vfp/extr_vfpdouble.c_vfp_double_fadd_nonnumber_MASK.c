
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_double {int sign; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vfp_double VAR_3 ;
 int FUNC_0 (struct vfp_double*) ;
 int FUNC_1 (struct vfp_double*,struct vfp_double*,struct vfp_double*,int ) ;

__attribute__((used)) static u32
FUNC_2(struct vfp_double *VAR_4, struct vfp_double *VAR_5,
     struct vfp_double *VAR_6, u32 VAR_7)
{
 struct vfp_double *VAR_8;
 u32 VAR_9 = 0;
 int VAR_10, VAR_11;

 VAR_10 = FUNC_0(VAR_5);
 VAR_11 = FUNC_0(VAR_6);

 if (VAR_10 & VAR_11 & VAR_1) {



  if (VAR_5->sign ^ VAR_6->sign) {



   VAR_9 = VAR_0;
   VAR_8 = &VAR_3;
  } else {



   VAR_8 = VAR_5;
  }
 } else if (VAR_10 & VAR_1 && VAR_11 & VAR_2) {



  VAR_8 = VAR_5;
 } else {



  return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
 }
 *VAR_4 = *VAR_8;
 return VAR_9;
}
