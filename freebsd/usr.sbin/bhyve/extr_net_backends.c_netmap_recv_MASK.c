
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct netmap_slot {int flags; int len; int buf_idx; } ;
struct netmap_ring {scalar_t__ head; scalar_t__ tail; scalar_t__ cur; struct netmap_slot* slot; } ;
struct netmap_priv {struct netmap_ring* rx; } ;
struct net_backend {scalar_t__ opaque; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int ssize_t ;


 int VAR_0 ;
 void* FUNC_0 (struct netmap_ring*,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*,void*,int) ;
 scalar_t__ FUNC_4 (struct netmap_ring*,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_5(struct net_backend *VAR_2, struct iovec *VAR_3, int VAR_4)
{
 struct netmap_priv *VAR_5 = (struct netmap_priv *)VAR_2->opaque;
 struct netmap_slot *VAR_6 = ((void*)0);
 struct netmap_ring *VAR_7;
 void *VAR_8;
 int VAR_9;
 ssize_t VAR_10 = 0;
 uint32_t VAR_11;

 FUNC_2(VAR_4);

 VAR_7 = VAR_5->rx;
 VAR_11 = VAR_7->head;
 VAR_8 = VAR_3->iov_base;
 VAR_9 = VAR_3->iov_len;

 do {
  int VAR_12;
  void *VAR_13;

  if (VAR_11 == VAR_7->tail) {
   return (0);
  }

  VAR_6 = VAR_7->slot + VAR_11;
  VAR_13 = FUNC_0(VAR_7, VAR_6->buf_idx);
  VAR_12 = VAR_6->len;

  for (;;) {
   int VAR_14 = VAR_12 < VAR_9 ?
       VAR_12 : VAR_9;

   FUNC_3(VAR_8, VAR_13, VAR_14);
   VAR_13 += VAR_14;
   VAR_12 -= VAR_14;
   VAR_8 += VAR_14;
   VAR_9 -= VAR_14;
   VAR_10 += VAR_14;

   if (VAR_12 == 0) {
    break;
   }

   VAR_3++;
   VAR_4--;
   if (VAR_4 == 0) {

    FUNC_1(("Short iov, drop %zd bytes\n",
        VAR_10));
    return (-VAR_0);
   }
   VAR_8 = VAR_3->iov_base;
   VAR_9 = VAR_3->iov_len;
  }

  VAR_11 = FUNC_4(VAR_7, VAR_11);

 } while (VAR_6->flags & VAR_1);


 VAR_7->head = VAR_7->cur = VAR_11;

 return (VAR_10);
}
