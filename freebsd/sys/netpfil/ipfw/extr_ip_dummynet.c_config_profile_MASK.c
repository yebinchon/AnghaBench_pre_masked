
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct dn_schk {TYPE_3__* profile; } ;
struct TYPE_7__ {int len; } ;
struct dn_profile {int link_nr; scalar_t__ samples_no; TYPE_1__ oid; } ;
struct dn_id {int dummy; } ;
struct TYPE_10__ {int id; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_9__ {TYPE_2__ oid; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_6__ VAR_6 ;
 int FUNC_3 (TYPE_3__*,int ) ;
 struct dn_schk* FUNC_4 (int) ;
 TYPE_3__* FUNC_5 (int,int ,int) ;
 int FUNC_6 (TYPE_3__*,struct dn_profile*,int) ;

__attribute__((used)) static int
FUNC_7(struct dn_profile *VAR_7, struct dn_id *VAR_8)
{
 struct dn_schk *VAR_9;
 int VAR_10, VAR_11, VAR_12 = 0;

 if (VAR_7->oid.len < sizeof(*VAR_7)) {
  FUNC_0("short profile len %d", VAR_7->oid.len);
  return VAR_1;
 }
 VAR_10 = VAR_7->link_nr;
 if (VAR_10 <= 0 || VAR_10 >= VAR_0)
  return VAR_1;

 FUNC_1();
 for (; VAR_10 < 2*VAR_0; VAR_10 += VAR_0) {
  VAR_9 = FUNC_4(VAR_10);

  if (VAR_9 == ((void*)0)) {
   VAR_12 = VAR_1;
   break;
  }
  VAR_6.id++;




  if (VAR_9->profile && (VAR_7->samples_no == 0 ||
      VAR_9->profile->oid.len < VAR_7->oid.len)) {
   FUNC_3(VAR_9->profile, VAR_3);
   VAR_9->profile = ((void*)0);
  }
  if (VAR_7->samples_no == 0)
   continue;




  if (VAR_9->profile == ((void*)0))
   VAR_9->profile = FUNC_5(VAR_7->oid.len,
        VAR_3, VAR_4 | VAR_5);
  if (VAR_9->profile == ((void*)0)) {
   FUNC_0("no memory for profile %d", VAR_10);
   VAR_12 = VAR_2;
   break;
  }

  VAR_11 = VAR_9->profile->oid.len;
  if (VAR_11 < VAR_7->oid.len)
   VAR_11 = VAR_7->oid.len;
  FUNC_6(VAR_9->profile, VAR_7, VAR_7->oid.len);
  VAR_9->profile->oid.len = VAR_11;
 }
 FUNC_2();
 return VAR_12;
}
