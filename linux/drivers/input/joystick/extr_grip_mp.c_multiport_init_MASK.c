
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct grip_mp {int gameport; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (struct grip_mp*) ;

__attribute__((used)) static int FUNC_3(struct grip_mp *VAR_0)
{
 int VAR_1, VAR_2 = 0, VAR_3 = 0;
 u32 VAR_4;

 VAR_1 = FUNC_1(VAR_0->gameport, &VAR_4);
 while (!VAR_1 && VAR_3 < 4) {
  VAR_1 = FUNC_1(VAR_0->gameport, &VAR_4);
  VAR_3++;
 }

 if (VAR_1)
  FUNC_0("multiport_init(): digital mode activated.\n");
 else {
  FUNC_0("multiport_init(): unable to activate digital mode.\n");
  return 0;
 }


 for (VAR_3 = 0; VAR_3 < 4096; VAR_3++) {
  if (FUNC_2(VAR_0)) {
   VAR_2 = 1;
   break;
  }
 }
 FUNC_0("multiport_init(): initialized == %d\n", VAR_2);
 return VAR_2;
}
