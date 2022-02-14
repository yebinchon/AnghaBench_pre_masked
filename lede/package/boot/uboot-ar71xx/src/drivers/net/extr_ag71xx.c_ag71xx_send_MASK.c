
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct eth_device {scalar_t__ priv; } ;
struct ag71xx_ring {int curr; TYPE_1__* buf; } ;
struct ag71xx_desc {int ctrl; scalar_t__ data; } ;
struct ag71xx {TYPE_2__* dev; struct ag71xx_ring tx_ring; } ;
struct TYPE_4__ {char* name; } ;
struct TYPE_3__ {struct ag71xx_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ag71xx_desc*) ;
 int FUNC_2 (struct ag71xx*,int ,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (void volatile*) ;

__attribute__((used)) static int FUNC_7(struct eth_device *VAR_6, volatile void *VAR_7,
                       int VAR_8)
{
    struct ag71xx *VAR_9 = (struct ag71xx *) VAR_6->priv;
 struct ag71xx_ring *VAR_10 = &VAR_9->tx_ring;
 struct ag71xx_desc *VAR_11;
 int VAR_12;

 VAR_12 = VAR_10->curr % VAR_1;
 VAR_11 = VAR_10->buf[VAR_12].desc;

 if (!FUNC_1(VAR_11)) {
  FUNC_4("%s: tx buffer full\n", VAR_9->dev->name);
  return 1;
 }

 FUNC_3((u32) VAR_7, VAR_8);
    VAR_11->data = (u32) FUNC_6(VAR_7);
    VAR_11->ctrl = (VAR_8 & VAR_3);

 FUNC_0("%s: sending %#08x length %#08x\n",
  VAR_9->dev->name, VAR_11->data, VAR_11->ctrl);

 VAR_10->curr++;
 if (VAR_10->curr >= VAR_1){
  VAR_10->curr = 0;
 }


 FUNC_2(VAR_9, VAR_0, VAR_5);

    for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
    {
        if (FUNC_1(VAR_11))
            break;
        FUNC_5(10);
    }
    if (VAR_12 == VAR_4) {
        FUNC_4("%s: tx timed out!\n", VAR_9->dev->name);
  return -1;
 }


 FUNC_2(VAR_9, VAR_0, 0);
 VAR_11->data = 0;
 VAR_11->ctrl = VAR_2;

 return 0;
}
