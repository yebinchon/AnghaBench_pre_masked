
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int write_hint; int __sector; int cmd_flags; } ;
struct TYPE_2__ {int bi_sector; } ;
struct bio {int bi_opf; int bi_write_hint; TYPE_1__ bi_iter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*,int) ;
 int FUNC_1 (struct request*,struct bio*,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct request *VAR_2, struct bio *VAR_3,
  unsigned int VAR_4)
{
 if (VAR_3->bi_opf & VAR_1)
  VAR_2->cmd_flags |= VAR_0;

 VAR_2->__sector = VAR_3->bi_iter.bi_sector;
 VAR_2->write_hint = VAR_3->bi_write_hint;
 FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_0(VAR_2, 1);
}
