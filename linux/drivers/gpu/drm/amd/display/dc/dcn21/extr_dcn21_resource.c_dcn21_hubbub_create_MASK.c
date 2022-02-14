
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hubbub {int dummy; } ;
struct dcn20_vmid {int * masks; int * shifts; int * regs; struct dc_context* ctx; } ;
struct dcn20_hubbub {struct hubbub base; struct dcn20_vmid* vmid; } ;
struct dc_context {int dummy; } ;
struct TYPE_2__ {int num_vmid; } ;


 int VAR_0 ;
 int FUNC_0 (struct dcn20_hubbub*,struct dc_context*,int *,int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct dcn20_hubbub* FUNC_1 (int,int ) ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static struct hubbub *FUNC_2(struct dc_context *VAR_8)
{
 int VAR_9;

 struct dcn20_hubbub *VAR_10 = FUNC_1(sizeof(struct dcn20_hubbub),
       VAR_0);

 if (!VAR_10)
  return ((void*)0);

 FUNC_0(VAR_10, VAR_8,
   &VAR_2,
   &VAR_3,
   &VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_4.num_vmid; VAR_9++) {
  struct dcn20_vmid *VAR_11 = &VAR_10->vmid[VAR_9];

  VAR_11->ctx = VAR_8;

  VAR_11->regs = &VAR_6[VAR_9];
  VAR_11->shifts = &VAR_7;
  VAR_11->masks = &VAR_5;
 }

 return &VAR_10->base;
}
