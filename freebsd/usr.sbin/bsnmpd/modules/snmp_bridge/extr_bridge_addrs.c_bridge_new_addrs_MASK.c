
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tp_entry {int tp_addr; int sysindex; } ;
struct bridge_if {int f_tpa; int sysindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,struct tp_entry*,int *) ;
 int FUNC_2 (struct tp_entry*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_3 ;

struct tp_entry *
FUNC_6(uint8_t *VAR_4, struct bridge_if *VAR_5)
{
 struct tp_entry *VAR_6;

 if ((VAR_6 = (struct tp_entry *) FUNC_3(sizeof(*VAR_6))) == ((void*)0)) {
  FUNC_5(VAR_1, "bridge new address: failed: %s",
      FUNC_4(VAR_2));
  return (((void*)0));
 }

 FUNC_2(VAR_6, sizeof(*VAR_6));

 VAR_6->sysindex = VAR_5->sysindex;
 FUNC_0(VAR_4, VAR_6->tp_addr, VAR_0);
 FUNC_1(&VAR_3, VAR_6, &(VAR_5->f_tpa));

 return (VAR_6);
}
