
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_3__ {scalar_t__ ifq_len; } ;
struct ipoib_path {TYPE_1__ queue; scalar_t__ query; scalar_t__ ah; int valid; } ;
struct ipoib_header {scalar_t__ hwaddr; } ;
struct ipoib_dev_priv {int dev; int lock; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,struct mbuf*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ipoib_dev_priv*,struct ipoib_path*) ;
 struct ipoib_path* FUNC_4 (struct ipoib_dev_priv*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int ,int ,int) ;
 scalar_t__ FUNC_6 (struct ipoib_path*) ;
 int FUNC_7 (struct ipoib_dev_priv*,struct mbuf*,scalar_t__) ;
 scalar_t__ FUNC_8 (struct ipoib_path*) ;
 int FUNC_9 (struct ipoib_dev_priv*,struct ipoib_path*) ;
 int FUNC_10 (struct ipoib_dev_priv*,struct mbuf*,scalar_t__,int ) ;
 int FUNC_11 (struct mbuf*) ;
 struct ipoib_path* FUNC_12 (struct ipoib_dev_priv*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct ipoib_dev_priv*,struct ipoib_path*) ;
 int FUNC_14 (int *,int ) ;

__attribute__((used)) static void
FUNC_15(struct mbuf *VAR_3, struct ipoib_dev_priv *VAR_4, struct ipoib_header *VAR_5)
{
 struct ipoib_path *VAR_6;

 VAR_6 = FUNC_4(VAR_4, VAR_5->hwaddr + 4);
 if (!VAR_6 || !VAR_6->valid) {
  int VAR_7 = 0;

  if (!VAR_6) {
   VAR_6 = FUNC_12(VAR_4, VAR_5->hwaddr);
   VAR_7 = 1;
  }
  if (VAR_6) {
   if (FUNC_2(&VAR_6->queue) < VAR_1)
    FUNC_1(&VAR_6->queue, VAR_3);
   else {
    FUNC_5(VAR_4->dev, VAR_0, 1);
    FUNC_11(VAR_3);
   }

   if (!VAR_6->query && FUNC_13(VAR_4, VAR_6)) {
    FUNC_14(&VAR_4->lock, VAR_2);
    if (VAR_7)
     FUNC_9(VAR_4, VAR_6);
    return;
   } else
    FUNC_3(VAR_4, VAR_6);
  } else {
   FUNC_5(VAR_4->dev, VAR_0, 1);
   FUNC_11(VAR_3);
  }

  return;
 }

 if (FUNC_6(VAR_6) && FUNC_8(VAR_6)) {
  FUNC_7(VAR_4, VAR_3, FUNC_6(VAR_6));
 } else if (VAR_6->ah) {
  FUNC_10(VAR_4, VAR_3, VAR_6->ah, FUNC_0(VAR_5->hwaddr));
 } else if ((VAR_6->query || !FUNC_13(VAR_4, VAR_6)) &&
      VAR_6->queue.ifq_len < VAR_1) {
  FUNC_1(&VAR_6->queue, VAR_3);
 } else {
  FUNC_5(VAR_4->dev, VAR_0, 1);
  FUNC_11(VAR_3);
 }
}
