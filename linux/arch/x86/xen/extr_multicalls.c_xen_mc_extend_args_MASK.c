
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct multicall_space {int * args; TYPE_1__* mc; int * member_1; int * member_0; } ;
struct mc_buffer {size_t argidx; int mcidx; int * args; TYPE_1__* entries; } ;
struct TYPE_2__ {unsigned long op; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 struct mc_buffer* FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,size_t,int ) ;
 scalar_t__ FUNC_4 (int) ;

struct multicall_space FUNC_5(unsigned long VAR_5, size_t VAR_6)
{
 struct mc_buffer *VAR_7 = FUNC_2(&VAR_4);
 struct multicall_space VAR_8 = { ((void*)0), ((void*)0) };

 FUNC_0(FUNC_1());
 FUNC_0(VAR_7->argidx >= VAR_0);

 if (FUNC_4(VAR_7->mcidx == 0 ||
       VAR_7->entries[VAR_7->mcidx - 1].op != VAR_5)) {
  FUNC_3(VAR_5, VAR_6, VAR_1);
  goto out;
 }

 if (FUNC_4((VAR_7->argidx + VAR_6) >= VAR_0)) {
  FUNC_3(VAR_5, VAR_6, VAR_2);
  goto out;
 }

 VAR_8.mc = &VAR_7->entries[VAR_7->mcidx - 1];
 VAR_8.args = &VAR_7->args[VAR_7->argidx];
 VAR_7->argidx += VAR_6;

 FUNC_0(VAR_7->argidx >= VAR_0);

 FUNC_3(VAR_5, VAR_6, VAR_3);
out:
 return VAR_8;
}
