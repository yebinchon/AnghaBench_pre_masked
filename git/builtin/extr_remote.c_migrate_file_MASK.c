
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_4__ {int raw_nr; int * raw; } ;
struct TYPE_3__ {int raw_nr; int * raw; } ;
struct remote {int url_nr; scalar_t__ origin; int name; TYPE_2__ fetch; TYPE_1__ push; int * url; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (int ,int ,char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct strbuf*,char*,int ) ;
 int FUNC_3 (struct strbuf*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct remote *VAR_3)
{
 struct strbuf VAR_4 = VAR_2;
 int VAR_5;

 FUNC_2(&VAR_4, "remote.%s.url", VAR_3->name);
 for (VAR_5 = 0; VAR_5 < VAR_3->url_nr; VAR_5++)
  FUNC_0(VAR_4.buf, VAR_3->url[VAR_5], "^$", 0);
 FUNC_4(&VAR_4);
 FUNC_2(&VAR_4, "remote.%s.push", VAR_3->name);
 for (VAR_5 = 0; VAR_5 < VAR_3->push.raw_nr; VAR_5++)
  FUNC_0(VAR_4.buf, VAR_3->push.raw[VAR_5], "^$", 0);
 FUNC_4(&VAR_4);
 FUNC_2(&VAR_4, "remote.%s.fetch", VAR_3->name);
 for (VAR_5 = 0; VAR_5 < VAR_3->fetch.raw_nr; VAR_5++)
  FUNC_0(VAR_4.buf, VAR_3->fetch.raw[VAR_5], "^$", 0);
 if (VAR_3->origin == VAR_1)
  FUNC_5(FUNC_1("remotes/%s", VAR_3->name));
 else if (VAR_3->origin == VAR_0)
  FUNC_5(FUNC_1("branches/%s", VAR_3->name));
 FUNC_3(&VAR_4);

 return 0;
}
