
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t u_int ;
struct table_info {size_t data; int lookup; struct fhashentry4* xstate; int * state; } ;
struct ip_fw_chain {int dummy; } ;
struct TYPE_4__ {int af; int proto; int dport; int sport; } ;
struct fhashentry6 {TYPE_2__ e; int dip6; int sip6; } ;
struct TYPE_3__ {int af; int proto; int dport; int sport; } ;
struct fhashentry4 {TYPE_1__ e; int dip; int sip; } ;
struct fhashbhead {int dummy; } ;
struct fhash_cfg {int size; struct fhashentry4 fe4; int * head; struct fhashentry6 fe6; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *,int,int) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_3(struct ip_fw_chain *VAR_11, void **VAR_12, struct table_info *VAR_13,
    char *VAR_14, uint8_t VAR_15)
{
 struct fhash_cfg *VAR_16;
 struct fhashentry4 *VAR_17;
 struct fhashentry6 *VAR_18;
 u_int VAR_19;

 VAR_16 = FUNC_1(sizeof(struct fhash_cfg), VAR_7, VAR_8 | VAR_9);

 VAR_16->size = 512;

 VAR_16->head = FUNC_1(sizeof(struct fhashbhead) * VAR_16->size, VAR_7,
     VAR_8 | VAR_9);
 for (VAR_19 = 0; VAR_19 < VAR_16->size; VAR_19++)
  FUNC_0(&VAR_16->head[VAR_19]);


 VAR_17 = &VAR_16->fe4;
 VAR_18 = &VAR_16->fe6;
 if (VAR_15 & VAR_5) {
  FUNC_2(&VAR_17->sip, 0xFF, sizeof(VAR_17->sip));
  FUNC_2(&VAR_18->sip6, 0xFF, sizeof(VAR_18->sip6));
 }
 if (VAR_15 & VAR_2) {
  FUNC_2(&VAR_17->dip, 0xFF, sizeof(VAR_17->dip));
  FUNC_2(&VAR_18->dip6, 0xFF, sizeof(VAR_18->dip6));
 }
 if (VAR_15 & VAR_6) {
  FUNC_2(&VAR_17->e.sport, 0xFF, sizeof(VAR_17->e.sport));
  FUNC_2(&VAR_18->e.sport, 0xFF, sizeof(VAR_18->e.sport));
 }
 if (VAR_15 & VAR_3) {
  FUNC_2(&VAR_17->e.dport, 0xFF, sizeof(VAR_17->e.dport));
  FUNC_2(&VAR_18->e.dport, 0xFF, sizeof(VAR_18->e.dport));
 }
 if (VAR_15 & VAR_4) {
  FUNC_2(&VAR_17->e.proto, 0xFF, sizeof(VAR_17->e.proto));
  FUNC_2(&VAR_18->e.proto, 0xFF, sizeof(VAR_18->e.proto));
 }

 VAR_17->e.af = VAR_0;
 VAR_18->e.af = VAR_1;

 *VAR_12 = VAR_16;
 VAR_13->state = VAR_16->head;
 VAR_13->xstate = &VAR_16->fe4;
 VAR_13->data = VAR_16->size;
 VAR_13->lookup = VAR_10;

 return (0);
}
