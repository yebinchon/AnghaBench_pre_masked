
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_selftest {int (* func ) (void*) ;int name; int enabled; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct drm_selftest*,unsigned long) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct drm_selftest *VAR_1,
    unsigned long VAR_2,
    void *VAR_3)
{
 int VAR_4 = 0;

 FUNC_3(VAR_1, VAR_2);


 for (; VAR_2--; VAR_1++) {
  if (!VAR_1->enabled)
   continue;

  FUNC_1("drm: Running %s\n", VAR_1->name);
  VAR_4 = VAR_1->func(VAR_3);
  if (VAR_4)
   break;
 }

 if (FUNC_0(VAR_4 > 0 || VAR_4 == -VAR_0,
   "%s returned %d, conflicting with selftest's magic values!\n",
   VAR_1->name, VAR_4))
  VAR_4 = -1;

 FUNC_2();
 return VAR_4;
}
