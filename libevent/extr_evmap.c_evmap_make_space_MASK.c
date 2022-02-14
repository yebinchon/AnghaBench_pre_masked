
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_signal_map {int nentries; void** entries; } ;


 int VAR_0 ;
 int FUNC_0 (void**,int ,int) ;
 scalar_t__ FUNC_1 (void**,int) ;

__attribute__((used)) static int
FUNC_2(struct event_signal_map *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_1->nentries <= VAR_2) {
  int VAR_4 = VAR_1->nentries ? VAR_1->nentries : 32;
  void **VAR_5;

  if (VAR_2 > VAR_0 / 2)
   return (-1);

  while (VAR_4 <= VAR_2)
   VAR_4 <<= 1;

  if (VAR_4 > VAR_0 / VAR_3)
   return (-1);

  VAR_5 = (void **)FUNC_1(VAR_1->entries, VAR_4 * VAR_3);
  if (VAR_5 == ((void*)0))
   return (-1);

  FUNC_0(&VAR_5[VAR_1->nentries], 0,
      (VAR_4 - VAR_1->nentries) * VAR_3);

  VAR_1->nentries = VAR_4;
  VAR_1->entries = VAR_5;
 }

 return (0);
}
