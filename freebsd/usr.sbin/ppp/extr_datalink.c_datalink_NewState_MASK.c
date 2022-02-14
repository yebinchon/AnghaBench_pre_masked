
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct datalink {unsigned int state; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct datalink*) ;
 int FUNC_1 (int ,char*,int ,unsigned int,...) ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct datalink *VAR_3, unsigned VAR_4)
{
  if (VAR_4 != VAR_3->state) {
    if (VAR_4 < sizeof VAR_2 / sizeof VAR_2[0]) {
      FUNC_1(VAR_1, "%s: %s -> %s\n", VAR_3->name, FUNC_0(VAR_3),
                 VAR_2[VAR_4]);
      VAR_3->state = VAR_4;
    } else
      FUNC_1(VAR_0, "%s: Can't enter state %d !\n", VAR_3->name, VAR_4);
  }
}
