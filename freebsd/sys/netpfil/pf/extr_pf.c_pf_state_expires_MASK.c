
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int64_t ;
typedef scalar_t__ u_int32_t ;
struct TYPE_4__ {TYPE_3__* ptr; } ;
struct pf_state {size_t timeout; scalar_t__ expire; TYPE_1__ rule; } ;
struct TYPE_6__ {scalar_t__* timeout; int states_cur; } ;
struct TYPE_5__ {scalar_t__ states; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_7 ;

u_int32_t
FUNC_2(const struct pf_state *VAR_8)
{
 u_int32_t VAR_9;
 u_int32_t VAR_10;
 u_int32_t VAR_11;
 u_int32_t VAR_12;


 if (VAR_8->timeout == VAR_3)
  return (VAR_7);
 FUNC_0(VAR_8->timeout != VAR_4,
     ("pf_state_expires: timeout == PFTM_UNLINKED"));
 FUNC_0((VAR_8->timeout < VAR_2),
     ("pf_state_expires: timeout > PFTM_MAX"));
 VAR_9 = VAR_8->rule.ptr->timeout[VAR_8->timeout];
 if (!VAR_9)
  VAR_9 = VAR_5.timeout[VAR_8->timeout];
 VAR_10 = VAR_8->rule.ptr->timeout[VAR_1];
 if (VAR_10 && VAR_8->rule.ptr != &VAR_5) {
  VAR_11 = VAR_8->rule.ptr->timeout[VAR_0];
  VAR_12 = FUNC_1(VAR_8->rule.ptr->states_cur);
 } else {
  VAR_10 = VAR_5.timeout[VAR_1];
  VAR_11 = VAR_5.timeout[VAR_0];
  VAR_12 = VAR_6.states;
 }
 if (VAR_11 && VAR_12 > VAR_10 && VAR_10 < VAR_11) {
  if (VAR_12 < VAR_11) {
   VAR_9 = (u_int64_t)VAR_9 * (VAR_11 - VAR_12) /
       (VAR_11 - VAR_10);
   return (VAR_8->expire + VAR_9);
  }
  else
   return (VAR_7);
 }
 return (VAR_8->expire + VAR_9);
}
