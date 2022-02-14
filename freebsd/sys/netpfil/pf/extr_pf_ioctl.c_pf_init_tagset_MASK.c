
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pf_tagset {unsigned int mask; int avail; int * taghash; int * namehash; int seed; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 void* FUNC_3 (unsigned int,int,int ,int ) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static void
FUNC_5(struct pf_tagset *VAR_3, unsigned int *VAR_4,
    unsigned int VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;

 if (*VAR_4 == 0 || !FUNC_4(*VAR_4))
  *VAR_4 = VAR_5;

 VAR_7 = *VAR_4;
 VAR_3->namehash = FUNC_3(VAR_7, sizeof(*VAR_3->namehash), VAR_0,
     VAR_1);
 VAR_3->taghash = FUNC_3(VAR_7, sizeof(*VAR_3->taghash), VAR_0,
     VAR_1);
 VAR_3->mask = VAR_7 - 1;
 VAR_3->seed = FUNC_2();
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
  FUNC_1(&VAR_3->namehash[VAR_6]);
  FUNC_1(&VAR_3->taghash[VAR_6]);
 }
 FUNC_0(VAR_2, &VAR_3->avail);
}
