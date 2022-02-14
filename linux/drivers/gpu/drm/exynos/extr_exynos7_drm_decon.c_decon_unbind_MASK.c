
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct decon_context {scalar_t__ encoder; int crtc; } ;


 int FUNC_0 (struct decon_context*) ;
 int FUNC_1 (int ) ;
 struct decon_context* FUNC_2 (struct device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
   void *VAR_2)
{
 struct decon_context *VAR_3 = FUNC_2(VAR_0);

 FUNC_1(VAR_3->crtc);

 if (VAR_3->encoder)
  FUNC_3(VAR_3->encoder);

 FUNC_0(VAR_3);
}
