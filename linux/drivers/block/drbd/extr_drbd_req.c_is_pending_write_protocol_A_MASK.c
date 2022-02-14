
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_request {int rq_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static inline bool FUNC_0(struct drbd_request *VAR_4)
{
 return (VAR_4->rq_state &
     (VAR_3|VAR_2|VAR_1|VAR_0))
  == (VAR_3|VAR_2);
}
