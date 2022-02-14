
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct ipfw_flow_id {int dummy; } ;
struct dyn_parent {int dummy; } ;
struct dyn_ipv4_state {struct dyn_parent* limit; } ;


 int FUNC_0 (int *,struct dyn_ipv4_state*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dyn_ipv4_state*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 struct dyn_ipv4_state* FUNC_9 (struct ipfw_flow_id const*,int ,int ) ;
 struct dyn_parent* FUNC_10 (void*,scalar_t__,int ,scalar_t__) ;
 struct dyn_ipv4_state* FUNC_11 (struct ipfw_flow_id const*,void*,scalar_t__,int ,scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ,struct dyn_parent*) ;

__attribute__((used)) static struct dyn_ipv4_state *
FUNC_13(void *VAR_7, uint32_t VAR_8, uint16_t VAR_9,
    const struct ipfw_flow_id *VAR_10, uint32_t VAR_11, uint32_t VAR_12,
    uint16_t VAR_13)
{
 struct dyn_ipv4_state *VAR_14;
 struct dyn_parent *VAR_15;
 uint32_t VAR_16;

 VAR_16 = FUNC_3(VAR_11, VAR_1);
 FUNC_4(VAR_16);
 if (VAR_12 != FUNC_6(VAR_16, VAR_6)) {




  VAR_14 = FUNC_11(VAR_10, VAR_7, VAR_8,
      VAR_9, VAR_16);
  if (VAR_14 != ((void*)0)) {




   FUNC_1();
   FUNC_2(VAR_14);
   FUNC_5(VAR_16);
   return (VAR_14);
  }
 }

 VAR_15 = FUNC_10(VAR_7, VAR_8, VAR_9, VAR_11);
 if (VAR_15 == ((void*)0)) {
  FUNC_5(VAR_16);
  return (((void*)0));
 }

 VAR_14 = FUNC_9(VAR_10, VAR_13, VAR_0);
 if (VAR_14 == ((void*)0)) {
  FUNC_5(VAR_16);
  FUNC_12(VAR_3, VAR_15);
  return (((void*)0));
 }

 VAR_14->limit = VAR_15;
 FUNC_0(&VAR_2[VAR_16], VAR_14, VAR_5);
 FUNC_8(VAR_4);
 FUNC_7(VAR_16, VAR_6);
 FUNC_1();
 FUNC_2(VAR_14);
 FUNC_5(VAR_16);
 return (VAR_14);
}
