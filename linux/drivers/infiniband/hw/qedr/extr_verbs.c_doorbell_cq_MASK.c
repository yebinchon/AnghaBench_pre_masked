
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int value; int agg_flags; } ;
struct TYPE_4__ {int raw; TYPE_1__ data; } ;
struct qedr_cq {int db_addr; TYPE_2__ db; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qedr_cq *VAR_0, u32 VAR_1, u8 VAR_2)
{
 VAR_0->db.data.agg_flags = VAR_2;
 VAR_0->db.data.value = FUNC_0(VAR_1);
 FUNC_1(VAR_0->db.raw, VAR_0->db_addr);
}
