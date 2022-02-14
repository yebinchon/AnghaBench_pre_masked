
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lg216x_state {int dummy; } ;


 int FUNC_0 (struct lg216x_state*,int,int*) ;
 int FUNC_1 (struct lg216x_state*,int,int) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct lg216x_state *VAR_0,
       int VAR_1)
{
 u8 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, 0x0008, &VAR_2);
 if (FUNC_2(VAR_3))
  goto fail;

 VAR_2 &= 0xfe;
 VAR_2 |= (VAR_1) ? 0x01 : 0x00;

 VAR_3 = FUNC_1(VAR_0, 0x0008, VAR_2);
 FUNC_2(VAR_3);
fail:
 return VAR_3;
}
