
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct netmap_ring {size_t head; size_t tail; int nr_buf_size; size_t cur; TYPE_1__* slot; } ;
struct netmap_priv {struct netmap_ring* tx; } ;
struct net_backend {int fd; scalar_t__ opaque; } ;
struct iovec {int iov_len; void* iov_base; } ;
typedef int ssize_t ;
struct TYPE_2__ {int len; scalar_t__ flags; int buf_idx; } ;


 void* FUNC_0 (struct netmap_ring*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct iovec*,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (void*,void*,int) ;
 size_t FUNC_5 (struct netmap_ring*,size_t) ;

__attribute__((used)) static ssize_t
FUNC_6(struct net_backend *VAR_2, struct iovec *VAR_3,
     int VAR_4)
{
 struct netmap_priv *VAR_5 = (struct netmap_priv *)VAR_2->opaque;
 struct netmap_ring *VAR_6;
 ssize_t VAR_7 = 0;
 int VAR_8;
 int VAR_9;
 uint32_t VAR_10;
 void *VAR_11;
 int VAR_12;

 VAR_6 = VAR_5->tx;
 VAR_10 = VAR_6->head;
 if (VAR_10 == VAR_6->tail) {
  FUNC_1(("No space, drop %zu bytes\n", FUNC_2(VAR_3, VAR_4)));
  goto txsync;
 }
 VAR_11 = FUNC_0(VAR_6, VAR_6->slot[VAR_10].buf_idx);
 VAR_8 = VAR_6->nr_buf_size;
 VAR_9 = 0;

 for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++) {
  int VAR_13 = VAR_3[VAR_12].iov_len;
  void *VAR_14 = VAR_3[VAR_12].iov_base;

  VAR_7 += VAR_13;





  for (;;) {
   int VAR_15;

   VAR_15 = VAR_13 < VAR_8 ? VAR_13 : VAR_8;
   FUNC_4(VAR_11, VAR_14, VAR_15);

   VAR_14 += VAR_15;
   VAR_13 -= VAR_15;
   VAR_11 += VAR_15;
   VAR_8 -= VAR_15;
   VAR_9 += VAR_15;

   if (VAR_13 == 0) {
    break;
   }

   VAR_6->slot[VAR_10].len = VAR_9;
   VAR_6->slot[VAR_10].flags = VAR_1;
   VAR_10 = FUNC_5(VAR_6, VAR_10);
   if (VAR_10 == VAR_6->tail) {




    FUNC_1(("No space, drop %zu bytes\n",
       FUNC_2(VAR_3, VAR_4)));
    goto txsync;
   }
   VAR_11 = FUNC_0(VAR_6, VAR_6->slot[VAR_10].buf_idx);
   VAR_8 = VAR_6->nr_buf_size;
   VAR_9 = 0;
  }
 }


 VAR_6->slot[VAR_10].len = VAR_9;
 VAR_6->slot[VAR_10].flags = 0;
 VAR_10 = FUNC_5(VAR_6, VAR_10);


 VAR_6->head = VAR_6->cur = VAR_10;
txsync:
 FUNC_3(VAR_2->fd, VAR_0, ((void*)0));

 return (VAR_7);
}
