
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg216x_state {int last_reset; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lg216x_state*,int,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct lg216x_state *VAR_1)
{
 int VAR_2;

 FUNC_2("\n");

 VAR_2 = FUNC_1(VAR_1, 0x0002, 0x00);
 if (FUNC_3(VAR_2))
  goto fail;

 FUNC_4(20);
 VAR_2 = FUNC_1(VAR_1, 0x0002, 0x01);
 if (FUNC_3(VAR_2))
  goto fail;

 VAR_1->last_reset = FUNC_0(VAR_0);
fail:
 return VAR_2;
}
