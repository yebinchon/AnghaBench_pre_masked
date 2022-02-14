
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si_sm_data {int write_count; int * write_data; int seq; TYPE_1__* io; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static inline void FUNC_3(struct si_sm_data *VAR_2)
{
 int VAR_3;

 if (VAR_1 & VAR_0) {
  FUNC_1(VAR_2->io->dev, "write %d bytes seq=0x%02X",
   VAR_2->write_count, VAR_2->seq);
  for (VAR_3 = 0; VAR_3 < VAR_2->write_count; VAR_3++)
   FUNC_2(" %02x", VAR_2->write_data[VAR_3]);
  FUNC_2("\n");
 }
 for (VAR_3 = 0; VAR_3 < VAR_2->write_count; VAR_3++)
  FUNC_0(VAR_2->write_data[VAR_3]);
}
