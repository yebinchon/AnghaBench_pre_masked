
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_afe {int curr_norm; } ;


 struct adv748x_afe* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, v4l2_std_id *VAR_1)
{
 struct adv748x_afe *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->curr_norm;

 return 0;
}
