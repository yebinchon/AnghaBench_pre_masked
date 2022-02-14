
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {int dummy; } ;
struct btsdio_data {struct sdio_func* func; TYPE_1__* hdev; } ;
struct TYPE_4__ {int err_rx; } ;
struct TYPE_3__ {TYPE_2__ stat; int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct btsdio_data*) ;
 struct btsdio_data* FUNC_2 (struct sdio_func*) ;
 int FUNC_3 (struct sdio_func*,int ,int *) ;
 int FUNC_4 (struct sdio_func*,int,int ,int *) ;

__attribute__((used)) static void FUNC_5(struct sdio_func *VAR_3)
{
 struct btsdio_data *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 FUNC_0("%s", VAR_4->hdev->name);

 VAR_5 = FUNC_3(VAR_3, VAR_1, ((void*)0));
 if (VAR_5 & 0x01) {
  FUNC_4(VAR_3, 0x01, VAR_0, ((void*)0));

  if (FUNC_1(VAR_4) < 0) {
   VAR_4->hdev->stat.err_rx++;
   FUNC_4(VAR_4->func, 0x01, VAR_2, ((void*)0));
  }
 }
}
