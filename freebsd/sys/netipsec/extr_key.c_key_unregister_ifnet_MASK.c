
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_2__ {size_t dir; } ;
struct secpolicy {scalar_t__ state; TYPE_1__ spidx; } ;
struct mbuf {int dummy; } ;


 int FUNC_0 (int,char*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct secpolicy*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct secpolicy*,int ) ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *,struct mbuf*,int ) ;
 struct mbuf* FUNC_7 (struct secpolicy*,int ,int ,int ) ;
 int FUNC_8 () ;

void
FUNC_9(struct secpolicy **VAR_10, u_int VAR_11)
{
 struct mbuf *VAR_12;
 u_int VAR_13;

 FUNC_3();
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  FUNC_0(VAR_10[VAR_13]->spidx.dir == VAR_0 ||
      VAR_10[VAR_13]->spidx.dir == VAR_1,
      ("invalid direction %u", VAR_10[VAR_13]->spidx.dir));

  if (VAR_10[VAR_13]->state != VAR_3)
   continue;
  VAR_10[VAR_13]->state = VAR_2;
  FUNC_5(&VAR_7[VAR_10[VAR_13]->spidx.dir],
      VAR_10[VAR_13], VAR_8);
  VAR_6--;
  FUNC_1(VAR_10[VAR_13], VAR_9);
 }
 FUNC_4();
 if (FUNC_2())
  FUNC_8();

 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_12 = FUNC_7(VAR_10[VAR_13], VAR_5, 0, 0);
  if (VAR_12 != ((void*)0))
   FUNC_6(((void*)0), VAR_12, VAR_4);
 }
}
