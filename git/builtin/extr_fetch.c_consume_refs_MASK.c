
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {TYPE_2__* remote; int url; TYPE_1__* smart_options; } ;
struct ref {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int connectivity_checked; } ;


 int FUNC_0 (int ,int ,int,struct ref*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (struct transport*) ;

__attribute__((used)) static int FUNC_4(struct transport *VAR_1, struct ref *VAR_2)
{
 int VAR_3 = VAR_1->smart_options
  ? VAR_1->smart_options->connectivity_checked : 0;
 int VAR_4;
 FUNC_1("fetch", "consume_refs", VAR_0);
 VAR_4 = FUNC_0(VAR_1->url,
     VAR_1->remote->name,
     VAR_3,
     VAR_2);
 FUNC_3(VAR_1);
 FUNC_2("fetch", "consume_refs", VAR_0);
 return VAR_4;
}
