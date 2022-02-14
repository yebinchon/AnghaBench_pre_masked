
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct id {unsigned long val; int pentry; } ;
struct TYPE_2__ {int * entry; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (int) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ,struct id*) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(struct id *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = -1;

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 < VAR_0) {
  FUNC_2(VAR_2.entry[VAR_4], VAR_3);
  VAR_3->val = VAR_4;
  VAR_3->pentry = FUNC_3(&VAR_2.entry[VAR_4]);
  VAR_5 = VAR_4;
 }
 FUNC_0(VAR_4 > VAR_0);

 return VAR_5;
}
