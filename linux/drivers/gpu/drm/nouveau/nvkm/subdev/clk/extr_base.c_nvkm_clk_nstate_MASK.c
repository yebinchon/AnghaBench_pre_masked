
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_clk {scalar_t__ allow_reclock; } ;


 int FUNC_0 (char const*,int ,long*) ;
 int FUNC_1 (struct nvkm_clk*,long) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct nvkm_clk *VAR_0, const char *VAR_1, int VAR_2)
{
 int VAR_3 = 1;

 if (VAR_0->allow_reclock && !FUNC_2(VAR_1, "auto", VAR_2))
  return -2;

 if (FUNC_2(VAR_1, "disabled", VAR_2)) {
  char VAR_4 = VAR_1[VAR_2];
  long VAR_5;

  ((char *)VAR_1)[VAR_2] = '\0';
  if (!FUNC_0(VAR_1, 0, &VAR_5)) {
   VAR_3 = FUNC_1(VAR_0, VAR_5);
   if (VAR_3 < 0)
    VAR_3 = 1;
  }
  ((char *)VAR_1)[VAR_2] = VAR_4;
 }

 return VAR_3 - 2;
}
