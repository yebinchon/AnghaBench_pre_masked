
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int bestat; } ;
struct TYPE_7__ {scalar_t__ gstat; scalar_t__ cstat; int gerr; int cerr; } ;
struct TYPE_6__ {int errstat; } ;
struct TYPE_5__ {int extio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 scalar_t__ FUNC_0 () ;
 TYPE_3__* VAR_7 ;
 TYPE_2__* VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static void FUNC_1(void)
{

 VAR_0 = VAR_7->cerr;
 VAR_1 = VAR_7->cstat;
 VAR_3 = VAR_7->gerr;
 VAR_4 = VAR_7->gstat;
 VAR_2 = FUNC_0() ? VAR_9->extio : (VAR_8->errstat << 4);
 VAR_5 = VAR_6->bestat;

 VAR_7->cstat = VAR_7->gstat = 0;
}
