
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* settings; } ;
struct TYPE_4__ {int hideUserlandThreads; int hideThreads; } ;
typedef TYPE_2__ State ;
typedef int Htop_Reaction ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static Htop_Reaction FUNC_0(State* VAR_2) {
   VAR_2->settings->hideUserlandThreads = !VAR_2->settings->hideUserlandThreads;
   VAR_2->settings->hideThreads = VAR_2->settings->hideUserlandThreads;
   return VAR_0 | VAR_1;
}
