
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef scalar_t__ u_int8_t ;
struct pf_state_key_cmp {int* port; int af; int * addr; scalar_t__ proto; } ;
struct pf_src_node {int dummy; } ;
struct TYPE_2__ {int opts; } ;
struct pf_rule {TYPE_1__ rpool; } ;
struct pf_addr {int* port; int af; int * addr; scalar_t__ proto; } ;
typedef int sa_family_t ;
typedef int key ;
typedef int init_addr ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct pf_state_key_cmp*,int ) ;
 int FUNC_1 (struct pf_state_key_cmp*,struct pf_state_key_cmp*,int ) ;
 int VAR_3 ;





 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (struct pf_state_key_cmp*,int) ;
 void* FUNC_4 (int) ;
 int * FUNC_5 (struct pf_state_key_cmp*,int ,int *) ;
 scalar_t__ FUNC_6 (int ,struct pf_rule*,struct pf_state_key_cmp*,struct pf_state_key_cmp*,struct pf_state_key_cmp*,struct pf_src_node**) ;

__attribute__((used)) static int
FUNC_7(sa_family_t VAR_5, u_int8_t VAR_6, struct pf_rule *VAR_7,
    struct pf_addr *VAR_8, uint16_t VAR_9, struct pf_addr *VAR_10,
    uint16_t VAR_11, struct pf_addr *VAR_12, uint16_t *VAR_13, uint16_t VAR_14,
    uint16_t VAR_15, struct pf_src_node **VAR_16)
{
 struct pf_state_key_cmp VAR_17;
 struct pf_addr VAR_18;

 FUNC_3(&VAR_18, sizeof(VAR_18));
 if (FUNC_6(VAR_5, VAR_7, VAR_8, VAR_12, &VAR_18, VAR_16))
  return (1);

 if (VAR_6 == VAR_0) {
  VAR_14 = 1;
  VAR_15 = 65535;
 }

 FUNC_3(&VAR_17, sizeof(VAR_17));
 VAR_17.af = VAR_5;
 VAR_17.proto = VAR_6;
 VAR_17.port[0] = VAR_11;
 FUNC_0(&VAR_17.addr[0], VAR_10, VAR_17.af);

 do {
  FUNC_0(&VAR_17.addr[1], VAR_12, VAR_17.af);





  if (!(VAR_6 == VAR_1 || VAR_6 == VAR_2 ||
      VAR_6 == VAR_0) || (VAR_14 == 0 && VAR_15 == 0)) {




   VAR_17.port[1] = VAR_9;
   if (FUNC_5(&VAR_17, VAR_3, ((void*)0)) == ((void*)0)) {
    *VAR_13 = VAR_9;
    return (0);
   }
  } else if (VAR_14 == VAR_15) {
   VAR_17.port[1] = FUNC_4(VAR_14);
   if (FUNC_5(&VAR_17, VAR_3, ((void*)0)) == ((void*)0)) {
    *VAR_13 = FUNC_4(VAR_14);
    return (0);
   }
  } else {
   uint32_t VAR_19;
   uint16_t VAR_20;

   if (VAR_14 > VAR_15) {
    VAR_19 = VAR_14;
    VAR_14 = VAR_15;
    VAR_15 = VAR_19;
   }

   VAR_20 = FUNC_2() % (1 + VAR_15 - VAR_14) + VAR_14;

   for (VAR_19 = VAR_20; VAR_19 <= VAR_15 && VAR_19 <= 0xffff; ++VAR_19) {
    VAR_17.port[1] = FUNC_4(VAR_19);
    if (FUNC_5(&VAR_17, VAR_3, ((void*)0)) ==
        ((void*)0)) {
     *VAR_13 = FUNC_4(VAR_19);
     return (0);
    }
   }
   VAR_19 = VAR_20;
   for (VAR_19 -= 1; VAR_19 >= VAR_14 && VAR_19 <= 0xffff; --VAR_19) {
    VAR_17.port[1] = FUNC_4(VAR_19);
    if (FUNC_5(&VAR_17, VAR_3, ((void*)0)) ==
        ((void*)0)) {
     *VAR_13 = FUNC_4(VAR_19);
     return (0);
    }
   }
  }

  switch (VAR_7->rpool.opts & VAR_4) {
  case 130:
  case 129:




   if (FUNC_6(VAR_5, VAR_7, VAR_8, VAR_12, &VAR_18, VAR_16))
    return (1);
   break;
  case 131:
  case 128:
  case 132:
  default:
   return (1);
  }
 } while (! FUNC_1(&VAR_18, VAR_12, VAR_5) );
 return (1);
}
