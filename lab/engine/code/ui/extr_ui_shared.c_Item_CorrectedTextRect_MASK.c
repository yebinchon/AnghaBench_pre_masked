
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ h; int y; scalar_t__ w; } ;
typedef TYPE_1__ rectDef_t ;
struct TYPE_7__ {TYPE_1__ textRect; } ;
typedef TYPE_2__ itemDef_t ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static rectDef_t *FUNC_1(itemDef_t *VAR_0) {
 static rectDef_t VAR_1;
 FUNC_0(&VAR_1, 0, sizeof(rectDef_t));
 if (VAR_0) {
  VAR_1 = VAR_0->textRect;
  if (VAR_1.w) {
   VAR_1.y -= VAR_1.h;
  }
 }
 return &VAR_1;
}
