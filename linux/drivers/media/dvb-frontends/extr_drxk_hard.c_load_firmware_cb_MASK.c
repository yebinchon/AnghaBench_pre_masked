
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firmware {int dummy; } ;
struct drxk_state {struct firmware const* fw; int * microcode_name; } ;


 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (struct drxk_state*) ;
 int FUNC_2 (char*,int *) ;
 int FUNC_3 (char*,int *) ;

__attribute__((used)) static void FUNC_4(const struct firmware *VAR_0,
        void *VAR_1)
{
 struct drxk_state *VAR_2 = VAR_1;

 FUNC_0(1, ": %s\n", VAR_0 ? "firmware loaded" : "firmware not loaded");
 if (!VAR_0) {
  FUNC_2("Could not load firmware file %s.\n",
   VAR_2->microcode_name);
  FUNC_3("Copy %s to your hotplug directory!\n",
   VAR_2->microcode_name);
  VAR_2->microcode_name = ((void*)0);
 }
 VAR_2->fw = VAR_0;

 FUNC_1(VAR_2);
}
