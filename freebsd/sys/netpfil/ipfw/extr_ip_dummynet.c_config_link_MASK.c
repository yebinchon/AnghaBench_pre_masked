
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int len; } ;
struct TYPE_5__ {int link_nr; int delay; scalar_t__ bandwidth; int burst; TYPE_1__ oid; } ;
struct dn_schk {TYPE_2__ link; int * profile; } ;
struct dn_link {int link_nr; int delay; int burst; scalar_t__ bandwidth; TYPE_1__ oid; } ;
struct dn_id {int dummy; } ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int VAR_4 ;
 struct dn_schk* FUNC_4 (int) ;
 int FUNC_5 (struct dn_schk*) ;
 int FUNC_6 (struct dn_schk*) ;

__attribute__((used)) static int
FUNC_7(struct dn_link *VAR_5, struct dn_id *VAR_6)
{
 int VAR_7;

 if (VAR_5->oid.len != sizeof(*VAR_5)) {
  FUNC_0("invalid pipe len %d", VAR_5->oid.len);
  return VAR_1;
 }
 VAR_7 = VAR_5->link_nr;
 if (VAR_7 <= 0 || VAR_7 >= VAR_0)
  return VAR_1;







 VAR_5->delay = (VAR_5->delay * VAR_4) / 1000;

 VAR_5->burst *= 8 * VAR_4;

 FUNC_1();

 for (; VAR_7 < 2*VAR_0; VAR_7 += VAR_0) {
     struct dn_schk *VAR_8 = FUNC_4(VAR_7);
     if (VAR_8 == ((void*)0)) {
  FUNC_2();
  FUNC_0("sched %d not found", VAR_7);
  return VAR_1;
     }

     if (VAR_8->profile) {
  FUNC_3(VAR_8->profile, VAR_2);
  VAR_8->profile = ((void*)0);
     }

     VAR_8->link.oid = VAR_5->oid;
     VAR_8->link.link_nr = VAR_7;
     VAR_8->link.delay = VAR_5->delay;
     if (VAR_8->link.bandwidth != VAR_5->bandwidth) {

     VAR_8->link.bandwidth = VAR_5->bandwidth;
  FUNC_6(VAR_8);
     }
     VAR_8->link.burst = VAR_5->burst;
     FUNC_5(VAR_8);
 }
 VAR_3.id++;
 FUNC_2();
 return 0;
}
