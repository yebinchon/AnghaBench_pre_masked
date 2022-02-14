
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct ib_dm_svc_entries {TYPE_1__* service_entries; } ;
struct TYPE_4__ {void* status; } ;
struct ib_dm_mad {TYPE_2__ mad_hdr; scalar_t__ data; } ;
struct TYPE_3__ {int name; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ib_dm_svc_entries*,int ,int) ;
 int FUNC_4 (int ,int,char*,char*,int ) ;

__attribute__((used)) static void FUNC_5(u64 VAR_3,
     u16 VAR_4, u8 VAR_5, u8 VAR_6, struct ib_dm_mad *VAR_7)
{
 struct ib_dm_svc_entries *VAR_8;

 FUNC_0(!VAR_3);

 if (!VAR_4 || VAR_4 > 16) {
  VAR_7->mad_hdr.status
   = FUNC_1(VAR_0);
  return;
 }

 if (VAR_4 > 2 || VAR_6 > VAR_5 || VAR_5 > 1) {
  VAR_7->mad_hdr.status
   = FUNC_1(VAR_1);
  return;
 }

 VAR_8 = (struct ib_dm_svc_entries *)VAR_7->data;
 FUNC_3(VAR_8, 0, sizeof(*VAR_8));
 VAR_8->service_entries[0].id = FUNC_2(VAR_3);
 FUNC_4(VAR_8->service_entries[0].name,
   sizeof(VAR_8->service_entries[0].name),
   "%s%016llx",
   VAR_2,
   VAR_3);

 VAR_7->mad_hdr.status = 0;
}
