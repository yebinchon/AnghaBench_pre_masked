
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct udphdr {int dummy; } ;
struct iphdr {int dummy; } ;
struct TYPE_5__ {int dmac_cmd_status; scalar_t__ data_status; scalar_t__ result_size; scalar_t__ buf_size; } ;
struct TYPE_8__ {TYPE_1__ descr; } ;
struct TYPE_7__ {int tot_len; int check; } ;
struct TYPE_6__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 TYPE_4__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 TYPE_2__* VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(int VAR_11)
{
 u16 *VAR_12;
 u32 VAR_13;
 int VAR_14;

 VAR_7.descr.buf_size = VAR_10 + VAR_11;
 VAR_8->tot_len = VAR_11 + sizeof(struct udphdr) +
        sizeof(struct iphdr);
 VAR_9->len = VAR_11 + sizeof(struct udphdr);

 VAR_8->check = 0;
 VAR_13 = 0;
 VAR_12 = (u16 *)VAR_8;
 for (VAR_14 = 0; VAR_14 < 5; VAR_14++)
  VAR_13 += *VAR_12++;
 VAR_8->check = ~(VAR_13 + (VAR_13 >> 16));

 VAR_7.descr.dmac_cmd_status = VAR_2 |
        VAR_4;
 VAR_7.descr.result_size = 0;
 VAR_7.descr.data_status = 0;

 FUNC_2();

 FUNC_1(VAR_0, VAR_5, VAR_6, 0);

 while ((VAR_7.descr.dmac_cmd_status & VAR_3) ==
        VAR_1)
  FUNC_0();
}
