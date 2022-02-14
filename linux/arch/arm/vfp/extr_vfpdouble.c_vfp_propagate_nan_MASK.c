
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vfp_double {int significand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct vfp_double VAR_6 ;
 int FUNC_0 (struct vfp_double*) ;

__attribute__((used)) static u32
FUNC_1(struct vfp_double *VAR_7, struct vfp_double *VAR_8,
    struct vfp_double *VAR_9, u32 VAR_10)
{
 struct vfp_double *VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_12 = FUNC_0(VAR_8);

 if (VAR_9)
  VAR_13 = FUNC_0(VAR_9);

 if (VAR_10 & VAR_0)



  VAR_11 = &VAR_6;
 else {





  if (VAR_12 == VAR_5 || (VAR_13 != VAR_5 && VAR_12 == VAR_4))
   VAR_11 = VAR_8;
  else
   VAR_11 = VAR_9;



  VAR_11->significand |= VAR_2;
 }

 *VAR_7 = *VAR_11;




 return VAR_12 == VAR_5 || VAR_13 == VAR_5 ? VAR_1 : VAR_3;
}
