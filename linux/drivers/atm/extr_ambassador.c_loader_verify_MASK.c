
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int data; int count; int address; } ;
typedef TYPE_2__ transfer_block ;
struct ihex_binrec {int len; int data; int addr; } ;
struct TYPE_6__ {TYPE_2__ transfer; } ;
struct TYPE_8__ {TYPE_1__ payload; } ;
typedef TYPE_3__ loader_block ;
typedef int amb_dev ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int const*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(loader_block *VAR_4, const amb_dev *VAR_5,
    const struct ihex_binrec *VAR_6)
{
  transfer_block * VAR_7 = &VAR_4->payload.transfer;
  int VAR_8;

  FUNC_0 (VAR_0|VAR_1, "loader_verify");

  VAR_7->address = VAR_6->addr;
  VAR_7->count = FUNC_2(FUNC_1(VAR_6->len) / 4);
  VAR_8 = FUNC_3 (VAR_4, VAR_5, VAR_3);
  if (!VAR_8 && FUNC_4(VAR_7->data, VAR_6->data, FUNC_1(VAR_6->len)))
    VAR_8 = -VAR_2;
  return VAR_8;
}
