
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc {int num_scalers; } ;


 int FUNC_0 (struct intel_crtc*,int) ;

__attribute__((used)) static void FUNC_1(struct intel_crtc *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_scalers; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
