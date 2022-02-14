
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
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int const*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(loader_block *VAR_3, const amb_dev *VAR_4,
   const struct ihex_binrec *VAR_5)
{
  transfer_block * VAR_6 = &VAR_3->payload.transfer;

  FUNC_0 (VAR_0|VAR_1, "loader_write");

  VAR_6->address = VAR_5->addr;
  VAR_6->count = FUNC_2(FUNC_1(VAR_5->len) / 4);
  FUNC_4(VAR_6->data, VAR_5->data, FUNC_1(VAR_5->len));
  return FUNC_3 (VAR_3, VAR_4, VAR_2);
}
