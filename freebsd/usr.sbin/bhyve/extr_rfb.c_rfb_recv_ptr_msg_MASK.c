
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rfb_softc {int dummy; } ;
struct rfb_ptr_msg {int y; int x; int button; } ;
typedef int ptr_msg ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,void*,int) ;

__attribute__((used)) static void
FUNC_3(struct rfb_softc *VAR_0, int VAR_1)
{
 struct rfb_ptr_msg VAR_2;

 (void)FUNC_2(VAR_1, ((void *)&VAR_2) + 1, sizeof(VAR_2) - 1);

 FUNC_0(VAR_2.button, FUNC_1(VAR_2.x), FUNC_1(VAR_2.y));
}
