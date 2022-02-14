
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_2__ {int octet; } ;
struct bridge_if {int hold_time; int prot_spec; int br_type; int sysindex; TYPE_1__ br_addr; int bif_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *,struct bridge_if*) ;
 int FUNC_2 (struct bridge_if*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char const*,int ) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static struct bridge_if *
FUNC_7(const char *VAR_7, uint32_t VAR_8, const u_char *VAR_9)
{
 struct bridge_if *VAR_10;

 if ((VAR_10 = (struct bridge_if *) FUNC_3(sizeof(*VAR_10)))== ((void*)0)) {
  FUNC_6(VAR_3, "bridge new interface failed: %s",
      FUNC_4(VAR_6));
  return (((void*)0));
 }

 FUNC_2(VAR_10, sizeof(struct bridge_if));
 FUNC_5(VAR_10->bif_name, VAR_7, VAR_2);
 FUNC_0(VAR_9, VAR_10->br_addr.octet, VAR_1);
 VAR_10->sysindex = VAR_8;
 VAR_10->br_type = VAR_0;

 VAR_10->hold_time = 1 * 100;
 VAR_10->prot_spec = VAR_5;
 FUNC_1(&VAR_4, VAR_10);

 return (VAR_10);
}
