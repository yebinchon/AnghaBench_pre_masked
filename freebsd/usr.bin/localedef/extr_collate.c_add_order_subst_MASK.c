
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int key; scalar_t__* ref; } ;
typedef TYPE_1__ subst_t ;
typedef int srch ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int,int) ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 () ;
 int* VAR_5 ;
 int FUNC_7 (int ,int,int ) ;
 int VAR_6 ;
 scalar_t__* VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;

void
FUNC_8(void)
{
 subst_t VAR_10;
 subst_t *VAR_11;
 int VAR_12;

 (void) FUNC_5(&VAR_10, 0, sizeof (VAR_10));
 for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
  VAR_10.ref[VAR_12] = VAR_7[VAR_12];
  VAR_7[VAR_12] = 0;
 }
 VAR_11 = FUNC_0(VAR_9, &VAR_9[VAR_4], &VAR_10);

 if (VAR_11 == ((void*)0)) {
  if ((VAR_11 = FUNC_3(1, sizeof(*VAR_11))) == ((void*)0)) {
   FUNC_4(VAR_6,"out of memory");
   return;
  }
  VAR_11->key = FUNC_6();
  FUNC_7(VAR_11->key,
      (VAR_5[VAR_4] | VAR_0),
      VAR_2);
  VAR_5[VAR_4] += 1;

  for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++) {
   VAR_11->ref[VAR_12] = VAR_10.ref[VAR_12];
  }

  FUNC_1(VAR_9, &VAR_9[VAR_4], VAR_11);

  if (FUNC_0(VAR_8, &VAR_8[VAR_4], VAR_11) != ((void*)0)) {
   VAR_1;
   return;
  }
  FUNC_1(VAR_8, &VAR_8[VAR_4], VAR_11);
 }
 VAR_3 = 0;






 FUNC_2(VAR_11->key);
}
