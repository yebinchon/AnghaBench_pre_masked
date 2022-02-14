
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct output {int dummy; } ;
struct host1x {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct output*,char*,...) ;
 int FUNC_5 (struct host1x*,int ) ;
 unsigned int FUNC_6 (struct host1x*) ;

__attribute__((used)) static void FUNC_7(struct host1x *VAR_0, struct output *VAR_1)
{
 unsigned int VAR_2;

 FUNC_4(VAR_1, "---- mlocks ----\n");

 for (VAR_2 = 0; VAR_2 < FUNC_6(VAR_0); VAR_2++) {
  u32 VAR_3 =
   FUNC_5(VAR_0, FUNC_0(VAR_2));
  if (FUNC_2(VAR_3))
   FUNC_4(VAR_1, "%u: locked by channel %u\n",
    VAR_2, FUNC_1(VAR_3));
  else if (FUNC_3(VAR_3))
   FUNC_4(VAR_1, "%u: locked by cpu\n", VAR_2);
  else
   FUNC_4(VAR_1, "%u: unlocked\n", VAR_2);
 }

 FUNC_4(VAR_1, "\n");
}
