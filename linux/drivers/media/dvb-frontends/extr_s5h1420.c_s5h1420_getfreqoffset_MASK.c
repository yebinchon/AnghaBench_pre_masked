
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s5h1420_state {int fclk; } ;


 int FUNC_0 (struct s5h1420_state*,int) ;
 int FUNC_1 (struct s5h1420_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct s5h1420_state* VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0, 0x06, FUNC_0(VAR_0, 0x06) | 0x08);
 VAR_1 = FUNC_0(VAR_0, 0x0e) << 16;
 VAR_1 |= FUNC_0(VAR_0, 0x0f) << 8;
 VAR_1 |= FUNC_0(VAR_0, 0x10);
 FUNC_1(VAR_0, 0x06, FUNC_0(VAR_0, 0x06) & 0xf7);

 if (VAR_1 & 0x800000)
  VAR_1 |= 0xff000000;



 VAR_1 = (((-VAR_1) * (VAR_0->fclk/1000000)) / (1<<24));

 return VAR_1;
}
