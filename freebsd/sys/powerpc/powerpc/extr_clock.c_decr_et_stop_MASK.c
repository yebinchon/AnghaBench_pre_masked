
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct eventtimer {int dummy; } ;
struct decr_state {int div; scalar_t__ mode; } ;


 struct decr_state* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct eventtimer *VAR_4)
{
 struct decr_state *VAR_5 = FUNC_0(VAR_3);




 VAR_5->mode = 0;
 VAR_5->div = 0x7fffffff;





 FUNC_2(VAR_5->div);

 return (0);
}
