
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nr; } ;
struct TYPE_6__ {int nr; } ;
struct TYPE_5__ {int nr; } ;
struct wt_status {int status_format; int repo; TYPE_1__ ignored; TYPE_3__ untracked; TYPE_2__ change; } ;


 int FUNC_0 (char*) ;






 int FUNC_1 (char*,int ,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (struct wt_status*) ;
 int FUNC_5 (struct wt_status*) ;
 int FUNC_6 (struct wt_status*) ;
 int FUNC_7 (struct wt_status*) ;

void FUNC_8(struct wt_status *VAR_0)
{
 FUNC_1("status", VAR_0->repo, "count/changed", VAR_0->change.nr);
 FUNC_1("status", VAR_0->repo, "count/untracked",
      VAR_0->untracked.nr);
 FUNC_1("status", VAR_0->repo, "count/ignored", VAR_0->ignored.nr);

 FUNC_2("status", "print", VAR_0->repo);

 switch (VAR_0->status_format) {
 case 129:
  FUNC_7(VAR_0);
  break;
 case 131:
  FUNC_5(VAR_0);
  break;
 case 130:
  FUNC_6(VAR_0);
  break;
 case 128:
  FUNC_0("finalize_deferred_config() should have been called");
  break;
 case 132:
 case 133:
  FUNC_4(VAR_0);
  break;
 }

 FUNC_3("status", "print", VAR_0->repo);
}
