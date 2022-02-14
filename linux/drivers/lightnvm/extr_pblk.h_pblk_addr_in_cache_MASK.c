
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_cached; } ;
struct ppa_addr {scalar_t__ ppa; TYPE_1__ c; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_0(struct ppa_addr VAR_1)
{
 return (VAR_1.ppa != VAR_0 && VAR_1.c.is_cached);
}
