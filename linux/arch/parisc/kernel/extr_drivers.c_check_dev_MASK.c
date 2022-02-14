
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ hw_type; } ;
struct parisc_device {TYPE_1__ id; } ;
struct device {int * bus; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct parisc_device* FUNC_0 (struct device*) ;

__attribute__((used)) static inline int FUNC_1(struct device *VAR_2)
{
 if (VAR_2->bus == &VAR_1) {
  struct parisc_device *VAR_3;
  VAR_3 = FUNC_0(VAR_2);
  return VAR_3->id.hw_type != VAR_0;
 }
 return 1;
}
