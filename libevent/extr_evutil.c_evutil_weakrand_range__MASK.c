
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evutil_weakrand_state {int dummy; } ;
typedef int ev_int32_t ;


 int VAR_0 ;
 int FUNC_0 (struct evutil_weakrand_state*) ;

ev_int32_t
FUNC_1(struct evutil_weakrand_state *VAR_1, ev_int32_t VAR_2)
{
 ev_int32_t VAR_3, VAR_4;





 VAR_3 = VAR_0 / VAR_2;
 do {
  VAR_4 = FUNC_0(VAR_1) / VAR_3;
 } while (VAR_4 >= VAR_2);
 return VAR_4;
}
