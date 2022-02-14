
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct forth_stack {int dummy; } ;
struct TYPE_3__ {scalar_t__ severity; int description; int reason; } ;
typedef TYPE_1__ ExceptionInfo ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct forth_stack*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_1 (struct forth_stack *VAR_1, ExceptionInfo *VAR_2) {
  if (VAR_2->severity != VAR_0) {
    FUNC_0 (VAR_1, "Magick: %s (%s).", VAR_2->reason, VAR_2->description);
  }
}
