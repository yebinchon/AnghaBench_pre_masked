
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipu_crtc {scalar_t__* plane; } ;
struct device {int dummy; } ;


 struct ipu_crtc* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ipu_crtc*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
 void *VAR_2)
{
 struct ipu_crtc *VAR_3 = FUNC_0(VAR_0);

 FUNC_2(VAR_3);
 if (VAR_3->plane[1])
  FUNC_1(VAR_3->plane[1]);
 FUNC_1(VAR_3->plane[0]);
}
