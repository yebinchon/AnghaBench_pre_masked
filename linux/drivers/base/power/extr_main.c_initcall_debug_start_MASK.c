
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ parent; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,void*,int ,char*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static ktime_t FUNC_4(struct device *VAR_2, void *VAR_3)
{
 if (!VAR_1)
  return 0;

 FUNC_0(VAR_2, "calling %pS @ %i, parent: %s\n", VAR_3,
   FUNC_3(VAR_0),
   VAR_2->parent ? FUNC_1(VAR_2->parent) : "none");
 return FUNC_2();
}
