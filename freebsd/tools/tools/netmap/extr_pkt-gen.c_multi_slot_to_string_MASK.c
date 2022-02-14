
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_slot {int len; int flags; } ;
struct netmap_ring {struct netmap_slot* slot; } ;


 unsigned int FUNC_0 (struct netmap_ring*,unsigned int) ;
 int FUNC_1 (char*,size_t,char*,int,int) ;

__attribute__((used)) static char *
FUNC_2(struct netmap_ring *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5;
 char *VAR_6 = VAR_3;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  struct netmap_slot *VAR_7 = &VAR_0->slot[VAR_1];
  int VAR_8 = FUNC_1(VAR_3, VAR_4, "|%u,%x|", VAR_7->len,
     VAR_7->flags);
  if (VAR_8 >= (int)VAR_4) {
   break;
  }
  VAR_3 += VAR_8;
  VAR_4 -= VAR_8;

  VAR_1 = FUNC_0(VAR_0, VAR_1);
 }

 return VAR_6;
}
