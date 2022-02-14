
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct au8522_state {int operational_mode; scalar_t__ current_frequency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct au8522_state*) ;
 int FUNC_1 (struct au8522_state*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct au8522_state*) ;
 struct au8522_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3, int VAR_4)
{
 struct au8522_state *VAR_5 = FUNC_4(VAR_3);

 if (VAR_4) {





  VAR_5->current_frequency = 0;

  FUNC_1(VAR_5, VAR_2,
    0x01);
  FUNC_2(10);

  FUNC_0(VAR_5);
  FUNC_3(VAR_5);

  VAR_5->operational_mode = VAR_0;
 } else {


  FUNC_1(VAR_5, VAR_2,
    1 << 5);
  VAR_5->operational_mode = VAR_1;
 }
 return 0;
}
