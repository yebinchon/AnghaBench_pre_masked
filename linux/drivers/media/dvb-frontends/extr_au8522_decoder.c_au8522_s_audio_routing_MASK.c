
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct au8522_state {scalar_t__ operational_mode; int aud_input; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct au8522_state*) ;
 struct au8522_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
     u32 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct au8522_state *VAR_5 = FUNC_1(VAR_1);

 VAR_5->aud_input = VAR_2;

 if (VAR_5->operational_mode == VAR_0)
  FUNC_0(VAR_5);

 return 0;
}
