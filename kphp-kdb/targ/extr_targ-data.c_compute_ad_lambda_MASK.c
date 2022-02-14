
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {scalar_t__ price; int delta; int g_sump2; int g_sump1; int g_sump0; int lambda; } ;


 int FUNC_0 (scalar_t__,int ,int ,int ,int *) ;

__attribute__((used)) static void FUNC_1 (struct advert *VAR_0) {
  if (VAR_0->price <= 0) {
    return;
  }
  VAR_0->lambda = FUNC_0 (VAR_0->price, VAR_0->g_sump0, VAR_0->g_sump1, VAR_0->g_sump2, &VAR_0->delta);
}
