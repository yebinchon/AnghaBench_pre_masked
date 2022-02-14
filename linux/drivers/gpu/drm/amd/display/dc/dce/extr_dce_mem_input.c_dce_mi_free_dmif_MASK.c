
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct mem_input {int dummy; } ;
struct TYPE_2__ {scalar_t__ single_head_rdreq_dmif_limit; } ;
struct dce_mem_input {TYPE_1__ wa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int,int,int) ;
 struct dce_mem_input* FUNC_4 (struct mem_input*) ;

__attribute__((used)) static void FUNC_5(
  struct mem_input *VAR_5,
  uint32_t VAR_6)
{
 struct dce_mem_input *VAR_7 = FUNC_4(VAR_5);
 uint32_t VAR_8;
 uint32_t VAR_9;

 VAR_9 = FUNC_0(VAR_2,
   VAR_0, &VAR_8);

 if (VAR_8 == 0)
  return;

 FUNC_1(VAR_2, VAR_9,
   VAR_0, 0);

 FUNC_3(VAR_2,
   VAR_1, 1,
   10, 3500);

 if (VAR_7->wa.single_head_rdreq_dmif_limit) {
  uint32_t VAR_10 = (VAR_6 > 1) ? 0 :
    VAR_7->wa.single_head_rdreq_dmif_limit;

  FUNC_2(VAR_4,
    VAR_3, VAR_10);
 }
}
