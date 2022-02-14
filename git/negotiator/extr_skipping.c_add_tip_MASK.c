
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fetch_negotiator {int data; int * known_common; } ;
struct TYPE_2__ {int flags; } ;
struct commit {TYPE_1__ object; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct commit*,int ) ;

__attribute__((used)) static void FUNC_1(struct fetch_negotiator *VAR_1, struct commit *VAR_2)
{
 VAR_1->known_common = ((void*)0);
 if (VAR_2->object.flags & VAR_0)
  return;
 FUNC_0(VAR_1->data, VAR_2, 0);
}
