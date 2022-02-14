
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int dummy; } ;
struct ref {int dummy; } ;


 int FUNC_0 (struct ref*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (struct transport*,struct ref*) ;
 int FUNC_4 (struct transport*) ;

__attribute__((used)) static int FUNC_5(struct transport *VAR_1, struct ref *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);
 if (VAR_3) {
  FUNC_1("fetch", "fetch_refs", VAR_0);
  VAR_3 = FUNC_3(VAR_1, VAR_2);
  FUNC_2("fetch", "fetch_refs", VAR_0);
 }
 if (!VAR_3)




  return 0;
 FUNC_4(VAR_1);
 return VAR_3;
}
