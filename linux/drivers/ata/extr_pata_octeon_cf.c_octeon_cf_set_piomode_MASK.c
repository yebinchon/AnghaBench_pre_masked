
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int waitm; int pause; int wr_hld; int rd_hld; int we; int oe; scalar_t__ adr; void* ce; scalar_t__ wait; scalar_t__ page; scalar_t__ ale; scalar_t__ pages; scalar_t__ pagem; } ;
union cvmx_mio_boot_reg_timx {int u64; TYPE_1__ s; } ;
struct octeon_cf_port {int cs1; scalar_t__ is_true_ide; int cs0; } ;
struct ata_timing {int active; scalar_t__ setup; scalar_t__ cycle; } ;
struct ata_port {struct octeon_cf_port* private_data; } ;
struct ata_device {int pio_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ata_device*) ;
 int FUNC_3 (struct ata_device*,int ,struct ata_timing*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 void* FUNC_6 (unsigned int,int) ;
 int FUNC_7 (int ,unsigned int) ;
 long long FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct ata_port *VAR_0, struct ata_device *VAR_1)
{
 struct octeon_cf_port *VAR_2 = VAR_0->private_data;
 union cvmx_mio_boot_reg_timx VAR_3;
 int VAR_4;
 struct ata_timing VAR_5;

 unsigned int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 int VAR_10;





 if (FUNC_8() <= 800000000)
  VAR_6 = 4;
 else
  VAR_6 = 8;
 VAR_4 = (int)((1000000000000LL * VAR_6) / FUNC_8());

 FUNC_0(FUNC_3(VAR_1, VAR_1->pio_mode, &VAR_5, VAR_4, VAR_4));

 VAR_10 = VAR_5.active;
 if (VAR_10)
  VAR_10--;

 VAR_8 = FUNC_6(VAR_6, 20);
 if (VAR_8)
  VAR_8--;

 VAR_9 = (int)VAR_5.cycle - (int)VAR_5.active -
  (int)VAR_5.setup - VAR_8;
 if (VAR_9 < 0)
  VAR_9 = 0;
 if (VAR_9)
  VAR_9--;

 FUNC_7(VAR_2->cs0, VAR_6);
 if (VAR_2->is_true_ide)

  FUNC_7(VAR_2->cs1, VAR_6);


 VAR_7 = FUNC_2(VAR_1);

 VAR_3.u64 = FUNC_4(FUNC_1(VAR_2->cs0));

 VAR_3.s.pagem = 0;

 VAR_3.s.waitm = VAR_7;

 VAR_3.s.pages = 0;

 VAR_3.s.ale = 0;

 VAR_3.s.page = 0;

 VAR_3.s.wait = 0;

 VAR_3.s.pause = VAR_9;

 VAR_3.s.wr_hld = VAR_8;

 VAR_3.s.rd_hld = VAR_8;

 VAR_3.s.we = VAR_10;

 VAR_3.s.oe = VAR_10;

 VAR_3.s.ce = FUNC_6(VAR_6, 5);

 VAR_3.s.adr = 0;


 FUNC_5(FUNC_1(VAR_2->cs0), VAR_3.u64);
 if (VAR_2->is_true_ide)

  FUNC_5(FUNC_1(VAR_2->cs1),
          VAR_3.u64);
}
