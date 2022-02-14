
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int dummy; } ;
struct remote {int * url; } ;
struct ref {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 struct remote* FUNC_2 (char const*) ;
 int FUNC_3 (struct transport*,struct ref*) ;
 struct transport* FUNC_4 (struct remote*,int ) ;
 int FUNC_5 (struct transport*,int ,char*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_3, struct ref *VAR_4)
{
 struct remote *VAR_5;
 struct transport *VAR_6;
 int VAR_7 = VAR_2;
 int VAR_8;

 VAR_2 = 0;
 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5->url[0])
  FUNC_1(FUNC_0("Remote with no URL"));
 VAR_6 = FUNC_4(VAR_5, VAR_5->url[0]);

 FUNC_5(VAR_6, VAR_0, "1");
 FUNC_5(VAR_6, VAR_1, "1");
 VAR_8 = FUNC_3(VAR_6, VAR_4);
 VAR_2 = VAR_7;

 return VAR_8;
}
