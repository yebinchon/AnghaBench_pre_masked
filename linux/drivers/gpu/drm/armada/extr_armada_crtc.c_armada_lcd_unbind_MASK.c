
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct armada_crtc {int crtc; } ;


 int FUNC_0 (int *) ;
 struct armada_crtc* FUNC_1 (struct device*) ;

__attribute__((used)) static void
FUNC_2(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct armada_crtc *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(&VAR_3->crtc);
}
