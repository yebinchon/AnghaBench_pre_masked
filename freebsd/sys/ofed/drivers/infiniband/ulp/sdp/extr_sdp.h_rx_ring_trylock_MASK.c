
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdp_rx_ring {scalar_t__ destroyed; int destroyed_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sdp_rx_ring*) ;

__attribute__((used)) static inline int FUNC_2(struct sdp_rx_ring *VAR_0)
{
 FUNC_0(&VAR_0->destroyed_lock);
 if (VAR_0->destroyed) {
  FUNC_1(VAR_0);
  return 0;
 }
 return 1;
}
