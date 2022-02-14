
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_object {int dummy; } ;
struct nvkm_client {int notify; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nvkm_object*,char*,char const*) ;
 struct nvkm_client* FUNC_2 (struct nvkm_object*) ;
 int FUNC_3 (struct nvkm_client*,int) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_object *VAR_0, bool VAR_1)
{
 struct nvkm_client *VAR_2 = FUNC_2(VAR_0);
 const char *VAR_3[2] = { "fini", "suspend" };
 int VAR_4;
 FUNC_1(VAR_0, "%s notify\n", VAR_3[VAR_1]);
 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2->notify); VAR_4++)
  FUNC_3(VAR_2, VAR_4);
 return 0;
}
