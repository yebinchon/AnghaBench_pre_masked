
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct ipfw_flow_id {int dummy; } ;
struct ipfw_dyn_info {scalar_t__ direction; scalar_t__ hashval; scalar_t__ version; int kidx; } ;
struct dyn_ipv4_state {void* data; } ;


 int FUNC_0 (int *,struct dyn_ipv4_state*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 void* FUNC_7 (void*,scalar_t__,int ,struct ipfw_flow_id const*,void const*,int,scalar_t__,int ) ;
 struct dyn_ipv4_state* FUNC_8 (struct ipfw_flow_id const*,int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (struct ipfw_flow_id const*,void const*,int,scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int ,void*) ;

__attribute__((used)) static int
FUNC_11(void *VAR_9, uint32_t VAR_10, uint16_t VAR_11,
    const struct ipfw_flow_id *VAR_12, const void *VAR_13, int VAR_14,
    uint32_t VAR_15, struct ipfw_dyn_info *VAR_16, uint16_t VAR_17,
    uint16_t VAR_18, uint8_t VAR_19)
{
 struct dyn_ipv4_state *VAR_20;
 void *VAR_21;
 uint32_t VAR_22;

 VAR_22 = FUNC_1(VAR_15, VAR_3);
 FUNC_2(VAR_22);
 if (VAR_16->direction == VAR_2 ||
     VAR_16->kidx != VAR_18 ||
     VAR_16->hashval != VAR_15 ||
     VAR_16->version != FUNC_4(VAR_22, VAR_8)) {




  if (FUNC_9(VAR_12, VAR_13, VAR_14,
      VAR_22, VAR_18) != 0) {
   FUNC_3(VAR_22);
   return (VAR_0);
  }
 }

 VAR_21 = FUNC_7(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13,
     VAR_14, VAR_15, VAR_17);
 if (VAR_21 == ((void*)0)) {
  FUNC_3(VAR_22);
  return (VAR_1);
 }

 VAR_20 = FUNC_8(VAR_12, VAR_18, VAR_19);
 if (VAR_20 == ((void*)0)) {
  FUNC_3(VAR_22);
  FUNC_10(VAR_4, VAR_21);
  return (VAR_1);
 }

 VAR_20->data = VAR_21;
 FUNC_0(&VAR_5[VAR_22], VAR_20, VAR_7);
 FUNC_6(VAR_6);
 FUNC_5(VAR_22, VAR_8);
 FUNC_3(VAR_22);
 return (0);
}
