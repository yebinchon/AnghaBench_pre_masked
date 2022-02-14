
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmxdev_filter {scalar_t__ state; scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct dmxdev_filter*) ;
 int FUNC_1 (struct dmxdev_filter*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct dmxdev_filter *VAR_4)
{
 if (VAR_4->state < VAR_1)
  return 0;

 if (VAR_4->type == VAR_3)
  FUNC_0(VAR_4);

 VAR_4->type = VAR_2;
 FUNC_1(VAR_4, VAR_0);
 return 0;
}
