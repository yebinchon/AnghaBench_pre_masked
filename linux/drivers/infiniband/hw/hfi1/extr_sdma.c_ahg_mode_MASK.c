
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdma_txreq {TYPE_1__* descp; } ;
struct TYPE_2__ {int* qw; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline u8 FUNC_0(struct sdma_txreq *VAR_2)
{
 return (VAR_2->descp[0].qw[1] & VAR_1)
  >> VAR_0;
}
