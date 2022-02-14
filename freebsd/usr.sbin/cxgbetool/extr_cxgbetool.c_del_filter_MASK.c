
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int prio; int hash; } ;
struct t4_filter {int idx; TYPE_1__ fs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct t4_filter*) ;

__attribute__((used)) static int
FUNC_1(uint32_t VAR_1, int VAR_2, int VAR_3)
{
 struct t4_filter VAR_4;

 VAR_4.fs.prio = VAR_2;
 VAR_4.fs.hash = VAR_3;
 VAR_4.idx = VAR_1;

 return FUNC_0(VAR_0, &VAR_4);
}
