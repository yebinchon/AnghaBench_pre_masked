
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iowait {int (* init_priority ) (struct iowait*) ;scalar_t__ priority; } ;


 int FUNC_0 (struct iowait*) ;

__attribute__((used)) static inline void FUNC_1(struct iowait *VAR_0)
{
 VAR_0->priority = 0;
 if (VAR_0->init_priority)
  VAR_0->init_priority(VAR_0);
}
