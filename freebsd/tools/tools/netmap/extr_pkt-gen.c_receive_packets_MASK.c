
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ u_int ;
struct netmap_slot {int flags; scalar_t__ len; int buf_idx; } ;
struct netmap_ring {scalar_t__ head; scalar_t__ cur; struct netmap_slot* slot; } ;


 char* FUNC_0 (struct netmap_ring*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__,struct netmap_ring*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct netmap_ring*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct netmap_ring*) ;

__attribute__((used)) static int
FUNC_4(struct netmap_ring *VAR_1, u_int VAR_2, int VAR_3, uint64_t *VAR_4)
{
 u_int VAR_5, VAR_6, VAR_7;
 uint64_t VAR_8 = 0;
 u_int VAR_9 = 0;

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_8;

 VAR_5 = VAR_1->head;
 VAR_7 = FUNC_3(VAR_1);
 if (VAR_7 < VAR_2)
  VAR_2 = VAR_7;
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  struct netmap_slot *VAR_10 = &VAR_1->slot[VAR_5];
  char *VAR_11 = FUNC_0(VAR_1, VAR_10->buf_idx);

  *VAR_4 += VAR_10->len;
  if (VAR_3)
   FUNC_1(VAR_11, VAR_10->len, VAR_1, VAR_5);
  if (!(VAR_10->flags & VAR_0))
   VAR_9++;

  VAR_5 = FUNC_2(VAR_1, VAR_5);
 }
 VAR_1->head = VAR_1->cur = VAR_5;

 return (VAR_9);
}
