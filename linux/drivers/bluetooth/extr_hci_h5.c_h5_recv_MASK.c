
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hci_uart {TYPE_1__* hdev; struct h5* priv; } ;
struct h5 {scalar_t__ rx_pending; int (* rx_func ) (struct hci_uart*,unsigned char const) ;} ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (char*,int ,scalar_t__,int) ;
 int FUNC_1 (char*) ;
 unsigned char const VAR_0 ;
 int FUNC_2 (struct h5*) ;
 int FUNC_3 (struct h5*,unsigned char const) ;
 int FUNC_4 (struct hci_uart*,unsigned char const) ;

__attribute__((used)) static int FUNC_5(struct hci_uart *VAR_1, const void *VAR_2, int VAR_3)
{
 struct h5 *VAR_4 = VAR_1->priv;
 const unsigned char *VAR_5 = VAR_2;

 FUNC_0("%s pending %zu count %d", VAR_1->hdev->name, VAR_4->rx_pending,
        VAR_3);

 while (VAR_3 > 0) {
  int VAR_6;

  if (VAR_4->rx_pending > 0) {
   if (*VAR_5 == VAR_0) {
    FUNC_1("Too short H5 packet");
    FUNC_2(VAR_4);
    continue;
   }

   FUNC_3(VAR_4, *VAR_5);

   VAR_5++; VAR_3--;
   continue;
  }

  VAR_6 = VAR_4->rx_func(VAR_1, *VAR_5);
  if (VAR_6 < 0)
   return VAR_6;

  VAR_5 += VAR_6;
  VAR_3 -= VAR_6;
 }

 return 0;
}
