
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fetch_negotiator {int data; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct commit*,int,int) ;
 int FUNC_1 (int ,struct commit*,int) ;

__attribute__((used)) static void FUNC_2(struct fetch_negotiator *VAR_2, struct commit *VAR_3)
{
 if (!(VAR_3->object.flags & VAR_1)) {
  FUNC_1(VAR_2->data, VAR_3, VAR_0 | VAR_1);
  FUNC_0(VAR_2->data, VAR_3, 1, 1);
 }
}
