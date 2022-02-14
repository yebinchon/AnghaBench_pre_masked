
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct connection {int dummy; } ;
struct TYPE_2__ {int (* flush_query ) (struct connection*) ;} ;


 TYPE_1__* FUNC_0 (struct connection*) ;
 int FUNC_1 (struct connection*) ;

__attribute__((used)) static inline int FUNC_2 (struct connection *VAR_0) {
  return FUNC_0 (VAR_0)->flush_query (VAR_0);
}
