
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg216x_state {int parade_id; } ;


 int FUNC_0 (struct lg216x_state*,int,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lg216x_state *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, 0x013e, VAR_1 & 0x7f);
 if (FUNC_1(VAR_2))
  goto fail;

 VAR_0->parade_id = VAR_1 & 0x7f;
fail:
 return VAR_2;
}
