
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtentry {int rt_flags; int rt_expire; } ;
struct mtuex_arg {int nextstop; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_1(struct rtentry *VAR_2, void *VAR_3)
{
 struct mtuex_arg *VAR_4 = VAR_3;

 if (VAR_2->rt_expire && !(VAR_2->rt_flags & VAR_0)) {
  if (VAR_2->rt_expire <= VAR_1) {
   VAR_2->rt_flags |= VAR_0;
  } else {
   VAR_4->nextstop = FUNC_0(VAR_4->nextstop, VAR_2->rt_expire);
  }
 }

 return (0);
}
