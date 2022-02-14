
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct lanai_dev {TYPE_1__ timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline void FUNC_2(struct lanai_dev *VAR_3)
{
 FUNC_1(&VAR_3->timer, VAR_2, 0);
 VAR_3->timer.expires = VAR_1 + VAR_0;
 FUNC_0(&VAR_3->timer);
}
