
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int* extendedComID; } ;
struct opal_header {TYPE_1__ cp; } ;
struct opal_dev {scalar_t__ cmd; } ;



__attribute__((used)) static void FUNC_0(struct opal_dev *VAR_0, u16 VAR_1)
{
 struct opal_header *VAR_2 = (struct opal_header *)VAR_0->cmd;

 VAR_2->cp.extendedComID[0] = VAR_1 >> 8;
 VAR_2->cp.extendedComID[1] = VAR_1;
 VAR_2->cp.extendedComID[2] = 0;
 VAR_2->cp.extendedComID[3] = 0;
}
