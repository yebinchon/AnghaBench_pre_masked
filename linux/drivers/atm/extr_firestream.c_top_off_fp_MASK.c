
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {struct FS_BPENTRY* data; int head; } ;
struct fs_dev {int dummy; } ;
struct freepool {scalar_t__ nr_buffers; int bufsize; int offset; int n; } ;
struct FS_BPENTRY {int flags; int next; int bsa; int aal_bufsize; struct freepool* fp; struct sk_buff* skb; } ;
typedef int gfp_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_4 (int,int ) ;
 struct FS_BPENTRY* FUNC_5 (long) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,char*,...) ;
 struct FS_BPENTRY* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct fs_dev*,struct freepool*) ;
 int FUNC_10 (struct fs_dev*,int ) ;
 int FUNC_11 (struct FS_BPENTRY*) ;
 int FUNC_12 (struct fs_dev*,int ,int) ;

__attribute__((used)) static void FUNC_13 (struct fs_dev *VAR_3, struct freepool *VAR_4,
   gfp_t VAR_5)
{
 struct FS_BPENTRY *VAR_6, *VAR_7;
 struct sk_buff *VAR_8;
 int VAR_9 = 0;
 u32 VAR_10;

 FUNC_7 (VAR_2, "Topping off queue at %x (%d-%d/%d)\n",
      VAR_4->offset, FUNC_10 (VAR_3, FUNC_0 (VAR_4->offset)), VAR_4->n,
      VAR_4->nr_buffers);
 while (FUNC_9(VAR_3, VAR_4) < VAR_4->nr_buffers) {

  VAR_8 = FUNC_4 (VAR_4->bufsize, VAR_5);
  FUNC_7 (VAR_1, "Alloc rec-skb: %p(%d)\n", VAR_8, VAR_4->bufsize);
  if (!VAR_8) break;
  VAR_7 = FUNC_8 (sizeof (struct FS_BPENTRY), VAR_5);
  FUNC_7 (VAR_1, "Alloc rec-d: %p(%zd)\n", VAR_7, sizeof (struct FS_BPENTRY));
  if (!VAR_7) {
   FUNC_7 (VAR_1, "Free rec-skb: %p\n", VAR_8);
   FUNC_6 (VAR_8);
   break;
  }

  FUNC_7 (VAR_2, "Adding skb %p desc %p -> %p(%p) ",
       VAR_8, VAR_7, VAR_8->data, VAR_8->head);
  VAR_9++;
  VAR_7->flags = VAR_0 | VAR_4->bufsize;
  VAR_7->next = FUNC_11 (((void*)0));
  VAR_7->bsa = FUNC_11 (VAR_8->data);
  VAR_7->aal_bufsize = VAR_4->bufsize;
  VAR_7->skb = VAR_8;
  VAR_7->fp = VAR_4;







  VAR_10 = FUNC_10 (VAR_3, FUNC_2(VAR_4->offset));
  FUNC_7 (VAR_2, "link at %x\n", VAR_10);
  if (VAR_10) {
   VAR_6 = FUNC_5 ((long) VAR_10);
   VAR_6->next = FUNC_11(VAR_7);
   VAR_6->flags &= ~VAR_0;
  } else
   FUNC_12 (VAR_3, FUNC_3(VAR_4->offset), FUNC_11(VAR_7));

  FUNC_12 (VAR_3, FUNC_2(VAR_4->offset), FUNC_11 (VAR_7));
  VAR_4->n++;
  FUNC_12 (VAR_3, FUNC_1(VAR_4->offset), 1);
 }

 FUNC_7 (VAR_2, "Added %d entries. \n", VAR_9);
}
