
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gmesh {int dummy; } ;
struct gclass {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct gclass* FUNC_2 (struct gmesh*,char*) ;
 int FUNC_3 (struct gmesh*) ;
 int FUNC_4 (struct gmesh*) ;
 int FUNC_5 (struct gclass*,int ,char const*) ;
 int FUNC_6 (struct gclass*,int ,char const*) ;
 int FUNC_7 (int ,char*) ;

void
FUNC_8(int32_t VAR_1, const char *VAR_2)
{
 struct gmesh VAR_3;
 struct gclass *VAR_4;
 int VAR_5;

 FUNC_1(VAR_2 != ((void*)0));
 FUNC_1(VAR_1 > 0);

 FUNC_0("===> getting partitions for %s <===", VAR_2);


 if ((VAR_5 = FUNC_4(&VAR_3)) != 0) {
  FUNC_7(VAR_0, "cannot get GEOM tree: %m");
  return;
 }






 if ((VAR_4 = FUNC_2(&VAR_3, "MBR")) != ((void*)0)) {
  FUNC_6(VAR_4, VAR_1, VAR_2);
 } else {
  FUNC_0("cannot find \"MBR\" geom class");
 }





 if ((VAR_4 = FUNC_2(&VAR_3, "BSD")) != ((void*)0)) {
  FUNC_5(VAR_4, VAR_1, VAR_2);
 } else {

  FUNC_0("cannot find \"BSD\" geom class");
 }





 if ((VAR_4 = FUNC_2(&VAR_3, "SUN")) != ((void*)0)) {
  FUNC_5(VAR_4, VAR_1, VAR_2);
 } else {

  FUNC_0("cannot find \"SUN\" geom class");
 }

 FUNC_3(&VAR_3);
}
