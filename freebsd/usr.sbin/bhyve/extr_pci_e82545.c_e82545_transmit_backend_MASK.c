
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iovec {int dummy; } ;
struct e82545_softc {int * esc_be; } ;


 int FUNC_0 (int *,struct iovec*,int) ;

__attribute__((used)) static void
FUNC_1(struct e82545_softc *VAR_0, struct iovec *VAR_1, int VAR_2)
{

 if (VAR_0->esc_be == ((void*)0))
  return;

 (void) FUNC_0(VAR_0->esc_be, VAR_1, VAR_2);
}
