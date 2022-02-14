
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {struct vmw_cmdbuf_man* cman; scalar_t__ has_mob; } ;
struct vmw_cmdbuf_man {int dummy; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct vmw_cmdbuf_man*) ;
 int FUNC_3 (struct vmw_cmdbuf_man*,int,int) ;
 int FUNC_4 (struct vmw_private*) ;

__attribute__((used)) static int FUNC_5(struct vmw_private *VAR_0)
{
 int VAR_1;

 if (VAR_0->has_mob) {
  VAR_1 = FUNC_4(VAR_0);
  if (FUNC_1(VAR_1 != 0)) {
   FUNC_0("Unable to initialize "
      "guest Memory OBjects.\n");
   return VAR_1;
  }
 }

 if (VAR_0->cman) {
  VAR_1 = FUNC_3(VAR_0->cman,
            256*4096, 2*4096);
  if (VAR_1) {
   struct vmw_cmdbuf_man *VAR_2 = VAR_0->cman;

   VAR_0->cman = ((void*)0);
   FUNC_2(VAR_2);
  }
 }

 return 0;
}
