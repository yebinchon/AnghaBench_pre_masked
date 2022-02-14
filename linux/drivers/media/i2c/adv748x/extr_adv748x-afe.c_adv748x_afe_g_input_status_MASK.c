
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct adv748x_state {int mutex; } ;
struct adv748x_afe {int dummy; } ;


 int FUNC_0 (struct adv748x_afe*,int *,int *) ;
 struct adv748x_state* FUNC_1 (struct adv748x_afe*) ;
 struct adv748x_afe* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, u32 *VAR_1)
{
 struct adv748x_afe *VAR_2 = FUNC_2(VAR_0);
 struct adv748x_state *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_3(&VAR_3->mutex);

 VAR_4 = FUNC_0(VAR_2, VAR_1, ((void*)0));

 FUNC_4(&VAR_3->mutex);

 return VAR_4;
}
