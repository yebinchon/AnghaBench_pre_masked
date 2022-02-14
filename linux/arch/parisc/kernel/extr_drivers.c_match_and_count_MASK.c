
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int dummy; } ;
struct match_count {int count; int driver; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int ,struct parisc_device*) ;
 struct parisc_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device * VAR_0, void * VAR_1)
{
 struct match_count * VAR_2 = VAR_1;
 struct parisc_device * VAR_3 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_0)) {
  if (FUNC_1(VAR_2->driver, VAR_3))
   VAR_2->count++;
 }
 return 0;
}
