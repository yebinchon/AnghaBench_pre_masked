
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct au8522_state {int std; scalar_t__ operational_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct au8522_state*) ;
 struct au8522_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4, v4l2_std_id VAR_5)
{
 struct au8522_state *VAR_6 = FUNC_1(VAR_4);

 if ((VAR_5 & (VAR_3 | VAR_2)) == 0)
  return -VAR_1;

 VAR_6->std = VAR_5;

 if (VAR_6->operational_mode == VAR_0)
  FUNC_0(VAR_6);

 return 0;
}
