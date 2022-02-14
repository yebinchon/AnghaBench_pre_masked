
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {size_t dir; } ;
struct secpolicy {int state; int id; TYPE_1__ spidx; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct secpolicy*,int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct secpolicy*,int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,struct mbuf*,int ) ;
 struct mbuf* FUNC_8 (struct secpolicy*,int ,int ,int ) ;

int
FUNC_9(struct secpolicy **VAR_9, u_int VAR_10)
{
 struct mbuf *VAR_11;
 u_int VAR_12;

 FUNC_3();



 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  FUNC_0(VAR_9[VAR_12]->spidx.dir == VAR_1 ||
      VAR_9[VAR_12]->spidx.dir == VAR_2,
      ("invalid direction %u", VAR_9[VAR_12]->spidx.dir));

  if ((VAR_9[VAR_12]->id = FUNC_6()) == 0) {
   FUNC_4();
   return (VAR_0);
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  FUNC_5(&VAR_6[VAR_9[VAR_12]->spidx.dir],
      VAR_9[VAR_12], VAR_7);






  FUNC_1(FUNC_2(VAR_9[VAR_12]->id), VAR_9[VAR_12], VAR_8);
  VAR_9[VAR_12]->state = VAR_3;
 }
 FUNC_4();



 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_11 = FUNC_8(VAR_9[VAR_12], VAR_5, 0, 0);
  if (VAR_11 != ((void*)0))
   FUNC_7(((void*)0), VAR_11, VAR_4);
 }
 return (0);
}
