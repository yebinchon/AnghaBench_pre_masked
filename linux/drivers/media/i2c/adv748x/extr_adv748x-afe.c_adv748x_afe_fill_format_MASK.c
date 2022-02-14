
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {int width; int height; int field; int colorspace; int code; } ;
struct adv748x_afe {int curr_norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_mbus_framefmt*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct adv748x_afe *VAR_4,
        struct v4l2_mbus_framefmt *VAR_5)
{
 FUNC_0(VAR_5, 0, sizeof(*VAR_5));

 VAR_5->code = VAR_0;
 VAR_5->colorspace = VAR_1;
 VAR_5->field = VAR_2;

 VAR_5->width = 720;
 VAR_5->height = VAR_4->curr_norm & VAR_3 ? 480 : 576;


 VAR_5->height /= 2;
}
