
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct lgs8gxx_state {int dummy; } ;


 int FUNC_0 (struct lgs8gxx_state*,int,int*) ;
 int FUNC_1 (struct lgs8gxx_state*,int,int) ;

__attribute__((used)) static int FUNC_2(struct lgs8gxx_state *VAR_0)
{
 u8 VAR_1;


 FUNC_1(VAR_0, 0xc1, 0x3);

 FUNC_0(VAR_0, 0x7c, &VAR_1);
 FUNC_1(VAR_0, 0x7c, (VAR_1&0x8c) | 0x3);


 FUNC_0(VAR_0, 0xc3, &VAR_1);
 FUNC_1(VAR_0, 0xc3, VAR_1&0x10);


 return 0;
}
